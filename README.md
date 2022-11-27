RP2040 Library for the MCP33151 14 bit ADC

You can get more information about this library from this blog post:
http://audiodiwhy.blogspot.com/2022/11/mcp33151-14-bit-adc-breakout-board.html

You can get a breakout board that hosts an MCP33151 and works with the UF2 for RP2040 here:
https://www.pcbway.com/project/shareproject/MCP33151_breakout_board_559d4e6f.html

I wanted to make an inexpensive 14 bit ADC subcircuit that would drop into a 14 pin DIP socket.

The code provides a simple library for data reads (mcp33151.c and .h)

main.c is used to test the ADC reads by looping a SPI 16 bit read from the IC and sending it out via serial

spiRP2040.h and .c are libraries for SPI reads and writes for the RP2040 MCU

UART.h and .c provides buffer to trap serial communication. 

uf2copy.sh is a shell script to copy the uf2 firmware to the RP2040. You will need to edit it for your own development setup or just manually copy the UF2 to your RP2040 dev board.

For CmakeLists.txt, it is set to use serial com for UART not USB.  You may want to switch the 0's to 1's if you are using USB for serial communication.




