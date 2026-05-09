#define rgb_r 3
#define rgb_b 5
#define rgb_g 6
void setup()
{
  pinMode(rgb_r, OUTPUT);
  pinMode(rgb_b, OUTPUT);
  pinMode(rgb_g, OUTPUT);
}

void loop()
{
  
  analogWrite(rgb_r,100);
  analogWrite(rgb_b,0);
  analogWrite(rgb_g,0);
  delay(1000);
  analogWrite(rgb_r,255);
  delay(1000);
  analogWrite(rgb_r,50);
  delay(1000);
  
  analogWrite(rgb_r, 255);
  analogWrite(rgb_g,255);
  delay(1000);
  analogWrite(rgb_r, 220);
  analogWrite(rgb_g,255);
  delay(1000);
  analogWrite(rgb_r, 255);
  analogWrite(rgb_g,220);
  delay(1000);
  
  analogWrite(rgb_r,0);
  analogWrite(rgb_b,255);
  analogWrite(rgb_g,255);
  delay(1000);
  analogWrite(rgb_b,220);
  analogWrite(rgb_g,255);
  delay(1000);
  analogWrite(rgb_b,255);
  analogWrite(rgb_g,220);
  delay(1000);
}