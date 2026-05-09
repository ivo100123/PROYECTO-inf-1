#define led_1 0
#define led_2 1
#define led_3 2
#define led_4 3
#define led_5 4
#define led_6 5
#define led_7 6
#define led_8 7
#define led_9 8
#define led_10 9


void setup()
{
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  pinMode(led_4,OUTPUT);
  pinMode(led_5,OUTPUT);
  pinMode(led_6,OUTPUT);
  pinMode(led_7,OUTPUT);
  pinMode(led_8,OUTPUT);
  pinMode(led_9,OUTPUT);
  pinMode(led_10,OUTPUT);
}

void loop()
{
  digitalWrite(led_2,0);
  digitalWrite(led_4,0); 
  digitalWrite(led_6,0); //Apagar verdes
  digitalWrite(led_8,0);
  digitalWrite(led_10,0);
  
  delay(700);
  
  digitalWrite(led_1,1);
  digitalWrite(led_3,1); //Prender Rojos
  digitalWrite(led_5,1);
  digitalWrite(led_7,1);
  digitalWrite(led_9,1);
  
  delay(700);
  
  digitalWrite(led_1,0);
  digitalWrite(led_3,0); //Apagar rojos
  digitalWrite(led_5,0);
  digitalWrite(led_7,0);
  digitalWrite(led_9,0);
  
  digitalWrite(led_2,1);
  digitalWrite(led_4,1); //Prender verdes
  digitalWrite(led_6,1);
  digitalWrite(led_8,1);
  digitalWrite(led_10,1);
  delay(700);
}