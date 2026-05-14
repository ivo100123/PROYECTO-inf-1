#define RGB_1R 3
#define RGB_1B 5
#define RGB_1G 6
#define RGB_2R 7
#define RGB_2B 8
#define RGB_2G 2
#define RGB_3R 9
#define RGB_3B 10
#define RGB_3G 11
#define bzr 12
#define potenDelay A0
#define poten1 A1
#define poten2 A2
#define poten3 A3
#define btn 4

bool estado = 1;
bool estadoAnterior = 1;
bool sistemaPausa = 0;

int delayPoten;
int r;
int b;
int g;

void setup()
{
  pinMode(RGB_1R, OUTPUT);
  pinMode(RGB_1B, OUTPUT);
  pinMode(RGB_1G, OUTPUT);
  pinMode(RGB_2R, OUTPUT);
  pinMode(RGB_2B, OUTPUT);
  pinMode(RGB_2G, OUTPUT);
  pinMode(RGB_3R, OUTPUT);
  pinMode(RGB_3B, OUTPUT);
  pinMode(RGB_3G, OUTPUT);
  pinMode(bzr, OUTPUT);
  pinMode(poten1,INPUT);
  pinMode(poten2,INPUT);
  pinMode(poten3,INPUT);
  pinMode(potenDelay,INPUT);
  pinMode(btn,INPUT_PULLUP);

  Serial.begin(9600);
}

void loop()
{
  
  estado = digitalRead(btn);

  if(estado == 0 && estadoAnterior == 1)
  {
    sistemaPausa = !sistemaPausa;
  }

  estadoAnterior = estado;

  if(sistemaPausa == 0)
  {
   
    delayPoten = map(analogRead(potenDelay),0,1023,0,3000);

    r = map(analogRead(poten1),0,1023,0,255);
	g = map(analogRead(poten2),0,1023,0,255);
	b = map(analogRead(poten3),0,1023,0,255);

    Serial.println("Tiempo: ");
    Serial.println(delayPoten / 1000); //para q se vea en segundos
    Serial.println("R:");
    Serial.println(r);
    Serial.println("G:");
    Serial.println(g);
    Serial.println("B:");
    Serial.println(b);

    
   
	analogWrite(RGB_2R,0);
	analogWrite(RGB_2G,0);
	analogWrite(RGB_2B,0);
	analogWrite(RGB_3R,0);
	analogWrite(RGB_3G,0);
	analogWrite(RGB_3B,0);


	analogWrite(RGB_1R, r);
	analogWrite(RGB_1G, g);
	analogWrite(RGB_1B, b);
	delay(delayPoten);
    
    analogWrite(bzr,255);
    delay(100);
    analogWrite(bzr,0);


    analogWrite(RGB_1R,0);
    analogWrite(RGB_1G,0);
    analogWrite(RGB_1B,0);
    delay(500);
    analogWrite(RGB_1R,r);
    analogWrite(RGB_1G,g);
    analogWrite(RGB_1B,b);
    delay(500);

   
    analogWrite(RGB_1R,0);
	analogWrite(RGB_1G,0);
	analogWrite(RGB_1B,0);
	analogWrite(RGB_3R,0);
	analogWrite(RGB_3G,0);
	analogWrite(RGB_3B,0);
    
    analogWrite(RGB_2R, r);
    analogWrite(RGB_2G, g);
    analogWrite(RGB_2B, b);
    delay(delayPoten);

    analogWrite(bzr,255);
    delay(70);
    analogWrite(bzr,0);

    
    analogWrite(RGB_2R,0);
    analogWrite(RGB_2G,0);
    analogWrite(RGB_2B,0);
    delay(100);
    analogWrite(RGB_2R,r);
    analogWrite(RGB_2G,g);
    analogWrite(RGB_2B,b);
    delay(100);
    
    analogWrite(RGB_1R,0);
	analogWrite(RGB_1G,0);
	analogWrite(RGB_1B,0);
	analogWrite(RGB_2R,0);
	analogWrite(RGB_2G,0);
	analogWrite(RGB_2B,0);

    
    analogWrite(RGB_3R, r);
    analogWrite(RGB_3G, g);
    analogWrite(RGB_3B, b);
    delay(delayPoten);

    analogWrite(bzr,255);
    delay(70);
    analogWrite(bzr,0);

    
    analogWrite(RGB_3R,0);
    analogWrite(RGB_3G,0);
    analogWrite(RGB_3B,0);
    delay(100);
    analogWrite(RGB_3R,r);
    analogWrite(RGB_3G,g);
    analogWrite(RGB_3B,b);
    delay(100);
  }
  else
  {
    analogWrite(RGB_1R,0);
    analogWrite(RGB_1G,0);
    analogWrite(RGB_1B,0);
    analogWrite(RGB_2R,0);
    analogWrite(RGB_2G,0);
    analogWrite(RGB_2B,0);
    analogWrite(RGB_3R,0);
    analogWrite(RGB_3G,0);
    analogWrite(RGB_3B,0);
    analogWrite(bzr,0);
  }
}