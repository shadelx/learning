;------------------
; File: main.s
; Author: shadelx
; Device: PIC16F84A
; Description: Easy blink program on PORTB
; Hardware: lED on all PORTB
;-------------------
; libraries
PROCESSOR 16F84A
#include <xc.inc>

; Configuration Bit Settings
  CONFIG  FOSC = XT             ; Oscillator Selection bits (HS oscillator)
  CONFIG  WDTE = OFF            ; Watchdog Timer (WDT disabled)
  CONFIG  PWRTE = OFF           ; Power-up Timer Enable bit (Power-up Timer is disabled)
  CONFIG  CP = OFF              ; Code Protection bit (Code protection disabled)

;macros
bank0 macro
  bcf STATUS, 5
  endm
  
bank1 macro
  bsf STATUS, 5
  endm

;variables program section define where to store next lines 
psect udata_shr ; store on common memory, memory that is not located in any bank
 var1:
    ds 1 ; var1 one ram reserved location
    
;reset vector
psect resetVec,class=CODE,delta=2   ;delta=2 means 2bytes for opcode 14bits
  resetVec:
    PAGESEL	main
    goto	main
    
psect code  ;put code in code section memory
main:
    bank1
    clrf TRISB
    bank0
    clrf PORTA
    goto main
;main loop
loop:
    movlw 00000010B
    movwf var1
    decf var1,1s
    btfsc var1
    mov
    goto loop
     
;subroutines
 
END