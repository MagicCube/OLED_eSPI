// This is the command sequence that initialises the SSD1331 driver
//
// This setup information uses simple 8 bit SPI writecommand() and writedata() functions
//
// See ST7735_Setup.h file for an alternative format

{
    // Initialization Sequence
    writecommand(SSD1331_CMD_DISPLAYOFF);   	// 0xAE
    writecommand(SSD1331_CMD_SETREMAP); 	    // 0xA0
    writecommand(0b01110010); // BGR Color
    writecommand(SSD1331_CMD_STARTLINE); 	    // 0xA1
    writecommand(0x0);
    writecommand(SSD1331_CMD_DISPLAYOFFSET); 	// 0xA2
    writecommand(0x0);
    writecommand(SSD1331_CMD_NORMALDISPLAY);  	// 0xA4
    writecommand(SSD1331_CMD_SETMULTIPLEX); 	// 0xA8
    writecommand(0x3F); // 0x3F 1/64 duty
    writecommand(SSD1331_CMD_SETMASTER);    	// 0xAD
    writecommand(0x8E);
    writecommand(SSD1331_CMD_POWERMODE);    	// 0xB0
    writecommand(0x0B);
    writecommand(SSD1331_CMD_PRECHARGE);    	// 0xB1
    writecommand(0x31);
    writecommand(SSD1331_CMD_CLOCKDIV);     	// 0xB3
    writecommand(0xF0); // 7:4 = Oscillator Frequency, 3:0 = CLK Div Ratio (A[3:0]+1 = 1..16)
    writecommand(SSD1331_CMD_PRECHARGEA);    	// 0x8A
    writecommand(0x64);
    writecommand(SSD1331_CMD_PRECHARGEB);    	// 0x8B
    writecommand(0x78);
    writecommand(SSD1331_CMD_PRECHARGEA);    	// 0x8C
    writecommand(0x64);
    writecommand(SSD1331_CMD_PRECHARGELEVEL);  	// 0xBB
    writecommand(0x3A);
    writecommand(SSD1331_CMD_VCOMH);  	    	// 0xBE
    writecommand(0x3E);
    writecommand(SSD1331_CMD_MASTERCURRENT);  	// 0x87
    writecommand(0x06);
    writecommand(SSD1331_CMD_CONTRASTA);  	    // 0x81
    writecommand(0x91);
    writecommand(SSD1331_CMD_CONTRASTB);    	// 0x82
    writecommand(0x50);
    writecommand(SSD1331_CMD_CONTRASTC);     	// 0x83
    writecommand(0x7D);
    writecommand(SSD1331_CMD_DISPLAYON); //--turn on oled panel   
}
