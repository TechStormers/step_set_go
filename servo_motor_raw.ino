#include <Servo.h>
#define servo D4

Servo myServo;
  
void setup () {
  pinMode(servo,OUTPUT);
  myServo.attach(servo);
  myServo.write(30);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(150);
  delay(400);
  myServo.write(30);
  delay(400);
}
