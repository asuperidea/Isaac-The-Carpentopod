// Main code for Isaac
// https://github.com/RiptideVideos/Isaac-The-Carpentopod

#include <IRremote.hpp>

// Motor control pins
const int enA = 2;
const int in1 = 9;
const int in2 = 10;
const int enB = 3;
const int in3 = 11;
const int in4 = 12;

// IR remote pin
#define IR_RECEIVE_PIN 8
// IR remote variables, each corisponds to a button on the remote
#define STOP 0xE916FF00
#define FORWARD 0xF30CFF00
#define BACKWARD 0xE718FF00
#define LEFT 0xBD42FF00
#define RIGHT 0xB54AFF00
// Change these above ^ hex codes if you have a differnt IR Remote

const int speed = 100; // how fast the motors spin. -255 (reverse) to 255. gears lower this by x3.75. Setting a negitive number will inverse controls

void setup() {
  // set pins to output
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  // open serial
  Serial.begin(115200);
  // begin IR
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
  // stop motors
  stopMotors();
}

void loop() {
if (IrReceiver.decode()) { // detect recived signal
    if (IrReceiver.decodedIRData.protocol != UNKNOWN) { // filter out garbage signals
      Serial.print("0x");
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); //print signal data in serial moniter
      unsigned long code = IrReceiver.decodedIRData.decodedRawData;
      switch (code) {
        case STOP: // detect stop button (0 by defualt)
          Serial.println("stop / 0 detected");
          stopMotors();
          break;
        case FORWARD: // detect forward button (1 by defualt)
          Serial.println("forward / 1 detected");
          forward(speed);
          break;
        case BACKWARD: // detect backwars button (2 by defualt)
          Serial.println("backward / 2 detected");
          backward(speed);
          break;
        case LEFT: // detect left turn button (7 by defualt)
          Serial.println("left / 7 detected");
          turnLeft(speed);
          break;
        case RIGHT: // detect right button (9 by defualt)
          Serial.println("right / 9 detected");
          turnRight(speed);
          break;
      }
    }
    IrReceiver.resume(); // continue detecting IR
  }
}

// Motor control funcs

// Speed range: -255 (full reverse) to 255 (full forward)
void motorA(int speed) { // only controls motor A
  if (speed >= 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  } else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    speed = -speed;
  }
  analogWrite(enA, speed);
}

void motorB(int speed) { // only controls motor B
  if (speed >= 0) {
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  } else {
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    speed = -speed;
  }
  analogWrite(enB, speed);
}

void forward(int speed) {
  motorA(speed);
  motorB(-speed);
}

void backward(int speed) {
  motorA(-speed);
  motorB(speed);
}

void turnLeft(int speed) {
  motorA(-speed);
  motorB(speed);
}

void turnRight(int speed) {
  motorA(speed);
  motorB(-speed);
}

void stopMotors() {
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}
