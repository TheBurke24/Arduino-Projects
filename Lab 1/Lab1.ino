void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);                      // wait for a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  ;                      // wait for a second

    digitalWrite(10, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(10, LOW);   // turn the LED off by making the voltage LOW
  ;   
                     // wait for a second
    digitalWrite(8, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);                      // wait for a second
  digitalWrite(8, LOW);   // turn the LED off by making the voltage LOW
  ;                      // wait for a second
}

