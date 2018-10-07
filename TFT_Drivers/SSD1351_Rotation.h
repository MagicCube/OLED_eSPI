// This is the command sequence that rotates the ST7789 driver coordinate frame
{
  rotation = m % 4;
  switch (rotation)
  {
  case 0: // Portrait
    writecommand(SSD1351_CMD_SETREMAP);
    writedata(0b01110100);
    _width = _init_width;
    _height = _init_height;
    break;
  case 1: // Landscape (Portrait + 90)
    writecommand(SSD1351_CMD_SETREMAP);
    writedata(0b01110111);
    _width = _init_height;
    _height = _init_width;
    break;
  case 2: // Inverter portrait
    writecommand(SSD1351_CMD_SETREMAP);
    writedata(0b01100110);
    _width = _init_width;
    _height = _init_height;
    break;
  case 3: // Inverted landscape
    writecommand(SSD1351_CMD_SETREMAP);
    writedata(0b01100101);
    _width = _init_height;
    _height = _init_width;
    break;
  }
}