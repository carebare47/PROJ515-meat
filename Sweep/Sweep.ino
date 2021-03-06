/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
int range = 178;
int delay1 = 50;

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()){
    //int data = (int)Serial.read();
    //int data = (int)Serial.read();
    int data = Serial.parseInt();
    myservo.write(data);
  }
  /*
  
  for (pos = 0; pos <= range; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(delay1);                       // waits 15ms for the servo to reach the position
  }
  for (pos = range; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(delay1);                       // waits 15ms for the servo to reach the position
  }
  */
}

