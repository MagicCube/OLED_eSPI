  // This is the command sequence that rotates the ILI9481 driver coordinate frame

  rotation = m % 4;
  switch (rotation) {
   case 0: // Portrait
    writecommand(0x36); writedata(invertcolor?0x13:0x03);
    writecommand(0x16); writedata(0x00);
    _width  = TFT_WIDTH;
    _height = TFT_HEIGHT;
    break;
   case 1: // Landscape (Portrait + 90)
    writecommand(0x36); writedata(invertcolor?0x17:0x07);
    writecommand(0x16); writedata(0x20);
    _width  = TFT_HEIGHT;
    _height = TFT_WIDTH;
    break;
   case 2: // Inverter portrait
    writecommand(0x36); writedata(invertcolor?0x17:0x07);
    writecommand(0x16); writedata(0x40);
    _width  = TFT_WIDTH;
    _height = TFT_HEIGHT;
    break;
   case 3: // Inverted landscape
    writecommand(0x36); writedata(invertcolor?0x13:0x03);
    writecommand(0x16); writedata(0x60);
    _width  = TFT_HEIGHT;
    _height = TFT_WIDTH;
    break;
  }
