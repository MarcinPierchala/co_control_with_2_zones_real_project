

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(9, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  digitalWrite(7, HIGH);
}

void loop()
{
  
  if(digitalRead(9) == LOW){
    delay(5000);
    digitalWrite(7,LOW);
  }
  else{
    digitalWrite(7,HIGH);
  }
}