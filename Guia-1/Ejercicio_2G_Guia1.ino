#define pot A0
#define bzr 3

int tono;

void setup()
{
  pinMode(pot, INPUT);
  pinMode(bzr, OUTPUT);
}

void loop()
{
 tono = map(analogRead(pot),0 ,1023 ,0 , 2000);
   
 analogWrite(bzr,tono);  
}