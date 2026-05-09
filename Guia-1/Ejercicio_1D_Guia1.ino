#define led1 0
#define led2 1
#define buzzer 2

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(led2,0);
  digitalWrite(led1,1);
  
  digitalWrite(buzzer,1);
  delay(500);
  digitalWrite(buzzer,0);
  
  delay(500);
  
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  
  digitalWrite(buzzer,1);
  delay(500);
  digitalWrite(buzzer,0);
  
  
}