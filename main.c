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

//initialize SPI
init_spi_master();
sleep_ms(500);

spi_mode(0);
sleep_ms(1000);


//loop dukie here
    while (1) {
        //test stdout       
        //for (uint8_t x = 0; x < 255; x++)
        //printf("x is: %d \n",x);
    READ_UART_BUFFER; 
    printf("%s\n",uart_buffer); 

    if (UART_READ("REBOOT"))
        {
        reset_usb_boot(0,0);
        } 

    
        
     }
return 0;
}
