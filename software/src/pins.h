#ifndef PINS_H
#define PINS_H

// vga output uses gpio pins 0,1,2,3,4,5,6,7,8
// dvi output uses gpio pins 12,13,14,15,16,17,18,19

#define PIN_BUZZER      28  // 9
#define PIN_PS2_DATA     1  //10
#define PIN_PS2_CLOCK    0  //11
#define PIN_DEFAULTS    14  //22
#define PIN_LED         25  //25
#define PIN_HDMI_DETECT 15  //28

#define PIN_UART_ID   uart0 //uart1
#define PIN_UART_TX   16    //20     // uart0: 0, 12, 16, 28  uart1: 4,  8, 20, 24
#define PIN_UART_RX   17    //21     // uart0: 1, 13, 17, 29  uart1: 5,  9, 21, 25
#define PIN_UART_CTS  18    //26     // uart0: 2, 14, 18      uart1: 6, 10, 22, 26
#define PIN_UART_RTS  19    //27     // uart0: 3, 15, 19      uart1: 7, 11  23, 27

#endif
