// Processes each bitmap in the provided vector.
void ProcessImages(vector<Bitmap*> bitmaps, const function<void (DWORD&)>& f)
{
   parallel_for_each(begin(bitmaps), end(bitmaps), [&f](Bitmap* bmp) {
      ProcessImage(bmp, f);
   });
}