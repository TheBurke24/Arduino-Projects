// Circuit 5 by Alex Burke (2/6/24).
// Utilizing buttons to control an LED.
// Encountered issues with coding and using conditional statements.

int button1State = 0;
int button2State= 0;

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}

void loop()
{
  int button2State = digitalRead(12);
  int button1State = digitalRead(13);
  
  if(button1State == LOW){
  digitalWrite(10, HIGH);
  }

  else if (button2State == LOW){
    digitalWrite(10, HIGH);}
  
  else if (button1State == LOW && button2State == LOW){
    digitalWrite(10, LOW);
  }
  else {
   	digitalWrite(10, LOW);
 }
}
