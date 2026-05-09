#define r1 0
#define b1 1
#define g1 3
#define r2 4
#define b2 5
#define g2 6

void setup()
{
  pinMode(r1, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(g2, OUTPUT);
}

void loop()
{
	digitalWrite(r2,0);
  	digitalWrite(b2,0);
  	digitalWrite(g2,0);
 	digitalWrite(r1,1);
  	digitalWrite(b1,0);
  	digitalWrite(g1,0);
  	delay(1000);
  
  	digitalWrite(r1,0);
	digitalWrite(b1,0);
	digitalWrite(g1,0);
  	delay(500);
  
 	digitalWrite(r1,0);
  	digitalWrite(b1,1);
  	digitalWrite(g1,1);
  	delay(1000);
  
  	digitalWrite(r1,0);
	digitalWrite(b1,0);
	digitalWrite(g1,0);
  	delay(500);
  
  	digitalWrite(r1,0);
  	digitalWrite(b1,0);
  	digitalWrite(g1,1);
  	delay(1000);
  	
  	digitalWrite(r1,0);
	digitalWrite(b1,0);
	digitalWrite(g1,0);
  	delay(500);
  
 	digitalWrite(r1,1);
  	digitalWrite(b1,1);
  	digitalWrite(g1,0);
  	delay(1000);
  
  	digitalWrite(r1,0);
	digitalWrite(b1,0);
	digitalWrite(g1,0);
  	delay(500);
  
  	digitalWrite(r1,0);
  	digitalWrite(b1,1);
  	digitalWrite(g1,0);
  	delay(1000);
  
  	digitalWrite(r1,0);
	digitalWrite(b1,0);
	digitalWrite(g1,0);
  	delay(500);
  
  	digitalWrite(r1,1);
  	digitalWrite(b1,1);
  	digitalWrite(g1,1);
  	delay(1000);
  
  	digitalWrite(r1,0);
	digitalWrite(b1,0);
	digitalWrite(g1,0);
  	delay(500);
  
  	digitalWrite(r1,1);
  	digitalWrite(b1,0);
  	digitalWrite(g1,1);
  	delay(1000);
  
  	digitalWrite(r1,0);
	digitalWrite(b1,0);
	digitalWrite(g1,0);
  	delay(500);
  
  //cambio RGB
  	digitalWrite(r1,0);
  	digitalWrite(b1,0);
  	digitalWrite(g1,0);
 	digitalWrite(r2,1);
  	digitalWrite(b2,0);
  	digitalWrite(g2,0);
  	delay(1000);
  
  	digitalWrite(r2,0);
	digitalWrite(b2,0);
	digitalWrite(g2,0);
  	delay(500);
  
 	digitalWrite(r2,0);
  	digitalWrite(b2,1);
  	digitalWrite(g2,1);
  	delay(1000);
  
  	digitalWrite(r2,0);
	digitalWrite(b2,0);
	digitalWrite(g2,0);
  	delay(500);
  
  	digitalWrite(r2,0);
  	digitalWrite(b2,0);
  	digitalWrite(g2,1);
  	delay(1000);
  
  	digitalWrite(r2,0);
	digitalWrite(b2,0);
	digitalWrite(g2,0);
  	delay(500);
  
 	digitalWrite(r2,1);
  	digitalWrite(b2,1);
  	digitalWrite(g2,0);
  	delay(1000);
  
  	digitalWrite(r2,0);
	digitalWrite(b2,0);
	digitalWrite(g2,0);
  	delay(500);
  
  	digitalWrite(r2,0);
  	digitalWrite(b2,1);
  	digitalWrite(g2,0);
  	delay(1000);
  
  	digitalWrite(r2,0);
	digitalWrite(b2,0);
	digitalWrite(g2,0);
  	delay(500);
  
  	digitalWrite(r2,1);
  	digitalWrite(b2,1);
  	digitalWrite(g2,1);
  	delay(1000);
  
  	digitalWrite(r2,0);
	digitalWrite(b2,0);
	digitalWrite(g2,0);
  	delay(500);
  
  	digitalWrite(r2,1);
  	digitalWrite(b2,0);
  	digitalWrite(g2,1);
  	delay(1000);
}