;------------------
; File: main.s
; Author: shadelx
; Device: PIC16F84A
; Description: Easy blink program on PORTB
; Hardware: lED on all PORTB
;-------------------
; libraries
; clock cycle, machine cycle, instruction cycle.
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
psect udata ; store on common memory, memory that is not located in any bank
 var1:
    ds 1 ; var1 one ram reserved location
 var2:
    ds 1
 var3:
    ds 1
 var4:
    ds 1
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

;main loop
loop:
    movlw 2
    movwf PORTB
    call delay_1s
    movlw 0
    movwf PORTB
    call delay_1s
    goto loop
     
;subroutines
test:
    movlw 3
    movwf var1
test_delay:
    decfsz var1, 1
    goto test_delay
    nop
    return
    
delay_500us:
    movlw 164
    movwf var1
    decfsz var1, 1
    goto $-1
    return
delay_100ms:
    movlw 200
    movwf var2
    call  delay_500us
    decfsz var2, 1
    goto $-2
    return

delay_500ms:
    movlw 5
    movwf var3
    call delay_100ms
    decfsz var3, 1
    goto $-2
    return
    
delay_1s:
    movlw 2
    movwf var4
    call delay_500ms
    decfsz var4, 1
    goto $-2
    return
    
END