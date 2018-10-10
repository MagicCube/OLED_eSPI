#define ILI9163_DRIVER

#define TFT_WIDTH  128
#define TFT_HEIGHT 128

// Define the SPI clock frequency, this affects the graphics rendering speed. Too
// fast and the TFT driver will not keep up and display corruption appears.
#define SPI_FREQUENCY  27000000 // Actually sets it to 26.67MHz = 80/3

// The XPT2046 requires a lower SPI clock rate of 2.5MHz so we define that here:
#define SPI_TOUCH_FREQUENCY  2500000
