   // Traverse all files in the directory.
   wstring searchPattern = directory;
   searchPattern.append(L"\\*");

   WIN32_FIND_DATA fileFindData;
   HANDLE hFind = FindFirstFile(searchPattern.c_str(), &fileFindData);
   if (hFind == INVALID_HANDLE_VALUE) 
      return;
   do
   {
      if (!(fileFindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
      {
         wstring file = fileFindData.cFileName;

         // Process only JPEG files.
         if (file.rfind(L".jpg") == file.length() - 4)
         {
            // Form the full path to the file.
            wstring full_path(directory);
            full_path.append(L"\\");
            full_path.append(file);

            // Increment the count of work items.
            active.add_count();

            // Send the path name to the network.
            send(load_bitmap, full_path);
         }
      }
   }
   while (FindNextFile(hFind, &fileFindData) != 0); 
   FindClose(hFind);