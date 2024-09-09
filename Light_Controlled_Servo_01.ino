# include <Servo.h>

Servo myservo;

int angle = 0;
const int sensorPin = A0;
bool isActionMade = False;

void setup() {

  Serial.begin(9600)
  myservo.attach(9)
  myLDR.attach(sensorPin)
  
  
}

void loop() {
  int ldr- analogRead(sensorPin);
  Serial.println(ldr);

  if (ldr >= 200 && !isActionMade) {
    servo.write(100);
    Serial.println(F("ldr >= 200"));
    delay(3000);
    isActionMade= true;
  }
  else if (ldr >= 61 && ldr <= 199 && !isActionMade) {
    servo.write(92);
    Serial.println(F("ldr >= 61 && ldr <= 199"));
    delay(3000);
    isActionMade= true;
  }

  else if (ldr <= 60) {
    servo.write(50);
    Serial.println(F("ldr <= 60"))
    delay (3000);
    isActionMade= false; 
  }

}
