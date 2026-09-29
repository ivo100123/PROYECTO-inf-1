int array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int suma = 0;

void setup()
{
  for(int i = 0; i < 10; i++) 
  {
   suma += array[i];
  }
  
  int resultado = suma  / 10;
  
  Serial.begin(9600);
  
  Serial.println(resultado);
  
}

void loop()
{
}