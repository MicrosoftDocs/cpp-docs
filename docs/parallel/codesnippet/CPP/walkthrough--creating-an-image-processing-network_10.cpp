   //
   // Connect the network.
   //   
   
   load_bitmap.link_target(&loaded_bitmaps);
   
   loaded_bitmaps.link_target(&grayscale);
   loaded_bitmaps.link_target(&colormask);   
   colormask.link_target(&darken);
   loaded_bitmaps.link_target(&sepiatone);
   loaded_bitmaps.link_target(&decrement);
   
   grayscale.link_target(&save_bitmap);
   darken.link_target(&save_bitmap);
   sepiatone.link_target(&save_bitmap);
   
   save_bitmap.link_target(&delete_bitmap);
   delete_bitmap.link_target(&decrement);