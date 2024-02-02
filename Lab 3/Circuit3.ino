// C++ code

int redLED = 13;
int blueLED = 10;
int greenLED = 8;

void setup(){
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  //make LED red
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait 
  digitalWrite(redLED, LOW);
  delay(500); 
  
    // make LED blue
  digitalWrite (blueLED, HIGH);
  delay(1000); // Wait )
  digitalWrite(blueLED, LOW);
  delay(500); 
  
    //max LED green
  digitalWrite(greenLED, HIGH);
  delay(1000); // Wait
  digitalWrite(greenLED, LOW);
  delay(500); 
  
  //make LED white
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  delay(1000); // Wait 
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(500); 
}
