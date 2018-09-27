#define EPD_DRIVER // ePaper driver

// READ THIS  READ THIS  READ THIS  READ THIS  READ THIS  READ THIS
// Install the ePaper library for your own display size and type
// from here:
// https://github.com/Bodmer/EPD_Libraries

//  Note: Pin allocations for the ePaper signals are defined in
//  the ePaper library's epdif.h file. There follows the default
//  pins already included in epdif.h file for the ESP8266:

///////////////////////////////////////////////////////////////////
//   For ESP8266 connect as follows:                             //
//   Display  3.3V to NodeMCU 3V3                                //
//   Display   GND to NodeMCU GND                                //
//                                                               //
//   Display   GPIO   NodeMCU pin                                //
//    BUSY       5      D1                                       //
//    RESET      4      D2                                       //
//    DC         0      D3                                       //
//    CS         2      D4                                       //
//    CLK       14      D5                                       //
//                      D6 (MISO not connected to display)       //
//    DIN       13      D7                                       //
//                                                               //
///////////////////////////////////////////////////////////////////
