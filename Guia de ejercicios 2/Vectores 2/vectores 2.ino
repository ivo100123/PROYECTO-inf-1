int array[] = { 10, 4, 2 };

void setup()
{
  Serial.begin(9600);
  
  int n = 3; 


  for (int j = 0; j < n - 1; j++)
  {
    for (int i = 0; i < n - 1 - j; i++)
    {
      if (array[i] > array[i + 1]) 
      {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  

  for (int i = 0; i < 3; i++) 
  {
    Serial.println(array[i]);
  }
}

void loop()
{
}