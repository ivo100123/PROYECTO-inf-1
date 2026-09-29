int pines[] = {2, 3, 4};

void prenderPines(int pines[]) 
{
  
  for (int i = 0; i < 3; i++) 
  {
    digitalWrite(pines[i], 1);
  }
}

void setup() 
{
  for (int i = 0; i < 3; i++) 
  {
    pinMode(pines[i], OUTPUT);
  }
}

void loop() 
{
  prenderPines(pines);
  delay(1000);
}
