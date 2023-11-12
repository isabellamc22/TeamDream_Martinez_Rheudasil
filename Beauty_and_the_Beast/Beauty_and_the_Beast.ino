#include <Servo.h>

Servo myServo; //servo variable
Servo myServo2
const int buttonPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // SCENE #1: belle approaching rose
  if (digitalRead(buttonpin) == HIGH){
    //rose will spin from pretty to withered
    myservo.write(180);
  } else {
    myservo.write(0);
  }

  //SCENE #2
  if ((digitalRead (buttonpin2) == HIGH)&&(digitalRed (buttonpin3) == HIGH)){
    //belle and beast will dance, circle surface will spin
    myservo2.write(180);
  }
}
