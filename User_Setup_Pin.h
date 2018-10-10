// default SPI pins connection
#if !defined(EPD_DRIVER) && !defined(ESP32_PARALLEL)
  #ifdef ESP8266
    #ifndef TFT_CS
      #define TFT_CS   PIN_D8    // Chip select control pin D8
    #endif
    #ifndef TFT_DC
      #define TFT_DC   PIN_D3    // Data Command control pin
    #endif
    #ifndef TFT_RST
      #define TFT_RST  PIN_D4   // Reset pin
    #endif
  #else // ESP32
    #ifndef TFT_CS
      #define TFT_CS   5        // Chip select control pin D8
    #endif
    #ifndef TFT_DC
      #define TFT_DC   16       // Data Command control pin
    #endif
    #ifndef TFT_RST
      #define TFT_RST  17       // Reset pin
    #endif
  #endif
#endif

// These are the pins for all ESP8266 boards
//      Name   GPIO    Function
#define PIN_D0  16  // WAKE
#define PIN_D1   5  // User purpose
#define PIN_D2   4  // User purpose
#define PIN_D3   0  // Low on boot means enter FLASH mode
#define PIN_D4   2  // TXD1 (must be high on boot to go to UART0 FLASH mode)
#define PIN_D5  14  // HSCLK
#define PIN_D6  12  // HMISO
#define PIN_D7  13  // HMOSI  RXD2
#define PIN_D8  15  // HCS    TXD0 (must be low on boot to enter UART0 FLASH mode)
#define PIN_D9   3  //        RXD0
#define PIN_D10  1  //        TXD0

#define PIN_MOSI 8  // SD1
#define PIN_MISO 7  // SD0
#define PIN_SCLK 6  // CLK
#define PIN_HWCS 0  // D3

#define PIN_D11  9  // SD2
#define PIN_D12 10  // SD4
