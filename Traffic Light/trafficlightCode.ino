//Dual Traffic Lights by Alex Burke (2/19/24)
//Code for two traffic lights that operate in opposite sequences, but when button is pressed, interrupts the sequence for pedestrian to cross safely.
//Encountered many issues with traffic light sequencing, as well as the button state being checked as frequently as necessary.

// C++ code
//
 int buttonState = 0;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT); //red 1
  pinMode(2, OUTPUT); //yellow 1 
  pinMode(3, OUTPUT); // green 1
  pinMode(4, OUTPUT); //green 2
  pinMode(5, OUTPUT); //yellow 2 
  pinMode(6, OUTPUT); //red 2
  pinMode(10, INPUT); //button
 
}


void loop()
{
  digitalWrite(1, HIGH);  // Traffic Light 1
  digitalWrite(4, HIGH);
  delay(5000);             
  digitalWrite(1, LOW);
  digitalWrite(4, LOW);   


  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);  
  delay(2000);                      
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);   

checkButton(); // Check for button press

  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);  
  delay(5000);                      
  digitalWrite(2, LOW);
  digitalWrite(6, LOW); 


}

// check button
void checkButton(){
  buttonState = digitalRead(10);
  if(buttonState == LOW) {
    digitalWrite(0, HIGH); //Turn on crossing light
    digitalWrite(1, HIGH);
    digitalWrite(6, HIGH);
    delay(3000);
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(6, LOW);
  }
}
