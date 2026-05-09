#define rgb_r 4
#define rgb_b 5
#define rgb_g 6
#define btn 7

bool estadoBoton = 0;
bool estadoAnterior = 0;
int ledEncendido = 0;

void setup()
{
  pinMode(rgb_r, OUTPUT);
  pinMode(rgb_b, OUTPUT);
  pinMode(rgb_g, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop()
{

  estadoBoton = digitalRead(btn); 
  
  if(estadoBoton == 1 && estadoAnterior == 0)
  {
    ledEncendido++;
    delay(50);
  }
   estadoAnterior = estadoBoton;
  
   if(ledEncendido > 7)
   {
    ledEncendido = 1; 
    delay(50);
   }
  
    if(ledEncendido == 1)
  {
    digitalWrite(rgb_r, 1); 
    digitalWrite(rgb_b, 0); 
    digitalWrite(rgb_g, 0);
  }
 
  if(ledEncendido == 2)
  {
    
    digitalWrite(rgb_r, 0); 
    digitalWrite(rgb_b, 1); 
    digitalWrite(rgb_g, 1);
    
  }
  
  if(ledEncendido == 3)
  {
    digitalWrite(rgb_r, 0); 
    digitalWrite(rgb_b, 0); 
    digitalWrite(rgb_g, 1);
  }
   
  if(ledEncendido == 4)
  {
    digitalWrite(rgb_r, 1); 
    digitalWrite(rgb_b, 1); 
    digitalWrite(rgb_g, 0);
    
  }
  
   if(ledEncendido == 5)
  {
    digitalWrite(rgb_r, 0); 
    digitalWrite(rgb_b, 1); 
    digitalWrite(rgb_g, 0); 
  }
   
  if(ledEncendido == 6)
  {
    digitalWrite(rgb_r, 1); 
    digitalWrite(rgb_b, 1); 
    digitalWrite(rgb_g, 1);
  }
  
   if(ledEncendido == 7)
  {
    digitalWrite(rgb_r, 1); 
    digitalWrite(rgb_b, 0); 
    digitalWrite(rgb_g, 1);
  }
  
  
}