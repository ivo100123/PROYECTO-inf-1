int lanzarDado(int cantidadLados) 
{
  int resultado = random(1, cantidadLados + 1);
  return resultado;
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  Serial.print("Resultado del dado:");
  Serial.println(lanzarDado(6));
  delay(700);
}
