// This is the command sequence that initialises the SSD1331 driver
//
// This setup information uses simple 8 bit SPI writecommand() and writedata() functions
//
// See ST7735_Setup.h file for an alternative format

{
    // Initialization Sequence
    writecommand(SSD1351_CMD_COMMANDLOCK); // set command lock
    writedata(0x12);
    writecommand(SSD1351_CMD_COMMANDLOCK); // set command lock
    writedata(0xB1);

    writecommand(SSD1351_CMD_DISPLAYOFF); // 0xAE

    writecommand(SSD1351_CMD_DISPLAYOFFSET); // 0xA2
    writedata(0x0);

    writecommand(SSD1351_CMD_NORMALDISPLAY); // 0xA6

    writecommand(SSD1351_CMD_DISPLAYON); //--turn on oled panel
}
