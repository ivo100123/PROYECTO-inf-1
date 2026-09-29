#define led1 2
#define led2 3

int array1[] = { 1, 0 ,0 ,1, 1, 0, 1,1}; 

int array2[] = { 0, 1 ,0 ,1, 0, 0, 1,0}; 

int tamanio = sizeof(array1) / sizeof(array1[0]);

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  for(int i = 0; i < tamanio - 1; i++)
  {
    digitalWrite(led1,array1[i]);
    digitalWrite(led2,array2[i]);
    delay(500);
    
  }
}