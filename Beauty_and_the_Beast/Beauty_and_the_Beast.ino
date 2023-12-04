/*
Beauty and the Beast

Team Name: Dream Team
Team Members: Isabella Martinez and Maggie Rheudasil
Description: In this program we used buttons that will activate servos to spin 180 degrees when pressed.
*/

#include <Servo.h>

// VARIABLES
Servo myservo; //scene one servo variable
Servo myservo2; //scene two servo variable
int pos = 0;
const int buttonPin = 2;
const int buttonPin2 = 4;
const int servoPin = 10;
const int servoPin2 = 12;
int buttonState = 0;
int buttonState2 = 0;
int previousButtonState;
int previousButtonState2;

unsigned long currentTime;
unsigned long previousTime = 0;
int timerLength = 2000;

// SETTING UP SERVO & BUTTON
void setup() {
  myservo.attach(servoPin); // attaches the servo on pin 10 to the servo object
  myservo2.attach(servoPin2); // attaches the servo on pin 12 to the servo object
  myservo.write(0);
  myservo2.write(0);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(servoPin, OUTPUT);
  pinMode(servoPin2, OUTPUT);
}

// LOGIC
void loop() {

  // SCENE #1: belle approaching rose
  buttonState = digitalRead(buttonPin);

  if (previousButtonState != buttonState){
    //rose will spin from pretty to withered
    if(buttonState == HIGH){
      myservo.write(180);
    } else {
      myservo.write(0);
    }
  }
  previousButtonState = buttonState;

  //  SCENE #3: ballroom scene
  buttonState2 = digitalRead(buttonPin2);
  
  if (previousButtonState2 != buttonState2){
    //belle and beast will dance!
    if(buttonState2 == HIGH){
      myservo2.write(180);
    } else {
      myservo2.write(0);
    }
  }
  previousButtonState2 = buttonState2;
}
