
// This is the command sequence that rotates the ILI9225 driver coordinate frame

  rotation = m % 4; // Limit the range of values to 0-3

  writecommand(ILI9225_ENTRY_MODE);
  switch (rotation) {
    case 0:
    	writedata(TFT_MAD_BGR);writedata(0x20);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 1:
    	writedata(TFT_MAD_BGR);writedata(0x38);
      _width  = _init_height;
      _height = _init_width;
      break;
    case 2:
    	writedata(TFT_MAD_BGR);writedata(0x10);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 3:
    	writedata(TFT_MAD_BGR);writedata(0x08);
      _width  = _init_height;
      _height = _init_width;
      break;
  }
