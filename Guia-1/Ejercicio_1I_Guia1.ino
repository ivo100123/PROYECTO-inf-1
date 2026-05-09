#define led1 0
#define led2 1
#define led3 2
#define led4 3
#define led5 4
#define led6 5
#define led7 6
#define led8 7
#define led9 8
#define led10 9
#define btn 10

int ledEncendido = 0;
bool estadoBoton = 0;
bool estadoAnterior = 0;
bool pausa = 0;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(btn,INPUT_PULLUP);
}

void loop()
{
  estadoBoton = digitalRead(btn); 
  
  if(estadoBoton == 0 && estadoAnterior == 1) 
  {
    pausa = !pausa;
    delay(500); 
  }
  estadoAnterior = estadoBoton;
  
  if(pausa == 0)
  {
    ledEncendido++;
    if(ledEncendido > 10)
    {
      ledEncendido = 1;
    } // la { cierra al final de los otros IFs
    
   
    if(ledEncendido == 1)
    {
       digitalWrite(led1,1); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 2)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,1); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 3)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,1); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 4)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,1); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 5)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,1);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 6)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,1); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 7)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,1); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 8)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,1); 
       digitalWrite(led9,0); 
       digitalWrite(led10,0);
    }
    
    else if(ledEncendido == 9)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,1); 
       digitalWrite(led10,0);
    }
  
    else if(ledEncendido == 10)
    {
       digitalWrite(led1,0); 
       digitalWrite(led2,0); 
       digitalWrite(led3,0); 
       digitalWrite(led4,0); 
       digitalWrite(led5,0);
       digitalWrite(led6,0); 
       digitalWrite(led7,0); 
       digitalWrite(led8,0); 
       digitalWrite(led9,0); 
       digitalWrite(led10,1);
    } 
    
    delay(1000); // El delay va al final del bloque para que el LED se vea prendido
  }
}
