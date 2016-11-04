   void run()
   {
      FILE* stream;
      try
      {
         // Open the file.
         if (fopen_s(&stream, _file_name.c_str(), "r") != 0)
         {
            // Throw an exception if an error occurs.            
            throw std::exception("Failed to open input file.");
         }
      
         // Create a buffer to hold file data.
         char buf[1024];

         // Set the buffer size.
         setvbuf(stream, buf, _IOFBF, sizeof buf);
         
         // Read the contents of the file and send the contents
         // to the target.
         while (fgets(buf, sizeof buf, stream))
         {
            asend(_target, std::string(buf));
         }   
         
         // Send the empty string to the target to indicate the end of processing.
         asend(_target, std::string(""));

         // Close the file.
         fclose(stream);
      }
      catch (const std::exception& e)
      {
         // Send the empty string to the target to indicate the end of processing.
         asend(_target, std::string(""));

         // Write the exception to the error buffer.
         send(_error, e);
      }

      // Set the status of the agent to agent_done.
      done();
   }