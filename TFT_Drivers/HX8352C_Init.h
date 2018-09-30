
// This is the command sequence that initialises the HX8352C driver
//
// This setup information uses simple 8 bit SPI writecommand() and writedata() functions
//

// Configure HX8352C display

//LCD Init For 3.0inch LCD Panel with HX8352.	
//Power Voltage Setting
writecommand(0x1A);  writedata(0x02); //BT
writecommand(0x1B);  writedata(0x8B); //VRH
//****VCOM offset**///
writecommand(0x23);  writedata(0x00); //SEL_VCM
writecommand(0x24);  writedata(0x5D); //VCM
writecommand(0x25);  writedata(0x15); //VDV
writecommand(0x2D);  writedata(0x01); //NOW[2:0]=001
//****OPON**//
writecommand(0xE8);  writedata(0x60);
//Power on Setting
writecommand(0x18);  writedata(0x04); //Frame rate 72Hz
writecommand(0x19);  writedata(0x01); //OSC_EN='1', start Osc
writecommand(0x01);  writedata(0x00); //DP_STB='0', out deep sleep
writecommand(0x1F);  writedata(0x88); //STB=0
delay(5);
writecommand(0x1F);  writedata(0x80); //DK=0
delay(5);
writecommand(0x1F);  writedata(0x90); //PON=1
delay(5);
writecommand(0x1F);  writedata(0xD0); //VCOMG=1
delay(5);

