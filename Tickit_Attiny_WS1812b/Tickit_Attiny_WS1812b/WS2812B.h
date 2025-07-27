
#ifndef WS2812B_H_
#define WS2812B_H_

#include <avr/io.h>

#define mPin 7 
#define  mMask (1<<mPin)
#define mPort PORTA 
#define WsInit mPort.DIR = PIN7_bm; // PINxCTRL; x = mPin

#define ClearOutBit    mPort.OUTCLR |= (1<<mPin)  
#define SetOutBit      mPort.OUTSET |= (1<<mPin)    

void WsSendByte(int hex); // ?
void WsSendPixel(int R, int G, int B); 
void WsClear(int a); 

#endif /* WS2812B_H_ */