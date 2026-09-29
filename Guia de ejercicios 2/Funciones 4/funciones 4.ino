#define led 4
#define pir 3

void sensor() 
{
  int estado = digitalRead(pir);

  if (estado == 1) 
  {
    digitalWrite(led, 1);
  } 
  else 
  	{
    	digitalWrite(led, 0);
  	}
}

void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() 
{
  sensor();
  delay(200);
}
