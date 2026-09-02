#include <Adafruit_NeoPixel.h>

#define LED1 3 
#define LED2 6 
#define btn 2
#define bzr 5
#define cantNeo 32


#define length(v,t) (sizeof(v)/sizeof(t))

Adafruit_NeoPixel dado1 = Adafruit_NeoPixel(cantNeo, LED1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel dado2 = Adafruit_NeoPixel(cantNeo, LED2, NEO_GRB + NEO_KHZ800);


int uno[] = {15, 16}; 
int dos[] = {0, 1, 2, 3, 7, 8, 15, 16, 19, 23, 24, 27, 28, 29, 30, 31};
int tres[] = {0, 1, 2, 15, 16, 29, 30, 31};
int cuatro[] = {0, 7, 15, 16, 24, 31};
int cinco[] = {0, 1, 2, 3, 8, 15, 16, 23, 28, 29, 30, 31};
int seis[] = {0, 1, 2, 3, 7, 8, 15, 16, 23, 24, 27, 28, 29, 30, 31};


int* numeros[] = {uno, dos, tres, cuatro, cinco, seis};
int size[] = {length(uno,int), length(dos,int), length(tres,int), length(cuatro,int), length(cinco,int), length(seis,int)};


int pines[] = {LED1, LED2, bzr}; 
int estados[] = {1, 1, 1}; 

bool botonPresionado = 0;


void activarTirada() {
  botonPresionado = true;
}

void setup()
{
  for(int i=0 ; i < length(pines,int) ; i++){
    pinMode( pines[i] , estados[i] );
  }
  
  pinMode(btn, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(btn), activarTirada, FALLING);
  
  randomSeed(analogRead(A0));

  dado1.begin();
  dado1.show();
  dado1.clear();

  dado2.begin();
  dado2.show();
  dado2.clear();
}

void loop()
{
  if (botonPresionado) {
    botonPresionado = 0;

    
    for (int x = 0; x < 15; x++) {
      int ran1 = random(0, length(numeros, int*));
      int ran2 = random(0, length(numeros, int*));
      
      uint32_t color1 = dado1.Color(random(0,255), random(0,255), random(0,255));
      uint32_t color2 = dado2.Color(random(0,255), random(0,255), random(0,255));

      dado1.clear();
      dado2.clear();

      for (int i = 0 ; i < size[ran1] ; i++) {
        dado1.setPixelColor(numeros[ran1][i], color1);
      }
      for (int i = 0 ; i < size[ran2] ; i++) {
        dado2.setPixelColor(numeros[ran2][i], color2);
      }
      
      dado1.show();
      dado2.show();
      delay(50); 
    }

   
    int res1 = random(0, length(numeros, int*));
    int res2 = random(0, length(numeros, int*));
    
    uint32_t colorFinal1 = dado1.Color(random(0,255), random(0,255), random(0,255));
    uint32_t colorFinal2 = dado2.Color(random(0,255), random(0,255), random(0,255));

    dado1.clear();
    dado2.clear();

    for(int i = 0 ; i < size[res1] ; i++) {
      dado1.setPixelColor(numeros[res1][i], colorFinal1);
    }
    for(int i = 0 ; i < size[res2] ; i++) {
      dado2.setPixelColor(numeros[res2][i], colorFinal2);
    }
    
    dado1.show();
    dado2.show();

   
    if ((res1 + 1) + (res2 + 1) == 7) {
      for (int parpadeo = 0; parpadeo < 5; parpadeo++) {
        
       
        for(int i = 0; i < cantNeo; i++){
          dado1.setPixelColor(i, dado1.Color(0, 255, 0));
          dado2.setPixelColor(i, dado2.Color(0, 255, 0));
        }
        dado1.show();
        dado2.show();
        
        analogWrite(bzr, 128); 
        delay(300);

       
        dado1.clear();
        dado2.clear();
        dado1.show();
        dado2.show();
        
        analogWrite(bzr, 0);
        delay(300);
      }

     
      for(int i = 0 ; i < size[res1] ; i++) {
        dado1.setPixelColor(numeros[res1][i], colorFinal1);
      }
      for(int i = 0 ; i < size[res2] ; i++) {
        dado2.setPixelColor(numeros[res2][i], colorFinal2);
      }
      dado1.show();
      dado2.show();
    }
  }
}
