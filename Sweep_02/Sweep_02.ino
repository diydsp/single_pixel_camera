/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#include "yoyo.h"

Yoyo yoyo1(  0, 1, 1, -1, 100, 80 );
Yoyo yoyo2( 90, 1, 1, -1, 101, 80 );
 
Servo myservoX;  // create servo object to control a servo
Servo myservoY;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservoX.attach(9);  // attaches the servo on pin 9 to the servo object
  myservoY.attach(10);  
}

void loop() {

  //myservoX.write( 90 );
  //myservoY.write( 90 );

  myservoX.write( yoyo1.update() );
  myservoY.write( yoyo2.update() );
  delay(60);

  /*  
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  */
  
}
