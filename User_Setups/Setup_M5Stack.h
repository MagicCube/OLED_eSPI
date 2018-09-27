#define ILI9341_DRIVER

// For M5Stack ESP32 module with integrated display ONLY, remove // in line below
#define M5STACK

// For the M5Stack module use these #define lines
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   14  // Chip select control pin
#define TFT_DC   27  // Data Command control pin
#define TFT_RST  33  // Reset pin (could connect to Arduino RESET pin)
#define TFT_BL   32  // LED back-light

// Define the SPI clock frequency, this affects the graphics rendering speed. Too
// fast and the TFT driver will not keep up and display corruption appears.
#define SPI_FREQUENCY  27000000 // Actually sets it to 26.67MHz = 80/3

// The XPT2046 requires a lower SPI clock rate of 2.5MHz so we define that here:
#define SPI_TOUCH_FREQUENCY  2500000
