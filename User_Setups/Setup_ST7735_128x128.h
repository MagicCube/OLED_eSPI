#define ST7735_DRIVER

#define TFT_WIDTH  128
#define TFT_HEIGHT 128

// For ST7735 ONLY, define the type of display, originally this was based on the
// colour of the tab on the screen protector film but this is not always true, so try
// out the different options below if the screen does not display graphics correctly,
// e.g. colours wrong, mirror images, or tray pixels at the edges.
// Comment out ALL BUT ONE of these options for a ST7735 display driver, save this
// this User_Setup file, then rebuild and upload the sketch to the board again:

//#define ST7735_INITB
//#define ST7735_GREENTAB
//#define ST7735_GREENTAB2
//#define ST7735_GREENTAB3
#define ST7735_GREENTAB128 // For 128 x 128 display
//#define ST7735_REDTAB
//#define ST7735_BLACKTAB

#define TFT_CS   PIN_D8  // Chip select control pin D8
#define TFT_DC   PIN_D3  // Data Command control pin
#define TFT_RST  PIN_D4  // Reset pin (could connect to NodeMCU RST, see next line)

//#define TOUCH_CS PIN_D1     // Chip select pin (T_CS) of touch screen

// Define the SPI clock frequency, this affects the graphics rendering speed. Too
// fast and the TFT driver will not keep up and display corruption appears.
#define SPI_FREQUENCY  27000000 // Actually sets it to 26.67MHz = 80/3

// The XPT2046 requires a lower SPI clock rate of 2.5MHz so we define that here:
#define SPI_TOUCH_FREQUENCY  2500000
