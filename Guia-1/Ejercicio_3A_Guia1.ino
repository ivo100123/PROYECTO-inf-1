#define led1 2
#define led2 3
#define led3 6
#define led4 11
#define led5 9
#define led6 10
#define bzr1 4
#define bzr2 5


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT); 
  pinMode(bzr1, OUTPUT);
  pinMode(bzr2, OUTPUT);
  
  tone(bzr1,800);
  tone(bzr2,940);
}


void loop()
{
 
 digitalWrite(led2,0);
 digitalWrite(led4,0); //Lado izquierdo encendido
 digitalWrite(led6,0);
 digitalWrite(led1,1);
 digitalWrite(led3,1);
 digitalWrite(led5,1);
 
 analogWrite(bzr1,940);
 analogWrite(bzr2,0);
 delay(300);
  
 
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 digitalWrite(led2,0); //Lado izquierdo apagado
 digitalWrite(led4,0);
 digitalWrite(led6,0);
 analogWrite(bzr1,0);
 analogWrite(bzr2,0);
 delay(300);
  

 digitalWrite(led2,1);
 digitalWrite(led4,1); //Lado derecho encendido
 digitalWrite(led6,1);
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 
 analogWrite(bzr1,0);
 analogWrite(bzr2,940);
 delay(300);
  
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 digitalWrite(led2,0); //Lado derecho apagado
 digitalWrite(led4,0);
 digitalWrite(led6,0);
 analogWrite(bzr1,0);
 analogWrite(bzr2,0);
 delay(300);
  
 digitalWrite(led2,0);
 digitalWrite(led4,0); //Lado izquierdo encendido (cambio buzzer)
 digitalWrite(led6,0);
 digitalWrite(led1,1);
 digitalWrite(led3,1);
 digitalWrite(led5,1);
 
 analogWrite(bzr1,940);
 analogWrite(bzr2,0);
 delay(300);
  
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 digitalWrite(led2,0); //Lado izquierdo apagado
 digitalWrite(led4,0);
 digitalWrite(led6,0);
 analogWrite(bzr1,0);
 analogWrite(bzr2,0);
 delay(300);
  
  //CAMBIO DE LADO
 digitalWrite(led2,1);
 digitalWrite(led4,1); //Lado derecho encendido
 digitalWrite(led6,1);
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 
 analogWrite(bzr1,0);
 analogWrite(bzr2,940);
 delay(300);
  
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 digitalWrite(led2,0); //Lado derecho apagado
 digitalWrite(led4,0);
 digitalWrite(led6,0);
 analogWrite(bzr1,0);
 analogWrite(bzr2,0);
 delay(300);
  
 digitalWrite(led2,0);
 digitalWrite(led4,0); //Lado izquierdo encendido (cambio buzzer)
 digitalWrite(led6,0);
 digitalWrite(led1,1);
 digitalWrite(led3,1);
 digitalWrite(led5,1);
 
 analogWrite(bzr1,940);
 analogWrite(bzr2,0);
 delay(300);
  
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 digitalWrite(led2,0); //Lado izquierdo apagado
 digitalWrite(led4,0);
 digitalWrite(led6,0);
 analogWrite(bzr1,0);
 analogWrite(bzr2,0);
 delay(300);
  
 digitalWrite(led2,1);
 digitalWrite(led4,1); //Lado derecho encendido
 digitalWrite(led6,1);
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 
 analogWrite(bzr1,0);
 analogWrite(bzr2,940);
 delay(300);
  
 digitalWrite(led1,0);
 digitalWrite(led3,0);
 digitalWrite(led5,0);
 digitalWrite(led2,0); //Lado derecho apagado
 digitalWrite(led4,0);
 digitalWrite(led6,0);
  
 analogWrite(bzr1,0);
 analogWrite(bzr2,0);
 delay(300);
}
