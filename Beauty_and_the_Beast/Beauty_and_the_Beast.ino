#include <Servo.h>

Servo myservo; //servo variable
Servo myservo2
const int buttonPin = 1;
const int buttonPin2 = 2;
const int buttonPin3 = 3;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(10);
  myservo2.attach(9);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
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
  if ((digitalRead (buttonpin2) == HIGH)&&(digitalRed (buttonpin3) == HIGH)) {
    //belle and beast will dance, circle surface will spin
    myservo2.write(180);
    myservo2.write(0);
    myservo2.write(180);
    myservo2.write(0);
  }
}
