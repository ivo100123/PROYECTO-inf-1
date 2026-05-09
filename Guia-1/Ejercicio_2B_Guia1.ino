#define led1 1
#define led2 3
#define led3 5
#define led4 6
#define led5 9
#define led6 10
#define led7 11
#define led8 12

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
}

void loop()
{
	digitalWrite(led1,0);
  	analogWrite(led2,20);
  	analogWrite(led3,50);
  	analogWrite(led4,70);
  	analogWrite(led5,80);
  	analogWrite(led6,90);
  	analogWrite(led7,110);
  	digitalWrite(led8,1);
  
}