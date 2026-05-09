#define rgb1_r 4
#define rgb1_b 5
#define rgb1_g 6
#define rgb2_r 7
#define rgb2_b 8
#define rgb2_g 9
#define rgb3_r 10
#define rgb3_b 11
#define rgb3_g 12
#define btn 13

bool estadoBoton = 0;
bool estadoAnterior = 0;
int ledEncendido = 0;

void setup()
{
  pinMode(rgb1_r, OUTPUT);
  pinMode(rgb1_b, OUTPUT);
  pinMode(rgb1_g, OUTPUT);
  pinMode(rgb2_r, OUTPUT);
  pinMode(rgb2_b, OUTPUT);
  pinMode(rgb2_g, OUTPUT);
  pinMode(rgb3_r, OUTPUT);
  pinMode(rgb3_b, OUTPUT);
  pinMode(rgb3_g, OUTPUT);
  pinMode(btn, INPUT_PULLUP); 
  Serial.begin(9600);
}

void loop()
{
  estadoBoton = digitalRead(btn); 
  Serial.println(estadoBoton);
  
  if(estadoBoton == 1 && estadoAnterior == 0)
  {
    ledEncendido++;
    delay(50);
  }
   estadoAnterior = estadoBoton;
  
   if(ledEncendido > 3)
   {
    ledEncendido = 1; 
    delay(50);
   }
  
  if(ledEncendido == 0)
  {
    
    digitalWrite(rgb1_r, 0); 
    digitalWrite(rgb1_b, 1); 
    digitalWrite(rgb1_g, 1);
    
    digitalWrite(rgb2_r, 1); 
    digitalWrite(rgb2_b, 1);
    digitalWrite(rgb2_g, 0);
    
    digitalWrite(rgb3_r, 1);
    digitalWrite(rgb3_b, 0);
    digitalWrite(rgb3_g, 1);
    delay(1000);
  }  
  if(ledEncendido == 1)
  {
    
    digitalWrite(rgb1_r, 0); 
    digitalWrite(rgb1_b, 1); 
    digitalWrite(rgb1_g, 1);
    
    digitalWrite(rgb2_r, 0); 
    digitalWrite(rgb2_b, 0);
    digitalWrite(rgb2_g, 0);
    
    digitalWrite(rgb3_r, 0);
    digitalWrite(rgb3_b, 0);
    digitalWrite(rgb3_g, 0);
  }
  
  if(ledEncendido == 2)
  {
    digitalWrite(rgb1_r, 0); 
    digitalWrite(rgb1_b, 0); 
    digitalWrite(rgb1_g, 0);
    
    digitalWrite(rgb2_r, 1); 
    digitalWrite(rgb2_b, 1); 
    digitalWrite(rgb2_g, 0);
    
    digitalWrite(rgb3_r, 0); 
    digitalWrite(rgb3_b, 0); 
    digitalWrite(rgb3_g, 0);
  }
   
  if(ledEncendido == 3)
  {

    digitalWrite(rgb1_r, 0); 
    digitalWrite(rgb1_b, 0); 
    digitalWrite(rgb1_g, 0);
    
    digitalWrite(rgb2_r, 0); 
    digitalWrite(rgb2_b, 0); 
    digitalWrite(rgb2_g, 0);
    
    digitalWrite(rgb3_r, 1); 
    digitalWrite(rgb3_b, 0); 
    digitalWrite(rgb3_g, 1);
  }
}