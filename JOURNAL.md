# Isaac Project Journal

## Journal Pt 1

### Day 1: The start of CAD
**Jun 2, 2026 | Simon**  
June 2 2026 | Day 1 Journal

Today I designed each on of the parts for the legs (6 in total). The two largest parts are 2 CM wide, the entire leg is about 20 CM tall.

Tomorrow I hope to put the legs together in an assembly and fix any errors I find.

--------------------------------------------------

### Day 0: Idea + Whoops
**Jun 1, 2026 | Simon**

**What is Isaac?**  
Isaac will be a walking robot that uses 12 carpentopod linkages to walk.

**Why is Isaac being made?**  
Because the linkages are cool and I want to make a hardware project!

**How will Isaac be made?**  
I Plan to 3d print most, if not all, of Isaac's body and legs. I will also need to design some software so he can walk and build the circuitry for him.

Here's my game plan:
- (Re-learn) and use onshape* to design the legs and body.
- 3D print a prototype of the legs so I know they work.
- Fix any errors / Keep iterating on the legs until I get them right.
- Finalize design
- Design small circuit that uses 2 motors and my arduino to control the legs.
- Design the code to make sure the motors work.
- Find a way to link some sort of controller to the arduino
- Build it

**Footnote**  
So I kinda deleted this today but I didn't lose anything because I didn't start yet.

--------------------------------------------------

## Journal Pt 2

### Day 3/4: CAD Changes + Backplate
**Jun 9, 2026 | Simon**  
June 8 2026, June 9 2026 | Day 3 and 4 Journal

**On June 8:**  
Redesigned the Leg design because the legs were way to big (9in tall), now each leg is half as tall. Heres how I did this: I remade a "blueprint" drawing that had the basic rations and each parts full sketch. I copied this drawing for each one of the parts, designing each part in its own file.

I also designed a new backplate for the legs to mount on, the backplate uses the same bearing. I has holes in the top for a mounting bar of sorts.

**On June 9:**  
Changed some of the backplate design so I prints better.

Designed a sort of "crank" shaft to keep each leg pair on the right offset.

Added these parts into assemblies

--------------------------------------------------

### Day 2: Cad Updates
**Jun 3, 2026 | Simon**  
June 3 2026 | Day 2 Journal

**Today:**  
Put all the pieces I made yesterday into one assembly, It took a lot of confusion to realize I had to fasten the pieces using revolute mates, not normal fastens, so each piece could spin, allowing the linkage to work.

Designed the opposing leg, because each part is identical vertically I can just rotate them. However I needed to redesign the dimensions of two parts to allow the opposing leg to occupy the same spot, I added the thinner design to Bambu Studio to see if there would be enough layers and there is!

I combined the first assembly with a made one consisting of a mirrored leg to make a full "leg unit".

Designed a general idea for how I will rotate each pair of legs and keep them in place, III have a main shaft moving through each side of the robot, and. each pair will have a 3d printed bracket of sorts that keeps them offset. III need 3-4 bearings per side so I researched which ones to get, I found some good ones on Amazon that a 22mm in full diameter, and less than 10$ so I can get them with just one grant, perfect for me!

--------------------------------------------------

## Journal Pt 3

### Day 8: Progress is fast
**Jun 14, 2026 | Simon**  
June 14 | Day 8 Journal

**Today:**

**Ordered motors + bearings**  
My $20 hardware project grant was approved last night, so I used the funds to buy:
- 20 Small Bearings
- 4 Motors (I only need 2)
- 1 dual motor controller board for 4 disks (First I had to figure out what motor I needed, a 2-6v DC motor will work because it can spin both directions at different speeds. I also needed a controller as these motors require more than just an Arduino. I knew what bearings I needed for a while, see day 2 journal). I have a motor in my electronics kit I will use to practice and get the software down before anything is delivered. ($30 total)

