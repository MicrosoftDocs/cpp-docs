// Retrieves the red, green, and blue components from the given
// color value.
void GetRGB(DWORD color, BYTE& r, BYTE& g, BYTE& b)
{
   r = static_cast<BYTE>((color & 0x00ff0000) >> 16);
   g = static_cast<BYTE>((color & 0x0000ff00) >> 8);
   b = static_cast<BYTE>((color & 0x000000ff));
}

// Creates a single color value from the provided red, green, 
// and blue components.
DWORD MakeColor(BYTE r, BYTE g, BYTE b)
{
   return (r<<16) | (g<<8) | (b);
}