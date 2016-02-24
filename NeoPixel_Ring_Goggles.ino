// All the standard includes
#include <Adafruit_NeoPixel.h>

// All the conditional includes
#ifdef __AVR__
  #include <avr/power.h>
#endif

// All the constants
#define NEO_PIN 13
#define NUM_PIX 12
#define DELAY = 500

// Start the libraries
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_PIX, NEO_PIN, NEO_GRB + NEO_KHZ800);

// Setup for the bootstrap
void setup() 
{
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif

  // Start the NeoPixels
  pixels.begin();
}

// MCU loop
void loop() 
{
  // TODO: Fill the body with combination of old a new code  
}
