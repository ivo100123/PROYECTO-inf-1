#define led 3

void setup()
{
  pinMode(led, OUTPUT);
  analogWrite(led,0);
}

void loop()
{
  analogWrite(led,10);
  delay(1000);
  analogWrite(led,50);
  delay(1000);
  analogWrite(led,100);
  delay(1000);
  analogWrite(led,255);
  delay(1000);
  analogWrite(led,150);
  delay(1000);
}