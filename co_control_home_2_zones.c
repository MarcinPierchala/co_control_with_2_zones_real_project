


void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
}

void loop()
{
    
  if((digitalRead(4) == LOW)&&(digitalRead(5) == HIGH))
  {
    digitalWrite(3, HIGH);
    delay(10000);
    digitalWrite(2, HIGH);
  }
  
  if((digitalRead(4) == LOW)&&(digitalRead(5) == LOW))
  {
    digitalWrite(3, HIGH);
    delay(10000);
    digitalWrite(2, HIGH);
  }
  
  if((digitalRead(4) == HIGH)&&(digitalRead(5) == LOW))
  {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
  
  if((digitalRead(4) == HIGH)&&(digitalRead(5) == HIGH))
  {
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
}