// This header file contains a list of user setup files and defines which one the
// compiler uses when the IDE performs a Verify/Compile or Upload.
//
// Users can create configurations for different Espressif boards and TFT displays.
// This makes selecting between hardware setups easy by "uncommenting" one line.

// The advantage of this hardware configuration method is that the examples provided
// with the library should work with different setups immediately without any other
// changes being needed. It also improves the portability of users sketches to other
// hardware configurations and compatible libraries.
//
// Create a shortcut to this file on your desktop to permit quick access for editing.
// Re-compile and upload after making and saving any changes to this file.

// Customised User_Setup files are stored in the "User_Setups" folder.

#ifndef USER_SETUP_LOADED //  Lets PlatformIO users define settings in
                          //  platformio.ini, see notes in "Tools" folder.

// Only ONE line below should be uncommented.  Add extra lines and files as needed.

#include <User_Setup.h>           // Default setup is root library folder

// #include <User_Setups/Setup_ePaper.h>            // Setup file for any Waveshare ePaper display
// #include <User_Setups/Setup_HX8352C.h>           // Setup file for HX8352C
// #include <User_Setups/Setup_HX8357D.h>           // Setup file for HX8357D (untested)
// #include <User_Setups/Setup_ILI9163_128x128.h>   // Setup file for ILI9163 128x128 display
// #include <User_Setups/Setup_ILI9163.h>           // Setup file for ILI9163
// #include <User_Setups/Setup_ILI9225.h>           // Setup file for ILI9225
// #include <User_Setups/Setup_ILI9341_Parallel.h>  // Setup file for the ESP32 with parallel bus ILI9341
// #include <User_Setups/Setup_ILI9341.h>           // Setup file for ILI9341
// #include <User_Setups/Setup_ILI9481_Parallel.h>  // Setup file for the ESP32 with parallel bus ILI9481
// #include <User_Setups/Setup_ILI9486.h>           // Setup file for ILI9486
// #include <User_Setups/Setup_ILI9488_Parallel.h>  // Setup file for the ESP32 with parallel bus ILI9488
// #include <User_Setups/Setup_ILI9488.h>           // Setup file for ILI9488
// #include <User_Setups/Setup_M5Stack.h>           // Setup file for the ESP32 based M5Stack
// #include <User_Setups/Setup_RPi_ILI9486.h>       // Setup file for RPi TFT
// #include <User_Setups/Setup_RPi_touch_ILI9486.h> // Setup file for RPi TFT with touch
// #include <User_Setups/Setup_RPi_Wr_ILI9486.h>    // Setup file for modified RPi TFT
// #include <User_Setups/Setup_S6D02A1.h>           // Setup file for S6D02A1
// #include <User_Setups/Setup_SEPS525.h>           // Setup file for SEPS525
// #include <User_Setups/Setup_SSD1331.h>           // Setup file for SSD1331
// #include <User_Setups/Setup_SSD1351.h>           // Setup file for SSD1351
// #include <User_Setups/Setup_ST7735_128x128.h>    // Setup file for ST7735 128x128 display
// #include <User_Setups/Setup_ST7735.h>            // Setup file for ST7735
// #include <User_Setups/Setup_ST7789_240x240.h>    // Setup file for ST7789 240x240 display
// #include <User_Setups/Setup_ST7789.h>            // Setup file for ST7789
// #include <User_Setups/Setup_Template.h>


#endif // USER_SETUP_LOADED

#include <User_Setup_Pin.h>            // Setup file for pins connected
#include <User_Setup_Font.h>           // Setup file for fonts that are to be used

/////////////////////////////////////////////////////////////////////////////////////
//                                                                                 //
//     DON'T TINKER WITH ANY OF THE FOLLOWING LINES, THESE ADD THE TFT DRIVERS     //
//       AND ESP8266 PIN DEFINITONS THEY ARE HERE FOR BODMER'S CONVENIENCE!        //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////


// Load the right driver definition - do not tinker here !
#if   defined (ILI9341_DRIVER)
     #include <TFT_Drivers/ILI9341_Defines.h>
     #define  TFT_DRIVER 0x9341
#elif defined (ST7735_DRIVER)
     #include <TFT_Drivers/ST7735_Defines.h>
     #define  TFT_DRIVER 0x7735
#elif defined (ILI9163_DRIVER)
     #include <TFT_Drivers/ILI9163_Defines.h>
     #define  TFT_DRIVER 0x9163
#elif defined (S6D02A1_DRIVER)
     #include <TFT_Drivers/S6D02A1_Defines.h>
     #define  TFT_DRIVER 0x6D02
#elif defined (RPI_ILI9486_DRIVER)
     #include <TFT_Drivers/RPI_ILI9486_Defines.h>
     #define  TFT_DRIVER 0x9486
#elif defined (ILI9486_DRIVER)
     #include <TFT_Drivers/ILI9486_Defines.h>
     #define  TFT_DRIVER 0x9486
#elif defined (ILI9481_DRIVER)
     #include <TFT_Drivers/ILI9481_Defines.h>
     #define  TFT_DRIVER 0x9481
#elif defined (ILI9488_DRIVER)
     #include <TFT_Drivers/ILI9488_Defines.h>
     #define  TFT_DRIVER 0x9488
#elif defined (HX8357D_DRIVER)
     #include "TFT_Drivers/HX8357D_Defines.h"
     #define  TFT_DRIVER 0x8357
#elif defined (EPD_DRIVER)
     #include "TFT_Drivers/EPD_Defines.h"
     #define  TFT_DRIVER 0xE9D
#elif defined (ST7789_DRIVER)
     #include "TFT_Drivers/ST7789_Defines.h"
     #define  TFT_DRIVER 0x7789
#elif defined (ILI9225_DRIVER)
     #include "TFT_Drivers/ILI9225_Defines.h"
     #define  TFT_DRIVER 0x9225
#elif defined (HX8352C_DRIVER)
     #include "TFT_Drivers/HX8352C_Defines.h"
     #define  TFT_DRIVER 0x8352
#elif defined (SEPS525_DRIVER)
     #include "TFT_Drivers/SEPS525_Defines.h"
     #define  TFT_DRIVER 0x0525
#elif defined (SSD1331_DRIVER)
     #include "TFT_Drivers/SSD1331_Defines.h"
     #define  TFT_DRIVER 0x1331
#elif defined (SSD1351_DRIVER)
     #include "TFT_Drivers/SSD1351_Defines.h"
     #define  TFT_DRIVER 0x1351
#elif defined (XYZZY_DRIVER)  // <<<<<<<<<<<<<<<<<<<<<<<< ADD NEW DRIVER HERE
     #include "TFT_Drivers/XYZZY_Defines.h"
     #define  TFT_DRIVER 0x0000
#else
     #define  TFT_DRIVER 0x0000
#endif
