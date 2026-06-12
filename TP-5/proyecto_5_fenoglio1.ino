#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_LEDS 12
#define POT_PIN A0
#define BTN_PIN 2

Adafruit_NeoPixel strip(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

int efecto = 0;
bool lastBtn = 1;

void setup() {
  strip.begin();
  strip.show();
  pinMode(BTN_PIN, INPUT_PULLUP);
  randomSeed(analogRead(A1));
}

void loop() {

  
  bool estado = digitalRead(BTN_PIN);
  if (estado == 0 && lastBtn == 1) {
    efecto++;
    if (efecto > 2) efecto = 0;
    delay(200);
  }
  lastBtn = estado;

  int velocidad = map(analogRead(POT_PIN), 0, 1023, 100, 700);

  
  if (efecto == 0) {

    
    strip.clear();
    strip.setPixelColor(0, strip.Color(255,0,0));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(1, strip.Color(0,255,0));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(2, strip.Color(0,0,255));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(3, strip.Color(255,255,0));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(4, strip.Color(0,255,255));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(5, strip.Color(255,0,255));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(6, strip.Color(255,0,0));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(7, strip.Color(0,255,0));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(8, strip.Color(0,0,255));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(9, strip.Color(255,255,0));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(10, strip.Color(0,255,255));
    strip.show();
    delay(velocidad);

    
    strip.clear();
    strip.setPixelColor(11, strip.Color(255,0,255));
    strip.show();
    delay(velocidad);

    delay(1000);
  }

  
else if (efecto == 1) 
{

  
  strip.clear(); 
  strip.setPixelColor(0, strip.Color(255,0,0)); 
  strip.show(); 
  delay(velocidad);   
  
  strip.clear(); 
  strip.setPixelColor(1, strip.Color(255,128,0)); 
  strip.show(); 
  delay(velocidad); 
  
  strip.clear(); 
  strip.setPixelColor(2, strip.Color(255,255,0)); 
  strip.show(); 
  delay(velocidad); 
  
  strip.clear(); 
  strip.setPixelColor(3, strip.Color(0,255,0)); 
  strip.show(); 
  delay(velocidad);  
  
  strip.clear(); 
  strip.setPixelColor(4, strip.Color(0,255,255)); 
  strip.show(); 
  delay(velocidad); 
  
  strip.clear(); 
  strip.setPixelColor(5, strip.Color(0,0,255)); 
  strip.show(); 
  delay(velocidad); 
  
  strip.clear(); 
  strip.setPixelColor(6, strip.Color(128,0,255)); 
  strip.show(); 
  delay(velocidad); 
  
  strip.clear(); 
  strip.setPixelColor(7, strip.Color(255,0,255)); 
  strip.show(); 
  delay(velocidad); 
  
  strip.clear(); 
  strip.setPixelColor(8, strip.Color(255,0,128)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(9, strip.Color(128,255,0)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(10, strip.Color(0,128,255)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(11, strip.Color(255,255,255)); 
  strip.show(); 
  delay(velocidad); 

  
  strip.clear(); 
  strip.setPixelColor(11, strip.Color(255,0,0)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(10, strip.Color(0,255,0)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(9, strip.Color(0,0,255)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(8, strip.Color(255,255,0)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(7, strip.Color(0,255,255)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(6, strip.Color(255,0,255)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(5, strip.Color(255,128,0)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(4, strip.Color(128,0,255)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(3, strip.Color(0,128,255)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(2, strip.Color(128,255,0)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(1, strip.Color(255,0,128)); 
  strip.show(); 
  delay(velocidad);
  
  strip.clear(); 
  strip.setPixelColor(0, strip.Color(255,255,255)); 
  strip.show(); 
  delay(velocidad);

  delay(1000);
}

 
else if (efecto == 2) {

  uint32_t color1 = strip.Color(random(0,255), random(0,255), random(0,255));
  uint32_t color2 = strip.Color(random(0,255), random(0,255), random(0,255));

  
  strip.clear();
  strip.setPixelColor(0, color1);
  strip.setPixelColor(2, color1);
  strip.setPixelColor(4, color1);
  strip.setPixelColor(6, color1);
  strip.setPixelColor(8, color1);
  strip.setPixelColor(10, color1);
  strip.show();
  delay(velocidad);

  strip.clear();
  strip.show();
  delay(velocidad);

 
  strip.setPixelColor(1, color2);
  strip.setPixelColor(3, color2);
  strip.setPixelColor(5, color2);
  strip.setPixelColor(7, color2);
  strip.setPixelColor(9, color2);
  strip.setPixelColor(11, color2);
  strip.show();
  delay(velocidad);

  strip.clear();
  strip.show();
  delay(velocidad);

  delay(1000);
}
}
