#define pot1 A0
#define pot2 A1
#define pot3 A2
#define r 5
#define b 6
#define g 9

int red;
int blue;
int green;

void setup()
{
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop()
{
  red = map(analogRead(pot1), 0, 1023, 0, 255);
  blue = map(analogRead(pot2), 0, 1023, 0, 255);
  green = map(analogRead(pot3), 0, 1023, 0, 255);
  
 analogWrite(r, red);
 analogWrite(b,blue);
 analogWrite(g,green);
  
  
}