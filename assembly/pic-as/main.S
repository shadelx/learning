/*
 * Find the highest PORTC value read, storing this into the object max
 */
PROCESSOR 16F18446
#include <xc.inc>
CONFIG FEXTOSC = OFF // External Oscillator mode selection bits->Oscillator not enabled
CONFIG RSTOSC = HFINT1 // Power-up default value for COSC bits->HFINTOSC (1MHz)
CONFIG CLKOUTEN = OFF // Clock Out Enable->CLKOUT disabled; i/o or osc function on OSC2
CONFIG CSWEN = ON // Clock Switch Enable bit->Writing to NOSC and NDIV is allowed
CONFIG FCMEN = ON // Fail-Safe Clock Monitor Enable bit->FSCM timer enabled
CONFIG MCLRE = ON // Master Clear Enable bit->MCLR pin is Master Clear function
CONFIG PWRTS = OFF // Power-up Timer Enable bit->PWRT disabled
CONFIG LPBOREN = OFF // Low-Power BOR enable bit->ULPBOR disabled
CONFIG BOREN = ON // Brown-out reset enable->Brown-out Reset Enabled, SBOREN ignored
CONFIG BORV = LO // Brown-out Reset Voltage Selection->VBOR set to 2.45V
CONFIG ZCDDIS = OFF // Zero-cross detect disable->Zero-cross circuit disabled at POR
CONFIG PPS1WAY = ON // Peripheral Pin Select control->PPSLOCK cleared/set only once
CONFIG STVREN = ON // Stack Over/Underflow Reset Enable->Over/Underflow causes reset
CONFIG WDTCPS = WDTCPS_31 // WDT Period Select->Divider 1:65536; software control of WDTPS
CONFIG WDTE = OFF // WDT operating mode->WDT Disabled, SWDTEN is ignored
CONFIG WDTCWS = WDTCWS_7 // WDT Window Select->window always open (100%); software control
CONFIG WDTCCS = SC // WDT input clock selector->Software Control
CONFIG BBSIZE = BB512 // Boot Block Size Selection bits->512 words boot block size
CONFIG BBEN = OFF // Boot Block Enable bit->Boot Block disabled
CONFIG SAFEN = OFF // SAF Enable bit->SAF disabled
CONFIG WRTAPP = OFF // Application Block Write Protection->Not write protected
CONFIG WRTB = OFF // Boot Block Write Protection bit->Block not write protected
CONFIG WRTC = OFF // Configuration Register Write Protection->Not write protected
CONFIG WRTD = OFF // Data EEPROM write protection->Data EEPROM NOT write protected
CONFIG WRTSAF = OFF // Storage Area Flash Write Protection->SAF not write protected
CONFIG LVP = ON // Low Voltage Programming Enable->LV Programming enabled
CONFIG CP = OFF // UserNVM Program memory code protection->protection disabled
skipnc MACRO
 btfsc CARRY
ENDM
;objects in bank 0 memory
PSECT udata_bank0
max:
 DS 1 ;reserve 1 byte for max
tmp:
 DS 1 ;reserve 1 byte for tmp
PSECT resetVec,class=CODE,delta=2
resetVec:
 PAGESEL main ;jump to the main routine
 goto main
/* find the highest PORTA value read, storing this into
 the object max */
PSECT code
main:
 ;set up the oscillator
 movlw 0x62
 movlb 17
 movwf OSCCON1
 movlw 2
 movwf OSCFRQ
 PAGESEL loop ;ensure subsequent jumps are correct
 BANKSEL max ;starting point
 clrf BANKMASK(max)
 BANKSEL ANSELC
 clrf BANKMASK(ANSELC) ;select digital input for port C
loop:
 BANKSEL PORTC ;read and store port value
 movf BANKMASK(PORTC),w
 BANKSEL tmp
 movwf BANKMASK(tmp)
 subwf max^(tmp&0ff80h),w ;is this value larger than max?
 skipnc
 goto loop ;no - read again
 movf BANKMASK(tmp),w ;yes - record this new high value
 movwf BANKMASK(max)
 goto loop ;read again
 END resetVec 