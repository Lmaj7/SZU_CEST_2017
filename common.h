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
#define TIMER0L 0x9A
#define TIMER0H 0xA9
//set to 1ms
#define TIMER1L 0x5C
#define TIMER1H 0xF7
//set to 100us


/*
=========================
sfr
=========================
*/
sfr AUXR=0x8E;

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

    
#endif
