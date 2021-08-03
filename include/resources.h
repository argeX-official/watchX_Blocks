/*
 * Project: N|Watch
 * Author: Zak Kemble, contact@zakkemble.co.uk
 * Copyright: (C) 2013 by Zak Kemble
 * License: GNU GPL v3 (see License.txt)
 * Web: http://blog.zakkemble.co.uk/diy-digital-wristwatch/
 */

#ifndef RESOURCES_H
#define RESOURCES_H
#include <Arduino.h>

#include "english.h"


 #define SMALLFONT_WIDTH 5
 #define SMALLFONT_HEIGHT 8
 //extern const char smallFont[][5];

 #define MIDFONT_WIDTH 19
 #define MIDFONT_HEIGHT 24
// extern const byte midFont[][57];

 #define SEGFONT_WIDTH 19
 #define SEGFONT_HEIGHT 24
// extern const byte segFont[][57];

 #define FONT_SMALL2_WIDTH 11
 #define FONT_SMALL2_HEIGHT 16

const char watchXui[] PROGMEM ={ ////small icons
0xFF,0x81,0xBD,0x81,0x81,0x81,0x81,0x81,
0x81,0x81,0x81,0x81,0x81,0x81,0xFF,0x3C,
0xFF,0x81,0xBD,0xBD,0xBD,0xBD,0x81,0x81,
0x81,0x81,0x81,0x81,0x81,0x81,0xFF,0x3C,
0xFF,0x81,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,
0xBD,0xBD,0x81,0x81,0x81,0x81,0xFF,0x3C,
0xFF,0x81,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,
0xBD,0xBD,0xBD,0xBD,0xBD,0x81,0xFF,0x3C,
0x00,0x10,0x18,0x9C,0x72,0x30,0x10,0x00,
0x3C,0x42,0x81,0x9D,0xA1,0x81,0x42,0x3C,
0x10,0x38,0x7C,0x38,0x10,0x10,0x18,0x14,
0x34,0x56,0x56,0xD0,0xD0,0x10,0x38,0x10,
0x1F,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x1F,0x00,0x00,0x00,0x00,
0xF8,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0xF8,0x00,0x00,0x00,0x00,
0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00,
0x00, 0xC3, 0xC3, 0xC3, 0xC3, 0x00,
0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x00

};


/*
 const uint16_t allNotes[]PROGMEM  = {
   392, 350,
   NOTE_REST,20,
   392,350,
   NOTE_REST,20,
   392, 350,
   NOTE_REST,20,
   311, 250,
   NOTE_REST,20,
   466,100,
   NOTE_REST,20,
   392,350,
   NOTE_REST,20,
   311,250,
   NOTE_REST,20,
   466,100,
   NOTE_REST,20,
   392, 700,
   NOTE_REST,420,
   587, 350,
   NOTE_REST,20,
   587,350,
   NOTE_REST,20,
   587,350,
   NOTE_REST,20,
   622, 250,
   NOTE_REST,20,
   466, 100,
   NOTE_REST,20,
   369, 350,
   NOTE_REST,20,
   311,  250,
   NOTE_REST,20,
   466, 100,
   NOTE_REST,20,
   392,  700,
   NOTE_REST,420,
   784,   350,
   NOTE_REST,20,
   392, 250,
   NOTE_REST,20,
   392, 100,
   NOTE_REST,20,
   784,   350,
   NOTE_REST,20,
   739,250,
   NOTE_REST,20,
   698,100,
   NOTE_REST,20,
   659,100,
   NOTE_REST,20,
   622, 100,
   NOTE_REST,20,
   659,  200,
   NOTE_REST,320,
   415, 100,
   NOTE_REST,20,
   554, 350,
   NOTE_REST,20,
   523,250,
   NOTE_REST,20,
   493, 100,
   NOTE_REST,20,
   466,100,
   NOTE_REST,20,
   440, 100,
   NOTE_REST,20,
   466, 200,
   NOTE_REST,20,
   311, 100,
   NOTE_REST,20,
   369,350,
   NOTE_REST,20,
   311, 250,
   NOTE_REST,20,
   466, 100,
   NOTE_REST,20,
   392, 750,
   NOTE_REST, 410  ,
   TONES_END
 };
 */
