#define led_R 1
#define led_Y 2
#define led_G 3
#define led_O 4
#define led_W 5

void setup()
{
  pinMode(led_R,OUTPUT);
  pinMode(led_Y,OUTPUT);
  pinMode(led_G,OUTPUT);
  pinMode(led_O,OUTPUT);
  pinMode(led_W,OUTPUT);
}

void loop()
{
  
  delay(1000);
  digitalWrite(led_R,0);
  digitalWrite(led_Y,0);
  digitalWrite(led_G,1);
  digitalWrite(led_O,0);
  digitalWrite(led_W,1);
  delay(3000);
  
  digitalWrite(led_R,0);
  digitalWrite(led_Y,1);
  digitalWrite(led_G,0);
  digitalWrite(led_W,0);
  digitalWrite(led_O,1); //Hacemos parpadear el naranja como aviso
  delay(500);
  digitalWrite(led_O,0);
  delay(500);
  digitalWrite(led_O,1);
  delay(500);
  digitalWrite(led_O,0);
  delay(500);
  digitalWrite(led_O,1);
  delay(500);
  digitalWrite(led_O,0);
  
  digitalWrite(led_R,1);
  digitalWrite(led_Y,0);
  digitalWrite(led_G,0);
  digitalWrite(led_O,1);
  digitalWrite(led_W,0);
  delay(3000);
  
  digitalWrite(led_R,0);
  digitalWrite(led_Y,1);
  digitalWrite(led_G,0);
  digitalWrite(led_W,0);
  digitalWrite(led_O,1);
  delay(3000);
}