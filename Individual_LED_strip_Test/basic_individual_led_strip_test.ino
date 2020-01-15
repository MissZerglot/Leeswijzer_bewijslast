#include <FastLED.h>

#define LED_PIN     6
#define NUM_LEDS    25 /* Het totale nummer van LEDs dat ik wil gebruiken*/
#define BRIGHTNESS  15
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS)
;}

void loop () {

  leds[0] = CRGB(255, 0, 0); 
  FastLED.show(); 
  delay(500); 
  leds[1] = CRGB(0, 255, 0); 
  FastLED.show(); 
  delay(500); 
  leds[2] = CRGB(0, 0, 255); 
  FastLED.show(); 
  delay(500); 
  leds[3] = CRGB(150, 0, 255); 
  FastLED.show(); 
  delay(500); 
  leds[4] = CRGB(255, 200, 20); 
  FastLED.show(); 
  delay(500); 
  leds[5] = CRGB(255, 0, 0); 
  FastLED.show(); 
  delay(500); 
  leds[6] = CRGB(255, 200, 20); 
  FastLED.show(); 
  delay(500); 
  leds[7] = CRGB(150, 0, 255); 
  FastLED.show(); 
  delay(500); 
  leds[8] = CRGB(0, 0, 255); 
  FastLED.show(); 
  delay(500); 
  leds[9] = CRGB(0, 255, 0); 
  FastLED.show(); 
  delay(500); 
  leds[10] = CRGB(255, 0, 0); 
  FastLED.show(); 
  delay(500); 
}
