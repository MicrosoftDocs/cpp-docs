// Determines which color component (red, green, or blue) is most dominant
// in the given image and returns a corresponding color mask.
DWORD GetColorDominance(Bitmap* bmp)
{
   // The ProcessImage function processes the image in parallel.
   // The following combinable objects enable the callback function
   // to increment the color counts without using a lock.
   combinable<unsigned int> reds;
   combinable<unsigned int> greens;
   combinable<unsigned int> blues;

   ProcessImage(bmp, 
      [&](DWORD& color) {
         BYTE r, g, b;
         GetRGB(color, r, g, b);
         if (r >= g && r >= b)
            reds.local()++;
         else if (g >= r && g >= b)
            greens.local()++;
         else
            blues.local()++;
      }
   );
   
   // Determine which color is dominant and return the corresponding
   // color mask.

   unsigned int r = reds.combine(plus<unsigned int>());
   unsigned int g = greens.combine(plus<unsigned int>());
   unsigned int b = blues.combine(plus<unsigned int>());

   if (r + r >= g + b)
      return 0x00ff0000;
   else if (g + g >= r + b)
      return 0x0000ff00;
   else
      return 0x000000ff;
}