//262k/65k color selection
writecommand(0x17);  writedata(0x05); //default 0x06 262k color // 0x05 65k color
//SET PANEL
writecommand(0x29);  writedata(0x31); //400 lines
writecommand(0x71);  writedata(0x1A); //RTN
//Gamma 2.2 Setting
writecommand(0x40);  writedata(0x00);
writecommand(0x41);  writedata(0x77);
writecommand(0x42);  writedata(0x77);
writecommand(0x43);  writedata(0x00);
writecommand(0x44);  writedata(0x04);
writecommand(0x45);  writedata(0x00);
writecommand(0x46);  writedata(0x00);
writecommand(0x47);  writedata(0x00);
writecommand(0x48);  writedata(0x77);
writecommand(0x49);  writedata(0x00);
writecommand(0x4A);  writedata(0x00);
writecommand(0x4B);  writedata(0x08);
writecommand(0x4C);  writedata(0x00);
writecommand(0x4D);  writedata(0x00);
writecommand(0x4E);  writedata(0x00);
//Set DGC
writecommand(0xFF);  writedata(0x01); //Page1
writecommand(0x00);  writedata(0x01); //DGC_EN
writecommand(0x01);  writedata(0x00);
writecommand(0x02);  writedata(0x06);
writecommand(0x03);  writedata(0x0C);
writecommand(0x04);  writedata(0x12);
writecommand(0x05);  writedata(0x16);
writecommand(0x06);  writedata(0x1C);
writecommand(0x07);  writedata(0x23);
writecommand(0x08);  writedata(0x2E);
writecommand(0x09);  writedata(0x36);
writecommand(0x0A);  writedata(0x3F);
writecommand(0x0B);  writedata(0x47);
writecommand(0x0C);  writedata(0x50);
writecommand(0x0D);  writedata(0x57);
writecommand(0x0E);  writedata(0x5F);
writecommand(0x0F);  writedata(0x67);
writecommand(0x10);  writedata(0x6F);
writecommand(0x11);  writedata(0x76);
writecommand(0x12);  writedata(0x7F);
writecommand(0x13);  writedata(0x87);
writecommand(0x14);  writedata(0x90);
writecommand(0x15);  writedata(0x99);
writecommand(0x16);  writedata(0xA3);
writecommand(0x17);  writedata(0xAD);
writecommand(0x18);  writedata(0xB4);
writecommand(0x19);  writedata(0xBB);
writecommand(0x1A);  writedata(0xC4);
writecommand(0x1B);  writedata(0xCE);
writecommand(0x1C);  writedata(0xD9);
writecommand(0x1D);  writedata(0xE3);
writecommand(0x1E);  writedata(0xEC);
writecommand(0x1F);  writedata(0xF3);
writecommand(0x20);  writedata(0xF7);
writecommand(0x21);  writedata(0xFC);
writecommand(0x22);  writedata(0x00);
writecommand(0x23);  writedata(0x06);
writecommand(0x24);  writedata(0x0C);
writecommand(0x25);  writedata(0x12);
writecommand(0x26);  writedata(0x16);
writecommand(0x27);  writedata(0x1C);
writecommand(0x28);  writedata(0x23);
writecommand(0x29);  writedata(0x2E);
writecommand(0x2A);  writedata(0x36);
writecommand(0x2B);  writedata(0x3F);
writecommand(0x2C);  writedata(0x47);
writecommand(0x2D);  writedata(0x50);
writecommand(0x2E);  writedata(0x57);
writecommand(0x2F);  writedata(0x5F);
writecommand(0x30);  writedata(0x67);
writecommand(0x31);  writedata(0x6F);
writecommand(0x32);  writedata(0x76);
writecommand(0x33);  writedata(0x7F);
writecommand(0x34);  writedata(0x87);
writecommand(0x35);  writedata(0x90);
writecommand(0x36);  writedata(0x99);
writecommand(0x37);  writedata(0xA3);
writecommand(0x38);  writedata(0xAD);
writecommand(0x39);  writedata(0xB4);
writecommand(0x3A);  writedata(0xBB);
writecommand(0x3B);  writedata(0xC4);
writecommand(0x3C);  writedata(0xCE);
writecommand(0x3D);  writedata(0xD9);
writecommand(0x3E);  writedata(0xE3);
writecommand(0x3F);  writedata(0xEC);
writecommand(0x40);  writedata(0xF3);
writecommand(0x41);  writedata(0xF7);
writecommand(0x42);  writedata(0xFC);
writecommand(0x43);  writedata(0x00);
writecommand(0x44);  writedata(0x06);
writecommand(0x45);  writedata(0x0C);
writecommand(0x46);  writedata(0x12);
writecommand(0x47);  writedata(0x16);
writecommand(0x48);  writedata(0x1C);
writecommand(0x49);  writedata(0x23);
writecommand(0x4A);  writedata(0x2E);
writecommand(0x4B);  writedata(0x36);
writecommand(0x4C);  writedata(0x3F);
writecommand(0x4D);  writedata(0x47);
writecommand(0x4E);  writedata(0x50);
writecommand(0x4F);  writedata(0x57);
writecommand(0x50);  writedata(0x5F);
writecommand(0x51);  writedata(0x67);
writecommand(0x52);  writedata(0x6F);
writecommand(0x53);  writedata(0x76);
writecommand(0x54);  writedata(0x7F);
writecommand(0x55);  writedata(0x87);
writecommand(0x56);  writedata(0x90);
writecommand(0x57);  writedata(0x99);
writecommand(0x58);  writedata(0xA3);
writecommand(0x59);  writedata(0xAD);
writecommand(0x5A);  writedata(0xB4);
writecommand(0x5B);  writedata(0xBB);
writecommand(0x5C);  writedata(0xC4);
writecommand(0x5D);  writedata(0xCE);
writecommand(0x5E);  writedata(0xD9);
writecommand(0x5F);  writedata(0xE3);
writecommand(0x60);  writedata(0xEC);
writecommand(0x61);  writedata(0xF3);
writecommand(0x62);  writedata(0xF7);
writecommand(0x63);  writedata(0xFC);
writecommand(0xFF);  writedata(0x00); //Page0
//Set GRAM Area
writecommand(0x02);  writedata(0x00);
writecommand(0x03);  writedata(0x00); //Column Start
writecommand(0x04);  writedata(0x00);
writecommand(0x05);  writedata(0xEF); //Column End
writecommand(0x06);  writedata(0x00);
writecommand(0x07);  writedata(0x00); //Row Start
writecommand(0x08);  writedata(0x01);
writecommand(0x09);  writedata(0x8F); //Row End
//Display ON Setting
writecommand(0x28);  writedata(0x38); //GON=1, DTE=1, D=10
delay(40);
writecommand(0x28);  writedata(0x3C); //GON=1, DTE=1, D=11
writecommand(0x22); //Start GRAM write

// End of HX8352C display configuration
