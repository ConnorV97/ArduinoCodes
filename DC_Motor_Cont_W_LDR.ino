int motorPin = 3;
int photo;
bool motorRunning = false; 



void setup() {
  Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {

  photo = analogRead(A0);
  Serial.println(photo);

  if (photo >= 280 && !motorRunning) {
    analogWrite(motorPin, 255);
    motorRunning = true; 
  }
  else if (photo <= 280 && motorRunning) {
    analogWrite(motorPin, 0);
    motorRunning = false;
  }
  delay (100);
}
