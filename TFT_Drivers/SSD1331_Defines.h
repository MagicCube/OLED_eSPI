// Change the width and height if required (defined in portrait mode)
// or use the constructor to over-ride defaults
#define TFT_WIDTH  96
#define TFT_HEIGHT 64

// Delay between some initialisation commands
#define TFT_INIT_DELAY 0x01 // Not used unless commandlist invoked

#define SSD1331_CMD_DRAWLINE 	    	0x21
#define SSD1331_CMD_DRAWRECT 	    	0x22
#define SSD1331_CMD_FILL 		      	0x26
#define SSD1331_CMD_SETCOLUMN 	  	0x15
#define SSD1331_CMD_SETROW    	  	0x75
#define SSD1331_CMD_CONTRASTA 	  	0x81
#define SSD1331_CMD_CONTRASTB   		0x82
#define SSD1331_CMD_CONTRASTC	    	0x83
#define SSD1331_CMD_MASTERCURRENT 	0x87
#define SSD1331_CMD_SETREMAP 	    	0xA0
#define SSD1331_CMD_STARTLINE   		0xA1
#define SSD1331_CMD_DISPLAYOFFSET 	0xA2
#define SSD1331_CMD_NORMALDISPLAY 	0xA4
#define SSD1331_CMD_DISPLAYALLON  	0xA5
#define SSD1331_CMD_DISPLAYALLOFF 	0xA6
#define SSD1331_CMD_INVERTDISPLAY 	0xA7
#define SSD1331_CMD_SETMULTIPLEX  	0xA8
#define SSD1331_CMD_SETMASTER 	  	0xAD
#define SSD1331_CMD_DISPLAYOFF 	  	0xAE
#define SSD1331_CMD_DISPLAYON     	0xAF
#define SSD1331_CMD_POWERMODE 	  	0xB0
#define SSD1331_CMD_PRECHARGE 	  	0xB1
#define SSD1331_CMD_CLOCKDIV 	    	0xB3
#define SSD1331_CMD_PRECHARGEA  		0x8A
#define SSD1331_CMD_PRECHARGEB  		0x8B
#define SSD1331_CMD_PRECHARGEC  		0x8C
#define SSD1331_CMD_PRECHARGELEVEL 	0xBB
#define SSD1331_CMD_VCOMH 	    		0xBE
