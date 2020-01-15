#include <FastLED.h>

#define NUM_LEDS 100 //The amount of LEDs I want to control. 

#define DATA_PIN 5
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
      FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() { 
  // Turn the LED on, then pause
  leds[0] = CRGB::Red;
  FastLED.show();
  delay(500);
  // Now turn the LED off, then pause
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(500);
}
