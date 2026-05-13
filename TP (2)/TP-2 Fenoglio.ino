
#define ledR1 3
#define ledG1 6
#define ledB1 5
#define ledR2 9
#define ledG2 11
#define ledB2 10
#define potDelay A0
#define potR A1
#define potG A2
#define potB A3
#define btn 2
#define bzr 8


bool estadoBoton;
bool estadoAnterior = 1;
bool sistemaPausa = 1;

int delayPot;
int R;
int G; 
int B;

void setup()
{
  pinMode(ledR1, OUTPUT);
  pinMode(ledG1, OUTPUT);
  pinMode(ledB1, OUTPUT);

  pinMode(ledR2, OUTPUT);
  pinMode(ledG2, OUTPUT);
  pinMode(ledB2, OUTPUT);

  pinMode(btn, INPUT_PULLUP);
  pinMode(bzr, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  
  estadoBoton = digitalRead(btn);

  if (estadoBoton == 0 && estadoAnterior == 1)
  {
    sistemaPausa = !sistemaPausa;
    delay(200);
  }

  estadoAnterior = estadoBoton;

  
  delayPot = map(analogRead(potDelay),0,1023,0,3000);
  R = map(analogRead(potR),0,1023,0,255);
  G = map(analogRead(potG),0,1023,0,255);
  B = map(analogRead(potB),0,1023,0,255);

  Serial.print("Tiempo: ");
  Serial.println(delayPot);

  Serial.print("R:");
  Serial.println(R);
  Serial.print("G:");
  Serial.println(G);
  Serial.print("B:");
  Serial.println(B);


  if (sistemaPausa == 0)
  {
    
    analogWrite(ledR1, R);
    analogWrite(ledG1, G);
    analogWrite(ledB1, B);

    analogWrite(ledR2, 0);
    analogWrite(ledG2, 0);
    analogWrite(ledB2, 0);

    digitalWrite(bzr,1);
    delay(delayPot);

      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    

    analogWrite(ledR2, R);
    analogWrite(ledG2, G);
    analogWrite(ledB2, B);

    analogWrite(ledR1, 0);
    analogWrite(ledG1, 0);
    analogWrite(ledB1, 0);

    digitalWrite(bzr,1);
    delay(delayPot);

    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
          analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
      analogWrite(ledR1, 0);
      analogWrite(ledG1, 0);
      analogWrite(ledB1, 0);

      analogWrite(ledR2, 0);
      analogWrite(ledG2, 0);
      analogWrite(ledB2, 0);

      delay(100);

      analogWrite(ledR1, R);
      analogWrite(ledG1, G);
      analogWrite(ledB1, B);

      analogWrite(ledR2, R);
      analogWrite(ledG2, G);
      analogWrite(ledB2, B);

      delay(100);
    
  }
  else
  {
   
    analogWrite(ledR1, 0);
    analogWrite(ledG1, 0);
    analogWrite(ledB1, 0);

    analogWrite(ledR2, 0);
    analogWrite(ledG2, 0);
    analogWrite(ledB2, 0);

    digitalWrite(bzr,0);
  }
}