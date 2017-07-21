/* DragonHead
 *  John Wiebalk
*/

#include <Servo.h>

Servo sideservo;  // create servo object to control a servo
Servo updownservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  sideservo.attach(8);
  updownservo.attach(9);
}

void loop() {
  for (pos = 60; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    sideservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 110; pos >= 60; pos -= 1) { // goes from 180 degrees to 0 degrees
    sideservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

