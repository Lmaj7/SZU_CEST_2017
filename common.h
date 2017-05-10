#ifndef ___COMMON_H
    #define ___COMMON_H
    #include<reg52.h>
    #include<intrins.h>
    

/*
=========================
   definitions
=========================
*/

//ports
#define P_LCD           P2

sbit    P_LCD_BKL     = P3^0;

//timers
#define TIMER0L 0x00
#define TIMER0H 0x00
#define TIMER1L 0x00
#define TIMER1H 0x00

/*
=========================
sfr
=========================
*/

/*
=========================
   vars
=========================
*/
unsigned char int fanCounter;


/*
=========================
   functions
=========================
*/
void lcdSendData(char x);
void lcdSendCmd(char x);
void lcdSendArr(char x[]);
    
#endif
