#define led_G1 0
#define led_R1 1
#define led_Y1 2
#define led_O1 3
#define led_B1 4
#define led_G2 5
#define led_R2 6
#define led_Y2 7
#define led_O2 8
#define led_B2 9



void setup()
{
  pinMode(led_G1, OUTPUT);
  pinMode(led_R1, OUTPUT);
  pinMode(led_Y1, OUTPUT);
  pinMode(led_O1, OUTPUT);
  pinMode(led_G2, OUTPUT);
  pinMode(led_R2, OUTPUT);
  pinMode(led_Y2, OUTPUT);
  pinMode(led_O2, OUTPUT);
  pinMode(led_B2, OUTPUT);
}

void loop()
{
 digitalWrite(led_G1,1);
 delay(500);
 
 digitalWrite(led_G1,0);
 digitalWrite(led_R1,1);
 delay(500);
 
 digitalWrite(led_R1,0);
 digitalWrite(led_Y1,1);
 delay(500);
 
 digitalWrite(led_Y1,0); 
 digitalWrite(led_O1,1);
 delay(500);
  
 digitalWrite(led_O1,0);
 digitalWrite(led_B1,1);
 delay(500);
  
 digitalWrite(led_B1,0);
 digitalWrite(led_G2,1);
 delay(500);
  
 digitalWrite(led_G2,0);
 digitalWrite(led_R2,1);
 delay(500);
  
 digitalWrite(led_R2,0);
 digitalWrite(led_Y2,1);
 delay(500);
  
 digitalWrite(led_Y2,0);
 digitalWrite(led_O2,1);
 delay(500);
  
 digitalWrite(led_O2,0);
 digitalWrite(led_B2,1);
 delay(500);
  
 digitalWrite(led_B2,0);
 delay(500);
   
 
}