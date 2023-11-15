#include <Servo.h>

Servo myservo; //servo variable
Servo myservo2;
int pos = 0;
const int buttonPin = 2;
const int buttonPin2 = 4;
const int servoPin = 12;
const int servoPin2 = 10;
int buttonState = 0;
int buttonState2 = 0;
int previousButtonState;
int previousButtonState2;


unsigned long currentTime;
unsigned long previousTime = 0;
int timerLength = 2000;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
 // myservo2.attach(servoPin2);
  myservo.write(0);
  //myservo2.write(0);
  pinMode(buttonPin, INPUT);
 // pinMode(buttonPin2, INPUT);
  pinMode(servoPin, OUTPUT);
 // pinMode(servoPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

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

  SCENE #3
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
