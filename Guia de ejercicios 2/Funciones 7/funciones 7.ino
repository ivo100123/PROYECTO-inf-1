int numeros[] = {52, 6, 20, 3, 8};

void ordenarNumeros(int numeros[]) 
{
  for (int i = 0; i < 5 - 1; i++) 
  {
    for (int j = i + 1; j < 5; j++) 
    {
      if (numeros[j] > numeros[i]) 
      {
        int temporal = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temporal;
      }
    }
  }
}

void setup() 
{
  Serial.begin(9600);
  ordenarNumeros(numeros); 
  Serial.println("vector ordenado:");

  for (int i = 0; i < 5; i++) 
  {
    Serial.println(numeros[i]);
  }
}

  


void loop() 
{
  
}
