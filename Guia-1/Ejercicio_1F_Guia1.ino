#define btn 5
#define alrm1 6
#define alrm2 7

void setup()
{
  pinMode(btn, INPUT_PULLUP);
  pinMode(alrm1, OUTPUT);
  pinMode(alrm2, OUTPUT);
//  Serial.begin(9600);
}

void loop()
{
	bool boton = digitalRead(btn);
  
  //Serial.println(boton);
  
  if(boton == 0)
  {
    digitalWrite(alrm2,0);
    digitalWrite(alrm1,1);
    delay(1000);
    digitalWrite(alrm2,1);
    digitalWrite(alrm1,0);
    delay(1000);
  }
  else
  {
    digitalWrite(alrm1,0);
    digitalWrite(alrm2,0);
  }
}