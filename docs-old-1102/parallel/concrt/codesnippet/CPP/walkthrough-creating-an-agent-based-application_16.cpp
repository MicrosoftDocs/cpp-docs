   std::exception error;
   if (reader.get_error(error))
   {
      wcout << error.what() << endl;
   }   
   else
   {      
      unsigned int adler32_sum = (b << 16) | a;
      wcout << L"Adler-32 sum is " << hex << adler32_sum << endl;
   }