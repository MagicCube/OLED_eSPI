// NOTE: this procedure is from Densitron
// DD-160128FC-2B datasheet
{
    // display off, analog reset
    writecommand(0x04);
    writedata(0x01);
    delay(1);

    // normal mode
    writecommand(0x04);
    writedata(0x00);
    delay(1);

    // display off
    writecommand(0x06);
    writedata(0x00);

    // turn on internal oscillator using external resistor
    writecommand(0x02);
    writedata(0x01);

    // 90 hz frame rate, divider 0
    writecommand(0x03);
    writedata(0x30);

    // duty cycle 127
    writecommand(0x28);
    writedata(0x7f);

    // start on line 0
    writecommand(0x29);
    writedata(0x00);

    // rgb_if
    writecommand(0x14);
    writedata(0x31);

    // memory write mode
    writecommand(0x16);
    writedata(0x66);

    // driving current r g b (uA)
    writecommand(0x10);
    writedata(0x45);
    writecommand(0x11);
    writedata(0x34);
    writecommand(0x12);
    writedata(0x33);

    // precharge time r g b
    writecommand(0x08);
    writedata(0x04);
    writecommand(0x09);
    writedata(0x05);
    writecommand(0x0a);
    writedata(0x05);

    // precharge current r g b (uA)
    writecommand(0x0b);
    writedata(0x9d);
    writecommand(0x0c);
    writedata(0x8c);
    writecommand(0x0d);
    writedata(0x57);

    writecommand(0x80);
    writedata(0x00);

    // mode set
    writecommand(0x13);
    writedata(0x00);

    // display on
    writecommand(0x06);
    writedata(0x01);
}