// Initialize variables for the LED pins
const int redLED = 3;
const int yellowLED = 10;
const int greenLED = 6;

void setup() {
  // Configure each LED pin to output power
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  
}

void loop() {
  // Turn Red ON, others OFF
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(4000);     // Wait for 4 seconds
  
  // Turn Green ON, others OFF
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(4000);     // Also wait fo 4 seconds
  
  // Turn Yellow ON, others OFF
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(1500);     // Wait for 1.5 seconds
  
}