const byte  COLON[] PROGMEM={0B11100111};

 const char small2Font[] PROGMEM={

    0xFE,0xFF,0xFF,0x0F,0x07,0x07,0x07,0x0F,0xFF,0xFF,0xFE,
    0x7F,0xFF,0xFF,0xF0,0xE0,0xE0,0xE0,0xF0,0xFF,0xFF,0x7F,

    0x00,0x00,0x18,0x1C,0x1E,0xFF,0xFF,0xFF,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,

    0x1E,0x1F,0x1F,0x07,0x07,0x87,0xC7,0xE7,0xFF,0x7F,0x3E,
    0xF0,0xF8,0xFC,0xFE,0xEF,0xE7,0xE3,0xE1,0xE0,0xE0,0xE0,

    0x0E,0x0F,0x0F,0x07,0x07,0x87,0xC7,0xEF,0xFF,0x7F,0x3E,
    0x70,0xF0,0xF0,0xE0,0xE0,0xE1,0xE3,0xF7,0xFF,0xFE,0x7C,

    0xC0,0xE0,0xF0,0x78,0x3C,0x1E,0xFF,0xFF,0xFF,0x00,0x00,
    0x1F,0x1F,0x1F,0x1C,0x1C,0x1C,0xFF,0xFF,0xFF,0x1C,0x1C,

    0xFF,0xFF,0xFF,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0x87,0x07,
    0x71,0xF1,0xF1,0xE1,0xE1,0xE1,0xE1,0xF3,0xFF,0x7F,0x3F,

    0xFE,0xFF,0xFF,0x8F,0x87,0x87,0x87,0x87,0x8F,0x8F,0x0E,
    0x7F,0xFF,0xFF,0xE3,0xE3,0xE3,0xE3,0xE3,0xFF,0xFF,0x7F,

    0x0F,0x0F,0x0F,0x07,0x07,0x07,0x87,0xC7,0xFF,0xFF,0x7F,
    0xE0,0xF0,0x78,0x3C,0x1E,0x0F,0x07,0x03,0x01,0x00,0x00,

    0x7E,0xFF,0xFF,0xC7,0x87,0x87,0x87,0xC7,0xFF,0xFF,0x7E,
    0x7E,0xFF,0xFF,0xE3,0xE1,0xE1,0xE1,0xE3,0xFF,0xFF,0x7E,

    0xFE,0xFF,0xFF,0xC7,0xC7,0xC7,0xC7,0xC7,0xFF,0xFF,0xFE,
    0x78,0xF9,0xF9,0xE1,0xE1,0xE1,0xE1,0xE1,0xFF,0xFF,0x7F

};



