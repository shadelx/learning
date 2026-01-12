// CONFIG1
#pragma config FOSC = ECH // External Clock, 4-20 MHz
#pragma config WDTE = OFF // Watchdog Timer (WDT) disabled
#pragma config PWRTE = OFF // Power-up Timer disabled
#pragma config MCLRE = ON // MCLR/VPP pin function is MCLR
#pragma config CP = OFF // Flash Memory Code Protection off
#pragma config BOREN = ON // Brown-out Reset enabled
#pragma config CLKOUTEN = OFF // Clock Out disabled.
#pragma config IESO = ON // Internal/External Switchover on
#pragma config FCMEN = ON // Fail-Safe Clock Monitor enabled
// CONFIG2
#pragma config WRT = OFF // Flash Memory Self-Write Protect off
#pragma config PPS1WAY = ON // PPS one-way control enabled
#pragma config ZCDDIS = ON // Zero-cross detect disabled
#pragma config PLLEN = OFF // Phase Lock Loop disable
#pragma config STVREN = ON // Stack Over/Underflow Reset enabled
#pragma config BORV = LO // Brown-out Reset low trip point
#pragma config LPBOR = OFF // Low-Power Brown Out Reset disabled
#pragma config LVP = OFF // Low-Voltage Programming disabled

#include <xc.h>
#include <stdint.h>

void main(void){
  uint8_t portValue = 0x05;

  ANSELB = 0x0;
  TRISB = 0x0;
  LATB = portValue;

  ANSELD = 0x0;
  TRISD = 0x0;
  LATD = portValue;
}
