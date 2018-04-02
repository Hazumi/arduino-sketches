void setup()
{
  const int ledPin = 13;
  pinMode(ledPin, OUTPUT);
  int primeNums[] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
  for(int i = 0; i < 8; i++) {
    blink(ledPin, primeNums[i], 100, 2000);
  }
}

void loop()
{
  
}

void blink(int ledPin, int numLoops, int duration, int endDuration)
{
  for(int i = 0; i < numLoops; i++) {
    digitalWrite(ledPin, HIGH);
    delay(duration);
    digitalWrite(ledPin, LOW);
    delay(duration);
  }
  delay(endDuration);
}

