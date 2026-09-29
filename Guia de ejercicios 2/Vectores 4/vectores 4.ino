#define led 2

int array[] = { 1, 0 ,0 ,1, 1, 0, 1,1}; 

int tamanio = sizeof(array) / sizeof(array[0]);

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i = 0; i < tamanio - 1; i++)
  {
    digitalWrite(led,array[i]);
    delay(500);
  }
}