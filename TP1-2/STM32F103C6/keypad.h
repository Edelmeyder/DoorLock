#ifndef __KEYBOARD_H
#define __KEYBOARD_H

#include <stm32f103x6.h>               // Device header

int Keyboard_Init(void);
char Keyboard_Update(char *pkey);
void delay_app(uint16_t time);

#endif
