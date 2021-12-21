// defines pins numbers
const int ledPin = 2;
const int dirPin = 4;
const int stepPin = 7; 
 
void setup() {
  // Set Output pins
  pinMode(ledPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
}

void loop() {
  digitalWrite(dirPin, HIGH);  // Enables the motor to move in a particular direction

  delay(1000);  // One second delay
  
  // Move carousel over the reading system
  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }

  delay(100);  // Wait one tenth of a second before turning on the LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Keep light on for a second;
  digitalWrite(ledPin, LOW);
  delay(500); // Wait for a half a second;

  // Move carousel over the source
  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
  delay(1000);

}