const byte menus_bits[] PROGMEM ={
0x00,0x00,0x00,0x70,0x78,0x3C,0x9E,0xCE,0x6F,0x67,0x37,0x33,0x1A,0x18,0x18,0xF8,0xD8,0x18,0x18,0x1A,0x33,0x37,0x67,0x6F,0xCE,0x9E,0x3C,0x78,0x70,0x00,0x00,0x00,
0x00,0x00,0xF0,0x7C,0x0E,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x0E,0x7C,0xF0,0x00,0x00,
0x00,0x07,0x7F,0xF2,0x82,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0xF2,0x7F,0x07,0x00,
0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x18,0x30,0x30,0x60,0x60,0xC0,0xC0,0xC0,0xF0,0xC0,0xC0,0xC0,0xC0,0x60,0x60,0x30,0x30,0x18,0x0C,0x06,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0xF8,0xFC,0xFC,0x7C,0x7C,0x3C,0xBC,0x9E,0xDE,0xDE,0xDE,0xDE,0xDE,0xFE,0xBC,0x3C,0xF8,0xF8,0xF0,0xF0,0xE0,0xC0,0x00,0x00,0x00,0x00,
0x00,0xE0,0xFF,0xFF,0xFF,0x7F,0x7F,0x7D,0x00,0x30,0xF8,0xF8,0xF1,0xF1,0xE3,0xC3,0xE7,0xFF,0xFF,0x7F,0x7F,0x7F,0x7F,0x7F,0x03,0x03,0x1F,0xFF,0xFF,0xFE,0xF0,0x00,
0x00,0x07,0x3F,0xFF,0xFF,0xF8,0xE0,0xC0,0xE0,0xF0,0xF9,0x7F,0x3F,0x1F,0x0F,0x0F,0xF3,0xFD,0xFC,0x78,0x60,0x01,0x07,0x1F,0x9F,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x1F,0x1F,0x3C,0x3C,0x3C,0x78,0x78,0x78,0x7F,0x7F,0x7F,0x7F,0x7F,0x7E,0x7E,0x7F,0x7F,0x7F,0x3F,0x1F,0x0F,0x07,0x03,0x00,
0x00,0x00,0x80,0xE0,0xF0,0xF8,0x38,0x3C,0x3C,0x7C,0x7C,0x38,0x98,0x90,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x1F,0x3F,0x7C,0x7C,0x7C,0x00,0x30,0xF8,0xF8,0xF1,0xF1,0xE3,0xC3,0x87,0x0F,0x1F,0x3F,0x7F,0x7F,0x7E,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x0F,0x0F,0xF3,0xFD,0xFC,0x78,0x60,0x01,0x07,0x1F,0x1F,0xDF,0xFF,0xFE,0xFC,0xF8,0xF0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x1F,0x3F,0x7F,0x7E,0x7E,0x7C,0x7C,0x7F,0x3F,0x1F,0x0F,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0xF8,0x38,0x1C,0x1C,0x1C,0x1C,0x38,0xF8,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x1F,0x1C,0x38,0x38,0x38,0x38,0x1C,0x1F,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0xF8,0x38,0x1C,0x1C,0x1C,0x1C,0x38,0xF8,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0x03,0x0F,0x1F,0x1C,0x38,0x38,0x38,0x38,0x1C,0x1F,0x0F,0x03,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x60,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x60,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0xC0,0xF0,0xF8,0x38,0x1C,0x1C,0x1C,0x1C,0x38,0xF8,0xF0,0xC0,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0x03,0x0F,0x1F,0x1C,0x38,0x38,0x38,0x38,0x1C,0x1F,0x0F,0x03,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x60,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x60,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x81,0x03,0x03,0xC0,0xF0,0xF8,0x38,0x1C,0x1C,0x1C,0x1C,0x38,0xF8,0xF0,0xC0,0x03,0x03,0x81,0x80,0x80,0x80,0x80,0x80,0x80,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x81,0xC0,0xC0,0x03,0x0F,0x1F,0x1C,0x38,0x38,0x38,0x38,0x1C,0x1F,0x0F,0x03,0xC0,0xC0,0x81,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x00,0x00,0x00,0x00,0x00,
0x00,0xFC,0xFE,0xFE,0xFE,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0xFE,0xFE,0xFE,0xFC,0x00,0xFC,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFC,0x00,
0x00,0x3F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x3F,0x00,0xFF,0xFF,0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xFF,0xFF,0xFF,0x00,
0x00,0xFE,0xFF,0xFF,0x7F,0x7F,0x7F,0x7F,0x07,0x7F,0x7F,0x7F,0x7F,0xFF,0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFF,0xFF,0xFF,0x00,
0x00,0x3F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x70,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x3F,0x00,0x3F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0xF8,0xFC,0xFC,0xFC,0x3E,0x1E,0x1E,0x1E,0x1E,0x1E,0x3E,0x7C,0xFC,0xFC,0xF8,0xF0,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0xFF,0xFF,0xFF,0x7F,0x3F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7E,0x7F,0x7F,0x7F,0x7F,0x0F,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0xFC,0x3F,0x01,0x3F,0xFE,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x07,0xFF,0xE0,0x80,0xF8,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0F,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,
0x00,0xFF,0xFF,0x00,0x7E,0x1E,0x0E,0x06,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x00,0xFF,0xFF,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,
0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x81,0x8F,0x8F,0x80,0x80,0x8C,0x9C,0xB8,0xF0,0xE0,0xC0,0x80,0x00,
0x00,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x81,0xF1,0xF1,0x01,0x01,0x31,0x39,0x1D,0x0F,0x07,0x03,0x01,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0xE0,0xF8,0x9C,0x9F,0x07,0x07,0x9F,0x9F,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0x9F,0x9F,0x67,0x67,0x9F,0x9C,0xF8,0xE0,0x00,
0xF8,0xFF,0xFF,0xFF,0xFF,0xFE,0x7E,0x3F,0x1F,0x31,0x24,0x24,0x31,0x1F,0x0F,0x0F,0x0F,0x0F,0x1F,0x31,0x24,0x24,0x31,0x1F,0x3F,0x7E,0xFE,0xFF,0xFF,0xFF,0xFF,0xF8,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xCF,0x8F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x04,0x0C,0x1C,0x3C,0x7C,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC1,0xC3,0xC7,0xCF,0xDF,0xFF,0xC0,0x80,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF8,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF0,0xF8,0x78,0x78,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x78,0x78,0xF8,0xF0,0xF0,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x0C,0x1C,0x7C,0xFC,0xFE,0xFF,0xFF,0xFF,0x7F,0x3C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x3C,0xFE,0xFF,0xFF,0xFF,0x7F,0x3F,0x3E,0x3C,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x0F,0x0F,0x1F,0x1E,0x1E,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x1E,0x1E,0x1F,0x0F,0x0F,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x40,0xE0,0xF0,0xE0,0xE0,0xC0,0x80,0xC0,0xC0,0xE0,0xFE,0xFE,0xFE,0xFE,0xE0,0xC0,0xC0,0x80,0xC0,0xE0,0xE0,0xF0,0xE0,0x40,0x00,0x00,0x00,0x00,
0x00,0xC0,0xC0,0xC0,0xC0,0xE1,0xFB,0xFF,0x1F,0x07,0xE3,0xF1,0xF9,0x7C,0x3C,0x1C,0x1C,0x3C,0x7C,0xF9,0xF1,0xE3,0x07,0x1F,0xFF,0xFB,0xE1,0xC0,0xC0,0xC0,0xC0,0x00,
0x00,0x03,0x03,0x03,0x03,0x87,0xDF,0xFF,0xF8,0xE0,0xC7,0x8F,0x9F,0x3E,0x3C,0x38,0x38,0x3C,0x3E,0x9F,0x8F,0xC7,0xE0,0xF8,0xFF,0xDF,0x87,0x03,0x03,0x03,0x03,0x00,
0x00,0x00,0x00,0x00,0x02,0x07,0x0F,0x07,0x07,0x03,0x01,0x03,0x03,0x07,0x7F,0x7F,0x7F,0x7F,0x07,0x03,0x03,0x01,0x03,0x07,0x07,0x0F,0x07,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x84,0xE4,0x74,0x1C,0x0C,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x83,0xC3,0xF3,0x3B,0x1F,0x07,0x03,0x00,0x00,0x03,0x03,0x02,0x02,0x02,0x02,0x00,0x00,
0x00,0x00,0x07,0x07,0x87,0xC7,0xE7,0xF7,0x7F,0x3F,0x1F,0x0F,0x00,0x00,0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x3C,0x3E,0x3F,0x3F,0x3B,0x39,0x38,0x38,0x38,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x30,0x30,0x18,0x18,0x08,0xCC,0xCC,0x08,0x18,0x18,0x30,0x30,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xC3,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x30,0x60,0xC0,0x80,0x00,0x00,0x83,0xFF,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x0C,0x0C,0x18,0x10,0x10,0x30,0x30,0x10,0x10,0x18,0x0D,0x0C,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x70,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x00,0xF0,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFC,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x3C,0xF8,0xC1,0x07,0x1F,0xFC,0xF0,0x03,0x1F,0xFE,0xF0,0x00,0x00,
0x00,0x0F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x3C,0x1F,0x83,0xE0,0xF8,0x3F,0x0F,0xC0,0xF8,0x7F,0x0F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x60,0xF0,0xF8,0xF8,0xF0,0xE0,0x60,0x60,0xB0,0x30,0x18,0x18,0x18,0xF8,0xD8,0x18,0x18,0x18,0x30,0xB0,0x60,0x60,0xE0,0xF0,0xF8,0xF8,0xF0,0x60,0x00,0x00,
0x00,0x00,0xF0,0x7C,0x0F,0x13,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x13,0x0F,0x7C,0xF0,0x00,0x00,
0x00,0x07,0x7F,0xF2,0x82,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x0E,0x1C,0x38,0x70,0xE0,0xC0,0x80,0x00,0x00,0x40,0x82,0xF2,0x7F,0x07,0x00,
0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x18,0x30,0x30,0x68,0x60,0xC0,0xC0,0xC0,0xF0,0xC0,0xC0,0xC0,0xC0,0x60,0x68,0x31,0x31,0x18,0x0C,0x06,0x03,0x01,0x00,0x00,0x00,
0x00,0x80,0xC0,0xC0,0x00,0x00,0xF8,0xF8,0xC0,0x00,0x00,0xF8,0xF8,0xC0,0xC0,0x00,0x00,0xF8,0xF8,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0x3F,0x3E,0x3F,0x3F,0x3F,0xBF,0xBF,0xBE,0x3F,0xBF,0xBF,0xBF,0xBE,0xBE,0xFF,0xFF,0xFF,0x7F,0x7F,0x3F,0xB8,0x30,0x70,0x70,0xF0,0xE0,0xC0,0x80,0x00,
0xFF,0xFF,0xFF,0x80,0x6C,0x6C,0x6C,0x00,0x6D,0x6D,0x6D,0x00,0x6D,0x6D,0x6D,0xFF,0xFF,0xF7,0x89,0x00,0x02,0x06,0x1C,0x78,0x00,0x00,0x00,0x08,0xC3,0xFF,0xFF,0x3E,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x07,0x0F,0x0E,0x0E,0x0E,0x0F,0x0E,0x0E,0x0E,0x07,0x07,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x7C,0x70,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x01,0x07,0x1F,0xFC,0x20,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0xC0,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x7E,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x3F,0x1F,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x3F,0x31,0x3D,0x3D,0x31,0x3F,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x7E,0x62,0x7A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x7A,0x62,0x7E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x3F,0x31,0x3D,0x3D,0x31,0x3F,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x78,0xFC,0xC4,0xF4,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0xF4,0xC4,0xFC,0x78,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x7E,0x62,0x7A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x7A,0x62,0x7E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x3F,0x31,0x3D,0x3D,0x31,0x3F,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF0,0xF8,0x88,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0x88,0xF8,0xF0,0x00,
0x00,0x00,0x01,0x01,0x78,0xFC,0xC4,0xF4,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0xF4,0xC4,0xFC,0x78,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x7E,0x62,0x7A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x7A,0x62,0x7E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x3F,0x31,0x3D,0x3D,0x31,0x3F,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xE0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF8,0xF8,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0x00,0xB0,0x90,0x98,0x88,
0x03,0x07,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x00,0x0D,0x09,0x19,0x11,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};


