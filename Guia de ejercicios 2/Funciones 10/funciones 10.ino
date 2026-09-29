void configurar(int entradas[], int salidas[], int cantidadEntrada, int cantidadSalida) 
{
  int i = 0;
  
  for(int i = 0; i < cantidadEntrada; i++)
  {
    for(int j = 0; j < cantidadSalida; j++)
    {
      pinMode(entradas[i], INPUT);
    	i++;
      
      pinMode(salidas[j], OUTPUT);
    	j++;
    }
    
  }
  
 
}

int entradas[] = {8, 9, 10};
int salidas[] = {2, 3, 4};

void setup() {
  Serial.begin(9600);
  configurar(entradas, salidas, 3, 3);
}

void loop() {
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  delay(500);

  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  delay(500);

  Serial.println(digitalRead(8));
  
  Serial.println(digitalRead(9));
  
  Serial.println(digitalRead(10));
  delay(500);
}