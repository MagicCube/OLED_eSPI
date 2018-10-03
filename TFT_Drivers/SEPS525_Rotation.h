// This is the command sequence that rotates the ST7789 driver coordinate frame
{
  rotation = m % 4;
  switch (rotation)
  {
  case 0: // Portrait
    writecommand(0x16);
    writedata(0x66);
    _width = _init_width;
    _height = _init_height;
    break;
  case 1: // Landscape (Portrait + 90)
    writecommand(0x16);
    writedata(0x63);
    _width = _init_height;
    _height = _init_width;
    break;
  case 2: // Inverter portrait
    writecommand(0x16);
    writedata(0x60);
    _width = _init_width;
    _height = _init_height;
    break;
  case 3: // Inverted landscape
    writecommand(0x16);
    writedata(0x65);
    _width = _init_height;
    _height = _init_width;
    break;
  }
}