#include <Servo.h>

Servo myServo;

int lightPin= A0;
int lightValue;
int servoPin = 9;
int threshold = 900;


void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {

  lightValue = analogRead(lightPin);
  Serial.println(lightValue);

  if (lightValue < threshold) {
    myServo.writeMicroseconds(2000);
  }
  else {
    myServo.writeMicroseconds(1500);
  }
  
  delay(100);// put your main code here, to run repeatedly:

}
