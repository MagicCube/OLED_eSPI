#define HX8352C_DRIVER

#define TFT_CS   PIN_D8  // Chip select control pin D8
#define TFT_DC   PIN_D3  // Data Command control pin
#define TFT_RST  PIN_D4  // Reset pin (could connect to NodeMCU RST, see next line)
//#define TOUCH_CS PIN_D1     // Chip select pin (T_CS) of touch screen

// Define the SPI clock frequency, this affects the graphics rendering speed. Too
// fast and the TFT driver will not keep up and display corruption appears.
#define SPI_FREQUENCY  40000000 // Maximum to use SPIFFS

// The XPT2046 requires a lower SPI clock rate of 2.5MHz so we define that here:
#define SPI_TOUCH_FREQUENCY  2500000
