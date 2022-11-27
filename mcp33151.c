#include <stdio.h>
#include <stdint.h>
#include "spiRP2040.h"


uint16_t somedata = 0xFFFF; // can be anything 16 bits
uint16_t databack = 0;
uint16_t rawdataread = 0;  // result of initial read from MCP3201, before bitmoves


  uint16_t get_MCP33151()
   {

    rawdataread = SPI_TransferTxRx16_SingleCS(spi0, somedata);
    // use >> 1; for  14 bits 
    // use >> 3; for 12 bits etc.
    databack = rawdataread >> 3;
    return databack;
   }