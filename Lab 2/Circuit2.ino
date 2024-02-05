// Circuit 2 by Alex Burke (1/31/24)
// Using a potentiometer to control the blinking speed of a LED.
// Encountered issues with placement of 5v and GND wires to potentiometer. Resolved quickly.

int potValue;  // create variable to store the value coming from the potentiometer

void setup() {
  pinMode(13, OUTPUT); // declare the ledPin as an OUTPUT:
}

void loop() {

  potValue = analogRead(0);
  
  digitalWrite(13, HIGH); // turn the ledPin on
  delay(potValue); // stop the program for for <potValue> milliseconds:
  
  digitalWrite(13, LOW); // turn the ledPin off
  delay(potValue); 
}
