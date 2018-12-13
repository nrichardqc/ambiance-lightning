#include <FastLED.h>

#define NUM_LEDS 150
#define DATA_PIN 6
#define CLOCK_PIN 13

CRGB leds[NUM_LEDS];

void setup() { 
  pinMode(LED_BUILTIN, OUTPUT);
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() { 
  
  digitalWrite(LED_BUILTIN, HIGH);
  for (int i=0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(500);

  digitalWrite(LED_BUILTIN, LOW);
  for (int i=0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
  delay(500);
}
