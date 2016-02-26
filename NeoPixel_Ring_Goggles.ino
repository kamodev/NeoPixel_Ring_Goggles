// All the standard includes
#include <Adafruit_NeoPixel.h>

// All the conditional includes
#ifdef __AVR__
  #include <avr/power.h>
#endif

// All the constants
#if defined (__AVR_ATtiny85__)
  #define NEO_PIN 1
#else
  #define NEO_PIN 13
#endif

#define NUM_PIX 12
#define DELAY = 500

// Start the libraries
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_PIX, NEO_PIN, NEO_GRB + NEO_KHZ800);

// Part of the old code
uint8_t  mode   = 0; // Current animation effect
uint8_t  offset = 0; // Position of spinny eyes
uint32_t color  = 0xFF0000; // Start red
uint32_t prevTime;

// Setup for the bootstrap
void setup() 
{
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif

  // Start the NeoPixels
  pixels.begin();

  //  Set the brightness to 1/3
  pixels.setBrightness(85);
}

// MCU loop
void loop()
{
  // TODO: Fill the body with combination of old a new code

//  uint8_t  i;
//  uint32_t currTime;

//  switch(mode) 
//  {
//
//   case 0: // Random sparks - just one LED on at a time!
// 
//   case 1: // Spinny wheels (8 LEDs on at a time)
//    for(i=0; i<16; i++) 
//    {
//      uint32_t c = 0;
//      if(((offset + i) & 7) < 2) c = color; // 4 pixels on...
//      pixels.setPixelColor(   i, c); // First eye
//      pixels.setPixelColor(31-i, c); // Second eye (flipped)
//    }
//    pixels.show();
//    offset++;
//    delay(50);
//    break;
//  }

//  currTime = millis();
//  
//  if((currTime - prevTime) > 8000) 
//  {                                // Every 8 seconds...
//    mode++;                        // Next mode
//    if(mode > 1) 
//    {                              // End of modes?
//      mode = 0;                    // Start modes over
//      color >>= 8;                 // Next color R->G->B
//      
//      if(!color) 
//      {
//        color = 0xFF0000;          // Reset to red
//      }
//    }
//    for(i=0; i<32; i++) pixels.setPixelColor(i, 0);
//    prevTime = currTime;
//  }

}

// Rainbow effect on the rings
void rainbow()
{
  // TODO: Add in the code for the rainbow  
}

// Random Sparks
void randomSparks()
{
  rand_pin = random(32);
  pixels.setPixelColor(rand_pin, color);
  pixels.show();
  delay(10);
  pixels.setPixelColor(rand_pin, 0);  
}

// TODO: More of the patterns


