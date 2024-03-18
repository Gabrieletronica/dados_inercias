/*
  SD card read/write

 This example shows how to read and write data to and from an SD card file
 The circuit:
 * SD card attached to SPI bus as follows:
 ** MOSI - pin 11
 ** MISO - pin 12
 ** CLK - pin 13
 ** CS - pin 4 (for MKRZero SD: SDCARD_SS_PIN)

 created   Nov 2010
 by David A. Mellis
 modified 9 Apr 2012
 by Tom Igoe

 This example code is in the public domain.

 */
#ifndef gravar_h
#define gravar_h

#include <SPI.h>
#include <SD.h>
#include "fila_.h"
File myFile;
ISR (PCINT2_vect)
{
    // Se o arquivo ainda não estiver aberto, então ele será aberto aqui.
    if(!myFile){
      myFile = SD.open("newtest.txt", FILE_WRITE);
    }
    if (myFile) {
      //Escreve 256 bytes de dados no cartão de memória
       myFile.write(fila,256);
    }
       
}
#endif gravar_h
