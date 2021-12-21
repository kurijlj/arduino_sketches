const int lightOnPin = 3; 

void setup() {
  // put your setup code here, to run once:
  pinMode(lightOnPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(lightOnPin, HIGH);
  delay(500);
  digitalWrite(lightOnPin, LOW);
  delay(500);

}
