bool multiplo(int num, int divisor) {
  if (divisor == 0) return false;   
  return (num % divisor == 0);
}

void setup() 
{
  Serial.begin(9600);

  int num = 20;
  int divisor = 5;

  if (multiplo(num, divisor)) 
  {
    Serial.println("Es multiplo");
  } else 
  {
    Serial.println("No es multiplo");
  }
}

void loop() 
{
  
}
