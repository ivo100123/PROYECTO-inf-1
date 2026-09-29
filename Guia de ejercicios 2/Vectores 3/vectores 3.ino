float array[] = { 5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49 };

void setup() {
  Serial.begin(9600);
  
  int n = sizeof(array) / sizeof(array[0]); 
  float max = array[0]; 

  
  for (int i = 1; i < n; i++) {
    if (array[i] > max) {
      max = array[i]; 
    }
  }

  Serial.println(max);
}

void loop() {
}