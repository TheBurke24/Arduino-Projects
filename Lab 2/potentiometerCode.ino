

int sensorValue;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(13, OUTPUT);
}

void loop() {

  sensorValue = analogRead(0);
  // turn the ledPin on
  digitalWrite(13, HIGH);

  delay(sensorValue);
  
  digitalWrite(13, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
