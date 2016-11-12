   //
   // Create the nodes of the network.
   //

   // Loads Bitmap objects from disk.
   transformer<wstring, Bitmap*> load_bitmap(
      [&](wstring file_name) -> Bitmap* {
         Bitmap* bmp = new Bitmap(file_name.c_str());
         if (bmp != nullptr)
            bitmap_file_names.insert(make_pair(bmp, file_name));
         return bmp;
      }
   );

   // Holds loaded Bitmap objects.
   unbounded_buffer<Bitmap*> loaded_bitmaps;
  
   // Converts images that are authored by Tom to grayscale.
   transformer<Bitmap*, Bitmap*> grayscale(
      [](Bitmap* bmp) {
         return Grayscale(bmp);
      },
      nullptr,
      [](Bitmap* bmp) -> bool {
         if (bmp == nullptr)
            return false;

         // Retrieve the artist name from metadata.
         UINT size = bmp->GetPropertyItemSize(PropertyTagArtist);
         if (size == 0)
            // Image does not have the Artist property.
            return false;

         PropertyItem* artistProperty = (PropertyItem*) malloc(size);
         bmp->GetPropertyItem(PropertyTagArtist, size, artistProperty);
         string artist(reinterpret_cast<char*>(artistProperty->value));
         free(artistProperty);
         
         return (artist.find("Tom ") == 0);
      }
   );
   
   // Removes the green and blue color components from images that have red as
   // their dominant color.
   transformer<Bitmap*, Bitmap*> colormask(
      [](Bitmap* bmp) {
         return ColorMask(bmp, 0x00ff0000);
      },
      nullptr,
      [](Bitmap* bmp) -> bool { 
         if (bmp == nullptr)
            return false;
         return (GetColorDominance(bmp) == 0x00ff0000);
      }
   );

   // Darkens the color of the provided Bitmap object.
   transformer<Bitmap*, Bitmap*> darken([](Bitmap* bmp) {
      return Darken(bmp, 50);
   });

   // Applies sepia toning to the remaining images.
   transformer<Bitmap*, Bitmap*> sepiatone(
      [](Bitmap* bmp) {
         return Sepiatone(bmp);
      },
      nullptr,
      [](Bitmap* bmp) -> bool { return bmp != nullptr; }
   );

   // Saves Bitmap objects to disk.
   transformer<Bitmap*, Bitmap*> save_bitmap([&](Bitmap* bmp) -> Bitmap* {
      // Replace the file extension with .bmp.
      wstring file_name = bitmap_file_names[bmp];
      file_name.replace(file_name.rfind(L'.') + 1, 3, L"bmp");
      
      // Save the processed image.
      CLSID bmpClsid;
      GetEncoderClsid(L"image/bmp", &bmpClsid);      
      bmp->Save(file_name.c_str(), &bmpClsid);

      return bmp;
   });

   // Deletes Bitmap objects.
   transformer<Bitmap*, Bitmap*> delete_bitmap([](Bitmap* bmp) -> Bitmap* {      
      delete bmp;
      return nullptr;
   });

   // Decrements the event counter.
   call<Bitmap*> decrement([&](Bitmap* _) {      
      active.signal();
   });