const byte dow_bits[] PROGMEM ={
0x0F,0x01,0x02,0x01,0x6F,0x90,0x90,0x60,
0x01,0x1F,0x01,0x00,0x78,0x80,0x80,0x78,
0x0F,0x04,0x02,0x04,0x0F,0xF8,0xA8,0xA8,
0x01,0x1F,0x01,0x00,0xF8,0x20,0x20,0xF8,
0x1F,0x05,0x05,0x00,0xF8,0x28,0x68,0x90,
0x12,0x15,0x09,0x00,0xF0,0x28,0x28,0xF0,
0x12,0x15,0x09,0x00,0x78,0x80,0x80,0x78,
};


// 5x8
const char smallFont[] PROGMEM ={
CHARACTER_SET
};
const char font_mid[] PROGMEM ={
  //0x00,0x13,0x18,0x30,
    0xFE,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,
    0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
    0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F,

    0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x3C,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,

    0x00,0xFE,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,
    0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0xFC,0x7E,0x3F,0x1F,0x0F,0x07,0x03,0x01,
    0xE0,0xF0,0xF8,0xFC,0xFE,0xFF,0xFF,0xFF,0xF7,0xF3,0xF1,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,

    0xFE,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x1C,0x1C,0x3E,0x3E,0x7E,0x7F,0xF7,0xF7,0xF7,0xE3,0xE3,
    0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F,

    0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0xFC,0xFF,0x7F,0x1F,0x0F,0x03,0x01,0x00,0x00,0x00,0x00,
    0x80,0xC0,0xF0,0xFC,0xFE,0xFF,0x3F,0x0F,0x03,0x01,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,

    0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x1F,0x1F,0x1F,0x1F,0x1F,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0xFE,0xFE,0xFE,0xFE,0xFC,
    0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F,

    0xFE,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x7F,0x7F,0x7F,0x7F,0x7E,
    0xFF,0xFF,0xFF,0xFF,0xFF,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0xFC,0xFC,0xFC,0xFC,0xF8,
    0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F,

    0x7F,0x7F,0x7F,0x7F,0x7F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xCF,0xFF,0xFF,0xFF,0xFF,0x1F,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF0,0xFC,0xFF,0xFF,0x3F,0x0F,0x03,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0xFE,0xFF,0xFF,0x1F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,

    0xFE,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,
    0xC3,0xE7,0xE7,0xF7,0xFF,0x7E,0x3E,0x3E,0x3C,0x1C,0x3C,0x3E,0x3E,0x7E,0xFF,0xF7,0xE7,0xE7,0xC3,
    0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F,

    0xFE,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,
    0x1F,0x3F,0x3F,0x3F,0x3F,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0xFF,0xFF,0xFF,0xFF,0xFF,
    0x7E,0xFE,0xFE,0xFE,0xFE,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F
  };



#endif /* RESOURCES_H_ */
