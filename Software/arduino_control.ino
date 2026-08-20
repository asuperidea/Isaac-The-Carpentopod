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
// 0
// 1 2* 3
// 4 5* 6
// 7 8* 9
// * Unused
#define STOP 0xE916FF00
#define FORWARDSLOW 0xF30CFF00
#define BACKWARDSLOW 0xA15EFF00
#define FORWARD 0xF708FF00
#define BACKWARD 0xA55AFF00
#define FORWARDFAST 0xBD42FF00
#define BACKWARDFAST 0xB54AFF00
// Change these above ^ hex codes if you have a differnt IR Remote

const int speed = 150; // how fast the motors spin. -255 (reverse) to 255. gears lower this by x3.75

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
        case FORWARDSLOW: // detect forward button (1 by defualt)
          Serial.println("forward slow / 1 detected");
          forward(speed*0.7);
          break;
        case BACKWARDSLOW: // detect backwars button (3 by defualt)
          Serial.println("backward slow / 3 detected");
          backward(speed*0.7);
          break;
        case FORWARD: // detect forward button (4 by defualt)
          Serial.println("forward / 4 detected");
          forward(speed);
          break;
        case BACKWARD: // detect backwars button (6 by defualt)
          Serial.println("backward / 6 detected");
          backward(speed);
          break;
        case FORWARDFAST: // detect forward button (7 by defualt)
          Serial.println("forward / 4 detected");
          forward(speed*1.4);
          break;
        case BACKWARDFAST: // detect backwars button (9 by defualt)
          Serial.println("backward / 6 detected");
          backward(speed*1.4);
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
  motorB(speed);
}

void backward(int speed) {
  motorA(-speed);
  motorB(-speed);
}

void stopMotors() {
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}
