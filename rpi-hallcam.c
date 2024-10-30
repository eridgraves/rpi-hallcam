// hallcam.ino
// Eric Graves
// Created 10/29/2024

// Camera and 7" epaper display. Take picture to display. LED turns on after 24 hours to indicate 
// a "stale" picture. 

#include "pico/stdlib.h"

#define DEBUG
#define BAUD_DEBUG 9600

#ifdef DEBUG
#define DEBUG_SO(...) Serial.println(__VA_ARGS__)
#else
#define DEBUG_SO(...)
#endif

// use button to wake, LED to display when sleeping
const uint PIN_BUT = 14; // rpi pico onboard button
const uint PIN_LED = 15; // rpi pico onboard LED

void setup() 
{
    #ifdef DEBUG
    Serial.begin(BAUD_DEBUG); 
    #endif

    gpio_init(PIN_BUT);
    gpio_set_dir(PIN_BUT, GPIO_IN);

    gpio_init(PIN_LED);
    gpio_set_dir(PIN_LED, GPIO_OUT);
}

void loop()
{
    DEBUG_SO("Hello world");
    // TODO: deep sleep

    // TODO: check for stale pic
    gpio_put(PIN_LED, 1);
}

// TODO: c?
// void main()
// {

// }