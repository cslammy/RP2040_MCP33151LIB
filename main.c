#include "pico/stdlib.h"
#include <stdint.h>
#include <stdio.h>
#include "mcp33151.h"
#include "spiRP2040.h"
#include "UART.h"

uint8_t main() {

//main dukie here.

//next line needed if you want USB-minicom for debug
stdio_init_all();

//loop dukie here
    while (1) {
        //test stdout       
        //for (uint8_t x = 0; x < 255; x++)
        //printf("x is: %d \n",x);
     }
return 0;
}
