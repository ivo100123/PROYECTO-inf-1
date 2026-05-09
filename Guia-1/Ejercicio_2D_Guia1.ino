#define rgb1_R 2
#define rgb1_B 3
#define rgb1_G 4
#define poten A5
#define rgb2_R 8
#define rgb2_G 9
#define rgb2_B 10

int delay_poten;

void setup()
{
  pinMode(poten,INPUT);
  pinMode(rgb1_R,OUTPUT);
  pinMode(rgb1_B,OUTPUT);
  pinMode(rgb1_G,OUTPUT);
  pinMode(rgb2_R,OUTPUT);
  pinMode(rgb2_G,OUTPUT);
  pinMode(rgb2_B,OUTPUT);
  Serial.begin(9400);
  
  digitalWrite(rgb1_R,0);
  digitalWrite(rgb1_G,0);
  digitalWrite(rgb1_B,0);
  
  digitalWrite(rgb2_R,0);
  digitalWrite(rgb2_G,0);
  digitalWrite(rgb2_B,0);
  
  
}

void loop()
{

 delay_poten = map(analogRead(poten), 0, 1023, 200, 1000);
  
 
 /* Serial.println("Potenciometro bruto");
  Serial.println(poten);
  
   delay(1000);
    
  Serial.println("Potenciometro mapeado");
  Serial.println(delay_poten);
  delay(1000);*/
  
  digitalWrite(rgb2_R,0);
  digitalWrite(rgb2_B,0);
  
  digitalWrite(rgb1_R,1);
  digitalWrite(rgb1_G,1);
  
  Serial.println(delay_poten);
  delay(delay_poten);
  
 
  digitalWrite(rgb1_R,0);
  digitalWrite(rgb1_G,0);
  
  digitalWrite(rgb2_R,1);
  digitalWrite(rgb2_B,1);
  
  delay(delay_poten);
  
  
}