// This is the command sequence that rotates the ST7789 driver coordinate frame
{
  rotation = m % 4;
  switch (rotation)
  {
  case 0: // Portrait
    writecommand(SSD1331_CMD_SETREMAP);
    writecommand(0b01110010);
    _width = _init_width;
    _height = _init_height;
    break;
  case 1: // Landscape (Portrait + 90)
    writecommand(SSD1331_CMD_SETREMAP);
    writecommand(0b01110001);
    _width = _init_height;
    _height = _init_width;
    break;
  case 2: // Inverter portrait
    writecommand(SSD1331_CMD_SETREMAP);
    writecommand(0b01100000);
    _width = _init_width;
    _height = _init_height;
    break;
  case 3: // Inverted landscape
    writecommand(SSD1331_CMD_SETREMAP);
    writecommand(0b01100011);
    _width = _init_height;
    _height = _init_width;
    break;
  }
}