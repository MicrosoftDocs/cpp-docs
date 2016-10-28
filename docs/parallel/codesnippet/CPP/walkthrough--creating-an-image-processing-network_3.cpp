// Converts the given image to grayscale.
Bitmap* Grayscale(Bitmap* bmp) 
{
   ProcessImage(bmp, 
      [](DWORD& color) {
         BYTE r, g, b;
         GetRGB(color, r, g, b);

         // Set each color component to the average of 
         // the original components.
         BYTE c = (static_cast<WORD>(r) + g + b) / 3;
         color = MakeColor(c, c, c);
      }
   );
   return bmp;
}

// Applies sepia toning to the provided image.
Bitmap* Sepiatone(Bitmap* bmp) 
{
   ProcessImage(bmp, 
      [](DWORD& color) {
         BYTE r0, g0, b0;
         GetRGB(color, r0, g0, b0);

         WORD r1 = static_cast<WORD>((r0 * .393) + (g0 *.769) + (b0 * .189));
         WORD g1 = static_cast<WORD>((r0 * .349) + (g0 *.686) + (b0 * .168));
         WORD b1 = static_cast<WORD>((r0 * .272) + (g0 *.534) + (b0 * .131));

         color = MakeColor(min(0xff, r1), min(0xff, g1), min(0xff, b1));
      }
   );
   return bmp;
}

// Applies the given color mask to each pixel in the provided image.
Bitmap* ColorMask(Bitmap* bmp, DWORD mask)
{
   ProcessImage(bmp, 
      [mask](DWORD& color) {
         color = color & mask;
      }
   );
   return bmp;
}

// Darkens the provided image by the given amount.
Bitmap* Darken(Bitmap* bmp, unsigned int percent)
{
   if (percent > 100)
      throw invalid_argument("Darken: percent must less than 100.");

   double factor = percent / 100.0;

   ProcessImage(bmp, 
      [factor](DWORD& color) {
         BYTE r, g, b;
         GetRGB(color, r, g, b);
         r = static_cast<BYTE>(factor*r);
         g = static_cast<BYTE>(factor*g);
         b = static_cast<BYTE>(factor*b);
         color = MakeColor(r, g, b);
      }
   );
   return bmp;
}