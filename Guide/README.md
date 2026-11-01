# Isaac Guide
Want to build Isaac? This is his guide.

## Requirements
- 3D Printer
- Filament
- PLA glue
- Everything in [BOM](BOM.csv)

## Printing
### Legs
You will need to print the following parts for each leg pair (6 in total)

| Part            | Quantity | Total Quantity |
| --------------- | ----- | ----- |
| [Leg Part 1](<../3D Files/Legs/Carpentopod Leg Part 1 (1).stl>) | 2 | 12 | 
| [Leg Part 2](<../3D Files/Legs/Carpentopod Leg Part 2.stl>) | 2 | 12 |
| [Leg Part 3](<../3D Files/Legs/Carpentopod Leg Part 3.stl>) | 2 | 12 | 
| [Leg Part 4](<../3D Files/Legs/Carpentopod Leg Part 4.stl>) | 2 | 12 |
| [Leg Part 5](<../3D Files/Legs/Carpentopod Leg Part 5.stl>) | 1 | 6 |
| [Leg Part 5 Mirror](<../3D Files/Legs/Carpentopod Leg Part 5 Mirrored.stl>) | 1 | 6 |
| [Leg Part 6](<../3D Files/Legs/Carpentopod Leg Part 6.stl>) | 1 | 6 |
| [Leg Part 6 Mirror](<../3D Files/Legs/Carpentopod Leg Part 6 Mirrored.stl>) | 1 | 6 |
| | |
| Totals: | 12 | 72 |

Print parts 3-6 first. Print parts 1-2 together and pause printing to insert parts 3-6. You can do this easily with Bambu Studio.

### Backplate and Rotation

These parts secure the legs and help them rotate
| Part            | Quantity |
| --------------- | ----- |
| [Backplate](<../3D Files/Leg Others/Backplate.stl>)* | 6 |
| [Offset Shaft](<../3D Files/Leg Others/Offset Shaft.stl>) | 12 |
| [Power Beam](<../3D Files/Leg Others/Power Beam.stl>) | 4 |
| [Motor Power Beam](<../3D Files/Leg Others/Power Beam for Motors.stl>) | 2 |
| [Support Beam](<../3D Files/Leg Others/Support Beam.stl>) | 4 |
| | |
| Totals: | 28 |

*Pause print to insert bearing!

### Body

The body/middle holds the electronics
| Part            | Quantity | Optional
| --------------- | ----- | --- |
| [Main Plate](<../3D Files/Body/Basic Body/Body Main Plate.stl>) | 2 | No |
| [Layer 1](<../3D Files/Body/Basic Body/Body - Part 5.stl>) | 1 | No |
| [Layer 2](<../3D Files/Body/Basic Body/[Unused] Body - Part 6.stl>) | 1 | Yes |
| [Layer 3](<../3D Files/Body/Basic Body/Body - Part 4.stl>) | 1 | No |
| [Layer 4](<../3D Files/Body/Basic Body/[Unused] Body - Part 3.stl>) | 1 | Yes |
| | |
| Totals: | 6 |

Letters for Main Plate (Optional)
| Part            | Quantity | Optional
| --------------- | ----- | --- |
| [Letter A](<../3D Files/Body/Letters/Body - Letter A.stl>) | 2 | Yes |
| [Letter C](<../3D Files/Body/Letters/Body - Letter C.stl>) | 1 | Yes |
| [Letter I](<../3D Files/Body/Letters/Body - Letter I.stl>) | 1 | Yes |
| [Letter S](<../3D Files/Body/Letters/Body - Letter S.stl>) | 1 | Yes |
| | |
| Totals: | 5 |

## Assembly

### Leg parts

1. Connect parts 5 and 6 on two leg pairs to glued together [Offset Shafts](<../3D Files/Leg Others/Offset Shaft.stl>). Do this for each leg pair (6 in total)
2. Glue offset shafts to [Power Beams](<../3D Files/Leg Others/Power Beam.stl>) and slide the power beams into the bearings on a [Backplate](<../3D Files/Leg Others/Backplate.stl>). The two [Motor Power Beam](<../3D Files/Leg Others/Power Beam for Motors.stl>) should be attached to the inside most backplates.
3. Glue the backplates with legs together, making two sets with three backplates each.

### Body
 1. Glue the body layers to their slots on each [Main Plate](<../3D Files/Body/Basic Body/Body Main Plate.stl>).
 2. Glue the inward most backplates to the body main plates.
 
 ### Electronics
 1. Set up the electronics however you would like across the body layers.
 2. Wire the electronics following the [Wiring Diagram](<Circuit Image from Cirkit Designer.svg>)
 3. Insert the motors into the [Motor Power Beams](<../3D Files/Leg Others/Power Beam for Motors.stl>)

 ### Set Up and Control
 1. Turn on the arduino by plugging in the batteries.
 2. Use a computer or usb drive to load the [Control Code](<../Software/arduino_control.ino>) onto the arduino.
 3. Use the remote to control the robot:

Button 1 - Forward Slow
Button 3 - Backward Slow

Button 4 - Forward Normal
Button 6 - Backward Normal

Button 7 - Forward Fast
Button 9 - Backward Fast

Button 0 - Stop