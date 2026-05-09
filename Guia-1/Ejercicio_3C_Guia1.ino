#define led1_r 0
#define led1_b 1
#define led1_g 2
#define led2_r 4
#define led2_b 7
#define led2_g 8
#define led3_r 3
#define led3_b 5
#define led3_g 6
#define led4_r 9
#define btn 10
#define led4_g 11
#define led5_r 12
#define led6_b 13
#define pot A0

bool estadoBoton;
bool estadoAnterior;
int velocidad;

void setup()
{
  pinMode(led1_r, OUTPUT);
  pinMode(led1_b, OUTPUT);
  pinMode(led1_g, OUTPUT);
  pinMode(led2_r, OUTPUT);
  pinMode(led2_b, OUTPUT);
  pinMode(led2_g, OUTPUT);
  pinMode(led3_r, OUTPUT);
  pinMode(led3_b, OUTPUT);
  pinMode(led3_g, OUTPUT);
  pinMode(led4_r, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  pinMode(led4_g, OUTPUT);
  pinMode(led5_r, OUTPUT);
  pinMode(led6_b, OUTPUT);
  pinMode(pot,INPUT);
}

void loop()
{
  estadoBoton = digitalRead(btn);
  
  
  if(estadoBoton == 0)
  {
    delay(150); 
  }
 
  velocidad = map(analogRead(pot),0,1023,100,1000);
  
  if(estadoBoton == 0 && estadoAnterior == 1)	
  {
    digitalWrite(led1_r,1);
  	digitalWrite(led1_b,0);
  	digitalWrite(led1_g,1);
  	delay(velocidad); //cambiar por pot
  
  	digitalWrite(led1_r,0);
  	digitalWrite(led1_b,0);
  	digitalWrite(led1_g,0);
  	delay(velocidad);
  
  	digitalWrite(led2_r,0);
  	digitalWrite(led2_b,1);
  	digitalWrite(led2_g,1);
  	delay(velocidad);
  
  	digitalWrite(led2_r,0);
  	digitalWrite(led2_b,0);
  	digitalWrite(led2_g,0);
  	delay(velocidad);
  
  	digitalWrite(led3_r,1);
  	digitalWrite(led3_b,1);
  	digitalWrite(led3_g,0);
  	delay(velocidad);
  
  	digitalWrite(led3_r,0);
  	digitalWrite(led3_b,0);
  	digitalWrite(led3_g,0);
  	delay(velocidad);
  
  	digitalWrite(led4_g,1);
  	delay(velocidad);
  
  	digitalWrite(led4_g,0);
  	delay(velocidad);
  
  	digitalWrite(led5_r,1); 
  	delay(velocidad);
  
  	digitalWrite(led5_r,0); 
  	delay(velocidad);
  
  	digitalWrite(led6_b,1);
  	delay(velocidad);
  
  	digitalWrite(led6_b,0);
  	delay(velocidad);
  }
     
   estadoAnterior = estadoBoton;
  	delay(50);
}