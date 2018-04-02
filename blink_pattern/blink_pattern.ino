void setup()
{
  pinMode(13, OUTPUT);
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 5; j++) {
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      delay(500);
    }
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    delay(500);
  }
}

void loop()
{
  
}

