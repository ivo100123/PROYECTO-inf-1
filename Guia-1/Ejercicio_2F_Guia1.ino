#define pot A0
#define led_g 3

int delay_pot;

void setup()
{
  pinMode(pot, INPUT);
  pinMode(led_g,OUTPUT);
}

void loop()
{
 delay_pot = map(analogRead(pot), 0, 1023, 0, 10000);
  
  analogWrite(led_g,255);
  delay(delay_pot);
  analogWrite(led_g,0);
  delay(delay_pot);
}

