#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(4);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(90);                  // sets the servo position according to the scaled value
  delay(100);                           // waits for the servo to get there
}
