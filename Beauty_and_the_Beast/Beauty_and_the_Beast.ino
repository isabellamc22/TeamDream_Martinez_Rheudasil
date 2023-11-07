#include <Servo.h>

Servo myServo; //servo variable
const int buttonPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonpin) == HIGH){
    myservo.write(180);
  } else {
  myservo.write(0);
  }
}
