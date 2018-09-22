  // This is the command sequence that rotates the ST7789 driver coordinate frame

  writecommand(TFT_MADCTL);
  rotation = m % 4;
  switch (rotation) {
   case 0: // Portrait
     writedata(TFT_MAD_BGR);
      _width  = _init_width;
      _height = _init_height;
#ifdef CGRAM_OFFSET
      colstart = 0;
      rowstart = 0;
#endif
     break;
   case 1: // Landscape (Portrait + 90)
     writedata(TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_BGR);
      _width  = _init_height;
      _height = _init_width;
#ifdef CGRAM_OFFSET
      colstart = 0;
      rowstart = 0;
#endif
     break;
   case 2: // Inverter portrait
     writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_BGR);
      _width  = _init_width;
      _height = _init_height;
#ifdef CGRAM_OFFSET
       colstart = 240 - TFT_WIDTH;
       rowstart = 320 - TFT_HEIGHT;
#endif
     break;
   case 3: // Inverted landscape
     writedata(TFT_MAD_MV | TFT_MAD_MY | TFT_MAD_BGR);
      _width  = _init_height;
      _height = _init_width;
#ifdef CGRAM_OFFSET
       colstart = 320 - TFT_HEIGHT;
       rowstart = 240 - TFT_WIDTH;
#endif
     break;
  }