**Printed more parts**  
I printed way more leg parts, enough to make 8 legs or 3 pairs (That's half the half). These prints mostly went well, however a few parts got messed up due to lack of supports :(, I made 4 leg pairs. Once I get the bearings I can road test my design! (The printing took around 6 hours but I was only doing stuff like taking off supports, monitoring the first layer, designing in the slicer, cleaning off the bed, trying to fix parts, keeping inventory, and more miscellaneous tasks for 2).

**Designed some parts**  
I designed the beams that keep the backplates together and how those beams fit into the backplates. I also designed the central rotating shaft that powers all 3 leg pairs. (.5 hours)

--------------------------------------------------

### Day 7: It works
**Jun 10, 2026 | Simon**  
June 10 | Day 7 Journal

Thanks to some very nice people in the slack my printer is back to speed! Also proved I can start a print, stop it, reset another print, and finish it. This is important because I will be keeping the smaller "bones" or "bars" in place by adding them to the print of a "tile". I hope that makes sense, it does for real. I also got some red filament which I will use for the tiles as Isaac has some color!

**How I fixed my printer:**
- Added glue to the plate (took a while, it didn't help, had to clean!)
- Changed the Z-offset of the nozzle also made it sub-side closer to the plate. This worked! Now the first layer doesn't slip, because it adheres properly. To figure out how to do this I had to dig through the bambu lab reddit and change the printer's g-code, but it works!!!

Totally I printed 7 test prints (only the final one worked) across 2 hours of research, changing files, and starting prints. (print time was very small as the first layer was all I needed to see)

Moving on, here's what and how much I need to print:  
- Part 1 | 0/12 (RED)  
- Part 2 | 0/12 (RED)  
- Part 3&4 | 0/24  
- Part 5 | 0/3  
- Part 5M | 0/6  
- Part 6 | 0/6  
- Part 6M | 0/6  

I printed a full set of parts 3-4, this took 2 raids out yielded a fine product.

--------------------------------------------------

### Day 6: My Printer Sucks
**Jun 22, 2026 | Simon**  
June 22 | Day 6 Journal

Heres what I did today:

**Tried to fix my printer**  
I have had my A1 Mini for a long time but it hasn't done something like this yet. The first layer is always slipping, that causes the rest of the print to fail. Looking online I tried various fixes like changing the first layer height, bed temperatures, print speeds, and cleaning the nozzle. After asking some people on the slack they recommended I clean the plate and apoly glue, these will be tomorrow!

In more boring detail I attempted to print over ten times. Each attempt had a different mix of possible solutions (ex. speed, heat, layer height). While some prints only had one or two parts get messed up most of them fully failed. I made some physical changes to my printer including cleaning the nozzle, swiping filament, and moving it to a new room to see if that would fix it (it was desperate ink).

--------------------------------------------------

### Day 5: CAD updates + printing.
**Jun 11, 2026 | Simon**  
June 11 | Day 5 Journal

Heres what I did today:

**Backplate now has pegs to slot on parts**  
A joint on the upper tie needs to be in a fixed spot but rotate. To achieve this I added 7mm pegs to the backplate and redesigned the upper tile so that it rotates around the peg. (.8 Hours)

**Added clearance to a parts**  
One of the shaft parts collides with another during rotation, to prevent this I added space on both parts so that they can still function but not collide. Setting the spacing right took time because I needed to prevent collisions but also needed to keep structural support. (.5 hours)

**Exported leg files and printed**  
I exported the finished leg .stls and pushed them to the repo. I also printed some of their out however I will do the rest tomorrow. (.3 hours)

--------------------------------------------------

## Journal Pt 4

### Day 12: YES YES YES
**Jun 28, 2026 | Simon**  
June 28 | Day 12 Journal

The days before have been slow but now I progress can really really feel!

Heres what I did today:

**More prints + glue!**  
All of the backplates are printed (for one side at least) so I got to connecting legs to shafts. The original plan was to use superglue to attach the parts however the glue just doesn't work well on PLA, it didn't stick and didn't handle rotation at all. Between cleaning off the parts and holding them together again and again the superglue wasted an hour of my life but hey I can log it! After the fourth unsuccessful superglueing I used a hot glue gun and that worked great! Connected the other two legs was mostly easy but I had to redo them as they weren't offset by 60 degrees, this is needed so a leg is always on the ground. [1.5 hours]

I also printed the structural beam that connects all 3 leg pairs + backplates together.

**Center is done!**  
The middle part is all designed, it has two large end plates (had to slightly redesign as they were to big to print). The plates sandwich four "levels" that will hold the Arduino, batteries, and motors. Two large side plates slide in allowing for easy access to electronics and to keep the robot more clean. "ISAAC" is wrote on one of the plates, the letters will be printed in red to match the legs. [1 hour]

**Motor electronics**  
With all the motor parts here I tried to wire up the motors. Learning the new dual motor control board took a second, luckily there are some great youtube videos. After some double checking my arduino, power supply, motors, and motor control were wired up. Writing the code took a while but it seems to work, the issue is the motor just doesn't move, and when I unplug the ground it vibrates, this points to a grounding issue but the day is almost over so ill fix it tomorrow. [1 hour]

--------------------------------------------------

### Day 11: Slow but steady
**Jun 27, 2026 | Simon**  
June 27 | Day 11 Journal

Heres what I did today:

**New Prints!**  
I Have printed the first 3 backplates, while inserting the bearing was easy the printer did mess up twice, making it impossible for me to put the bearing in :|. I printed an offset shaft and attached a leg pair to it, the print was a little shaky (like literally all the loose parts were shaking around) but it worked out fine. The two prints that messed up led me on a wild goose chase to fix the issue which was I selected the wrong layer to pause at, too late to insert the bearing. (.8 hours)

**More Design**  
I redesigned the rotation shafts to be a little wider, after some testing these will have to print horizontally to preserve the hexagons. (.2 hours)

I started design on the robots body, the body needs to house both motors, and Arduino, and batteries while allowing wires to be wired across it. It will be a bit wider and taller than the backplates. I also got more batteries to power both the motor and arduino because I only had one and it wasn't rechargeable. [1 hour]

**Goals moving forward**  
My goal was to finish the robot yesterday but yesterday came and went and I didn't have a finished robot, this was the result of many many things like shipping delays and printer errors but oh well. Now I have a scarier deadline: next Wednesday before I go on vacation, if it isn't done by then this project will be really really delayed and might end too late to turn it in.

The middle design as a WIP

--------------------------------------------------

### Day 9/10: Prints and Delays
**Jun 26, 2026 | Simon**  
June 25-26 | Day 9-10 Journal

Today and Yesterday I:

**Made my motor spin!**  
I have two motors on the way for this project however I also have one from my electronics kit that I hadn't used. I wired it up following a tutorial that came with the kit. I faced some difficultly including wires being messed up and not getting enough power at first but it eventually worked! For the robot my plan is to have a battery pack that powers the motors in the central part. [.5 hours]

**More design work**  
I redesigned the rotation system so that instead of one large rotating beam there is one for each leg pair. The rotation system is designed to dodge the moving leg parts (the old system collided with the legs). This will take more parts but it seems like the easiest way to only use two motors. I redesigned the crank shafts (also known as offset shafts) so they attach to the next leg pair. The rotation shafts and crank shafts also have hexagon inlets to allow them to attach to each other better.

I also made a larger assembly where three full leg pairs are linked up, because onshape is web based it got very laggy but not to an unusable level.

Finally I began work on the center part of the robot, this will house my ardinio, a battery pack, and both motors. The design matches the backplate but is slightly wider and taller. I need to figure out a way to give the arduino instructions through a bluetooth remote. [2 hours]

**More Prints!**  
After completing half of the legs I need I printed more leg pieces, my printer was giving me issues because the g-code I edited somehow reset, I fixed it in bambu studio. I have now printed all the leg parts I need! [.5 hours of actual work]

--------------------------------------------------

## Journal Pt 5

### Day 16: Bad times
**Jul 13, 2026 | Simon**  
This journal is about July 13, written on the 15th  
July 13 | Day 16 Journal

Heres what did on July 13:

**Began to reprint some of the offset shafts**  
I needed to print all 6 offset shafts because they were messed up by hot glue. At first I tried printing 3 at a time, however this ended up taking too much space when I added the leg parts. I printed one at a time until all 6 were done. (.5 hours)

--------------------------------------------------

### Day 15: Im Back
**Jul 12, 2026 | Simon**  
July 12 | Day 15 Journal

After a vacation heres what I did today:

**Disassembly**  
The biggest issue with Isaac is that he is connected with flimsy hot glue. While it is fast, hot glue isn't strong enough for the bots... One vacation I ordered some PLA glue, and this stuff is amazing! I tested on some scrap PLA and it is so strong I believe it will give Isaac the final boost he needs to cross the finish line.

To prepare to undo loose for the PLA glue I summoned idan, while it sure said to use my pro genuine vanity vanish, I believe this is necessary. I also began repriting the rotation shafts as the original ones were damaged by hot glue. [2 hrs]

**Readme + Github updates**  
I reorganised the github and began writing my README file, this is what the hacksctime is.

--------------------------------------------------

### Day 14: On the brink
**Jun 30, 2026 | Simon**  
June 30 | Day 14 Journal

Heres what I did today:

**Both motors spin w/ IR**  
I recharged the batteries overnight and after some nudging of wires both motors connected to the L298N spin at the speeds I set. I followed a tutorial that came with my electronics kit to fully set up and send signal via the IR receiver from a remote. The C++ code uses the IRremote library to detect what is being sent. Then I see if the signal I received matches the signals for the 0, 1, or 3 buttons, if it does I speed up / stop the motors depending on what it takes. Currently O turns 0 off, 1 turns it on, and 3 turns it to reverse. [1.5 hours]

**Redone center**  
I removed the leg portions from the center ends, then connected up the center levels to the ends and reattached the legs. Let me construct the center without sliding damage to the legs and not having to reach around the legs. [2 hours]

**Design + attachment of new piece.**  
I made a slightly modified rotational shaft that connects to the motors I have. When removed the classic shaft and replaced it. This took a while because I had to disassembles the entire leg segment from the body (again) for both sides. [7 hours]

--------------------------------------------------

### Day 13: More to do, much done
**Jun 29, 2026 | Simon**  
June 29 | Day 13 Journal

Heres what I did today:

**2nd Half done!**  
I printed 4 more backplates, with bearings inserted mid print, for the 3rd half of legs, I also attached the legs to the offset shafts and got the whole half spinning. Gluing to parts together was easier this time as I had experience. I also printed the support beams and glued them to the other end of the center. Now the second half is done and ready to be added once the center is fully done. [8 hours of actual work]

**More center progress**  
"I'm a Center" refers to the middle part of the robot that holds electronics. The center contains two large end pieces which are all printed up, the middle parts are also printed however I have not been able to attach the two pieces because I was busy making the second half. Overnight I will print the side parts that keep the center looking nice.

**Motors spin + batteries**  
Yesterday I spent a while working on making the new motors spin. I connected an L298N dual motor controller to a power supply and my arduino. However the motor would only spin with not the arduino grounded connected, which is an issue, pointing to the grounding wire. Today, I am back, I both with stands and I held on the arduino case routed via USB-B to my mac is missing with the power supply. Claude recommended using the power supply to power the arduino but my supply can't power both motors and a arduino. Claude then told me to ditch the power supply and power the L298N and arduino with two batteries, fixing a common ground between them. This worked and now my motors spins at the speed, 1 direction I set in is using the arduino USB. [-7 hours]

I also saw of a reveal ending up an IR sensor and sender, that I will use to control motor speed / direction.

--------------------------------------------------

## Journal Pt 6

### Day 19: "Crap"
**Jul 17, 2026 | Simon**  
This journal is about July 16, written on the 17th  
July 16 | Day 19 Journal

Heres what I did on July 16th:

**Shafts reprint**  
I printed 3 rotational shafts and attached each leg pair on the broken third to a new offset shaft. I then attached these together with glue. I found that gluing them before inserting into the backplate works the best. There were some hiccups with the gluing, parts not sticking or being on at an angle, however no reprinting was needed and every issue was resolved. 1.75 hours]

**Middle assembly**  
I reconstructed the middle by adding hot glue to each of the "levels" so they stay in place. These shelves are where the electronics sit. I also added each of the leg segments to the middle, I attached them with hot glue so they could be removed if needed. I then added in the electronics and hot glued the motors into the leg things.

Unfortunately while I was completing this, a offset shaft on the top of one of the leg segments broke. This doesn't affect the other legs but it can let some of the parts slip off. I tried to fix it by gluing a cap of sorts onto the broken end, but I accidentally glued the leg pieces together and had to remove them. Because the glue is so strong I will need to reprint an entire leg segment and re-attach it :(. (.5 hour).

--------------------------------------------------

### Day 18: Forwards than back
**Jul 17, 2026 | Simon**  
This journal is about July 15, written on the 17th  
July 15 | Day 18 Journal

On July 15th:

**Constructed other third**  
After making the first segment of legs yesterday, I built the second one today. This was easier because I had the hang of it however one of the offset shafts snapped and had to re-print it. (.5 hours)

**Tried to construct middle**  
I added all the middle levels together between the "sandwich pieces", this was annoying because tiny defects made it hard to perfectly insert the levels into the groves of the end pieces. I did eventually get it all together but in the process I broke a offset shaft of the first segment I constructed. To remove the broken third I would need to redo the first segment again! (.5 hours)

--------------------------------------------------

### Day 17: One third done, One to go
**Jul 15, 2026 | Simon**  
This journal is about July 14, written on the 15th  
July 14 | Day 17 Journal

Heres what I did on July 14:

**More Printing**  
I printed out some rotational shafts to replace old damaged ones. The prints went well and the new shafts worked great.

**(Re)Constructed a leg third**  
I began to attach leg pieces to their respective offset and rotational shafts using the PLA glue. PLA glue is powerful and removing it would mean I would need to reprint parts, so I tried to be as careful and precise as possible. Unfortunately on the first glue an offset shaft snapped, I moved on to the other two leg pairs and got them glued while printing a new offset shaft. Finally I glued on the final piece and the third was done! (1 hour)

--------------------------------------------------

## Journal Pt 7

### Day 24: adapting to the motors
**Jul 28, 2026 | Simon**  
July 27 | Day 24 Journal  
Written on 28th for the 27th

**Motors arrived, integrating them into the design**  
The all metal TT's arrived! Because the end of them is different I had to print a new adapter to fit onto what I had already. For the finished project I will include the adapter and an original shaft designed for them. I used dimensions I found online, adding some wiggle room for hot glue + error. Luckily they fit on the first try and I glued them onto the shafts attached to the legs. Unfortunately I glued them a little offset on the first try so I had to rip them out and align them better. [.7 hours]

**Spin!!!!!!**  
I attached the motors to the dual motor controller and began experimenting with the code to make them spin. I found 65 to be a good speed that isn't too fast or too unreliable. I than turned them on, attached them to the adapters glued to the legs, and clicked the one button on the remote to start them. AND THE LEGS SPINNNNNN!!!!!!!!!!!!!! This is the greatest achievement of this project so far and it was just the motors! Holy crap. [.2 hours]

I spent the rest of the time I had messing with the motors and different speeds, 65 is the best still. I can't upload videos here but there will be some in the github.

--------------------------------------------------

### Day 23: New Motors
**Jul 28, 2026 | Simon**  
July 26 | Day 23 Journal

Heres what I did today:

**Broke a leg block again**  
I have lost track of how many times ive broken leg blocks but this was super crazy. I was just trying to get the legs to rotate smoothly when I broke a offset shaft again. It took so long to fix because I had to glue the top of the rotation shaft onto the rest of it while making sure no parts slipped off and managing the other leg pairs as this was in the middle of the leg block. I ended up extending the rotational shaft to prevent accidentally gluing pieces that need to move. (.5 hours)

**New code + broken motor**  
I hooked the motors again, and slowed them down because they were going too fast to mesh right with the gears. But they just don't work. The weight and power needed to spin the legs is too much for these smaller motors to handle and I finally came to this conclusion. My solution is obvious but I didn't want to do it out of worry that it might extend this project longer: new, more powerful motors. The motors I got were all metal TT gearbox motors, they work with the dual controller and power a bunch of gears that increase torque before outputting.

--------------------------------------------------

### Day 22: AHHHHHHHHHHHHHHHHHHHHHHH
**Jul 25, 2026 | Simon**  
July 25 | Day 22 Journal

Heres what I did today:

**Tried to reglue a piece, ended up ruining it**  
As I may have mentioned, one of the offset shafts on the end of one of the leg blocks is broken. This isn't a critical issue but it does cause the pieces to slid off sometimes. In an attempt to fix this I glued the top of an offset shaft onto the part, however I accidentally got glue on the parts that spin, locking the leg pair in place. To make it worse when I tried to remove the glue it just snapped part of the leg piece off, rendering them useless :(. This whole process also broke the middle leg pair. I decided to fully redo the block of three leg pairs so heres how. [1 hour]

**Redid a leg pair block**  
To redo this I needed six legs or three leg pairs, I salvaged two from the messed up block. I printed the parts needed for four leg pairs and began to print the tiles that encased them. Unfortunately I messed up two prints, purely my fault, so I ended up wasting time and filament. I also printed three more offset shafts and rotational shafts to use in the new block. I glued the pieces together without any issues and the block works.[~3 hours of printing, 1 of actually doing stuff]

--------------------------------------------------

### Day 20/21: The finish line is moving
**Jul 18, 2026 | Simon**  
July 17-18 | Day 20-21 Journal  
Heres what I did across two days:

**July 17:**  
*Fix snapped part*  
I printed just the top of an offset shaft and hot glued it onto the snapped one, it isn't great but it does help them not slip off. Gluing it without effecting the other parts took some attempts, I ended up having to use less glue than ideal to avoid gluing parts that had to move. [.5 hours]

**July 18:**  
*Final assembly, I thought.*  
I cleaned up Isaac and added in the electronics. Because the motor controller is tall I removed the second shelf in the middle part of the robot. The batteries, that sat on this shelf, will instead sit next to the Arduino. To remove the shelf I took apart the middle of the bot and then reglued the other shelves in. The electronics worked without that shelf and the batteries are easier to access. If you're wondering before the removal of this shelf I just let the controller scrap the top of the shelf. [.5 hours]

*Uh oh*  
So after hooking up the electronics I turned the motors on for the first time. I could hear the vibrations they made and began to gently spin the legs, the motors need a little boost to start to spin. But after a while of spinning, both ways, nothing was moving. This freaked me out and I asked claude to help me figure out why the motors weren't spinning. Claude pointed me to the idea that the motors just didn't make enough torque. I sorta had a mini burnout after this, for an hour I felt like I just wasted days of my life and a bit of money on a projected doomed to fail.

*Gears*  
Gears can increase torque! This was my savior!!! Just use a smaller gear powering a large one!!! Sure this decreases spin but speed isn't my priority. I mocked up a gear system that will increase torque by 375%, I hope this is enough for the legs to spin. I decided to use just two gears instead of a gearbox because it would be simpler and more redundant. I printed the gears out and started experimenting with them before: [1 hour]

*Soldering motors back*  
Unfortunately the wires on one motor broke off, so I took a wire from my electronics kit and soldered it onto the motor. I was a little sacred this wouldn't work but the motor spins just fine! [.5 hours]

--------------------------------------------------

## Journal Pt 8

### Day 25: Done
**Aug 2, 2026 | Simon**  
August 2 | Day 25 Journal

Heres what I did today:

**Gameplan**  
My goal today was to:  
1. Design Larger motor shafts to better fit the motors  
2. test the opening of the motors with the mounts  
3. add it all together and make the robot work  

**Larger Motor Mounts**  
These mounts fit onto the end of a leg block, replacing the ones for the older motors. They have the same shape as the gearbox motors + some wiggle room. While experimenting I found that I don't have to hot glue the motors in because the shafts are long enough they can't fall out. Too attach them I snapped off the old motor mounts and glued the new ones on, it took me ~8 attempts per side to get them as straight as possible. [.5 hours of work, 1 of printing]

**Attaching the motors differently**  
Originally I had the motors angled downwards and glued onto the side of the bot, this caused some issues and wasn't very sound. I switched to gluing them onto a shelf of the bot which keeps them in place and in line. I used hot glue for this so I could easily-ish remove them.

**Hooking the motors up and testing**  
I carefully attached the motors to the dual motor controller next. The controller was already attached to the arduino, which was running the correct software. After attaching them I plugged in the arduino and motor controller to batteries and the batteries died immediately :c. After charging I hooked it up and was met with a weird situation:  
One of the leg pairs spun perfectly at the right speed. The other slowed down halfway through a rotation, it also stopped. I carefully glued it back while keeping it very aligned. Once the glue dried I re-attached the block onto the robotic body, pushed in the motor to its offset shaft and plugged in the motor again. The results were much better: Both legs spun at a constant(ish) speed. Both pairs spin as intended and for decently long before something jams or I accidentally touch it. [.5 hours]

The problem is no matter how well the legs spin they don't have enough power to effectively move on the ground. After a couple of failed "walking" attempts I sat down to write this entry and brainstorm.

**The solution**  
All I had to do was speed up the motors. Now at 100 speed they function great AND IT WALKS!!!!! [can put videos here so check the repo for them or the demo]

**Broken Again**  
After the first walk one of the leg pieces offset shaft broke. While trying to fix it I broke the other on that leg block. After a break to clear my head I glued the pieces back, hooked everything up and it walks! On carpet and hardwood, even outside [kinda struggled on dirty concrete which is fair] Isaac is alive! (.2 hours)

**Final Touches to this project**  
I uploaded videos of Isaac to youtube (unlisted), they contain him moving while being held and walking. I will add more youtube links to the github soon. I finished writing the readme and organizing the repos. I also added images of Isaac to the repo and made a release. [Hackathon]

**Isaacs Issues**  
While Isaac is very good at moving and completes my goal for this project, heres some stuff I want to add moving forward into v2:
- Better Remote, the IR'1 great and bluetooth or wifi seems more reliable
- Stop slipping, sometimes parts of Isaacs legs slip off, you can see this in some videos. It's not critical but would be a nice quality of life thing.
- Battery, the reusable batteries are small so a larger one that stores more and is easier to change would be nice

**V2 Plan**  
I wanna move on to other projects but Isaac will remain a possibility of upgrading him. I wanna wait a bit so I don't burn out fast but I do want to upgrade him sometime

--------------------------------------------------

## Journal Pt 9

### Added stuff to repo
**Sep 30, 2026 | Simon**  
September 30th | Day 27 Journal

Been a while but I wanted to add images and assembly step files. Did that in 3D Files/Assemblies so it should be all set now. And I guess images in an imgs folder weren't enough so I added them to the readme.  
I saw just did this through github so I didn't need to mass commits and stuff.  
Anyway hoping to get my portfolio out man its been a while.  
Thank you review team!

Isaac The Carpentopod

--------------------------------------------------

### Day 26: New controls
**Aug 27, 2026 | Simon**  
August 20th | Day 26 Journal

**Recap on last ship**  
So my project was marked as not done even though I was, failed to get a help ticket response but I don't want to miss the deadline so I am going to ado some software changes and resubmit as a finished build.

**What I am changing**  
As of now the software uses a IR remote to change between forward, back, left, right and stopped. This is fine but:
- Left and right don't work at all, this is just how the robot was made.
- I want speed control of forward / back.  
Considering that I am reassigning each key on the IR remote: 0 1 2 3 4 5 6 7 8 9 item 1, 4, 7 are forwards at increasing speeds. 3, 6, 9 are backwards at increasing speeds. 0 is still stops.

**How I did this.**  
I plugged Isaacs arduino to my computer and used a script to print every IR signal it receives. It tracks these goals in two pieces of parts as I logged every case for the above buttons. After I rewrote the existing code to work with these signals, 3 still stops, 1 and 3 power at 70% speed, 4 and 6 go at 100% speed, 7 and 9 go at 110% speed. I also removed the left and right functions because they are unused here. [~1 hour]

**Left and Right return?**  
I want to add rotating to Isaacs body:
- I want to ship this in time
- It would require a lot of tooling

**Videos:**  
The new vids of Isaac are also listed as the demo and on the repo.

**Moving forward:**  
In least blocks done with Isaac, but took so much work and is not in the best shape. If I do make a "v2" it will probably have no remote.