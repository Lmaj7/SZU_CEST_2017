#include"interr.h"

void interrInit(void){
    TMOD=0x11;
    AUXR=AUXR|0xC0;//set timers to work under 1T mode
    TH0=TIMER0H;
    TL0=TIMER0L;
    TH1=TIMER1H;
    TL1=TIMER1L;
    ET0=1;
    ET1=1;
}

void interrRun(void){
    TR0=1;
    TR1=1;
}

void interrStop(void){
    TR1=0;
    TR0=0;
}
