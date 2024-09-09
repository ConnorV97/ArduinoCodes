int pSensor = A0;
int motorPin = 3;
bool motoRun = false;


  void
  setup() {

  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  int sensorVal = analogRead(pSensor);
  Serial.println(sensorVal);

  if (pSensor >= 260 && !motoRun) {
    analogWrite(motorPin, 255);
    motoRun = true;
  } 
  else if (pSensor <= 260 && motoRun) {
    analogWrite(motorPin, 0);
    motoRun = false;
  }
  delay(100);
  // put your main code here, to run repeatedly:
}
