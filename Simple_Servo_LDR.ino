#include <Servo.h>

int photo ;
Servo s;
void setup() {

  s.attach(9) ;
  Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
  photo = analogRead(A1) ;
  Serial.println(photo) ;
  if(photo < 400)
  {
    s.write(180);
  }
  else
  {
    s.write(0);
  }
  // put your main code here, to run repeatedly:

}
