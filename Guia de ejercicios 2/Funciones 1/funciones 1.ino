#define bzr A0

void primeraMelodia() 
{
  tone(bzr, 350, 400);
  delay(550);
}

void segundaMelodia() 
{
  tone(bzr, 780, 555);
  delay(550);
}

void terceraMelodia() 
{
  tone(bzr, 690, 235);
  delay(550);
}

void setup() 
{
  pinMode(bzr, OUTPUT);
}

void loop() 
{
  primeraMelodia();
  segundaMelodia();
  terceraMelodia();
}
