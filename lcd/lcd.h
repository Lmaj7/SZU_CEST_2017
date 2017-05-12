#ifndef ___LCD_H
    #define ___LCD_H
    #include "../common.h"

/*
==============================
lcd.h
lcd.c
Lmaj7 2017-5-10

==============================
*/

void lcdSendData(char x);
void lcdSendCmd(char x);
void lcdSendArr(char x[]);

#endif
