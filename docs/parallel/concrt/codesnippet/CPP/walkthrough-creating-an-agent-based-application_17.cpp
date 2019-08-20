// BasicAgent.cpp : Defines the entry point for the console application.
//

#include "pch.h" // Use stdafx.h in Visual Studio 2017 and earlier
#include "file_reader.h"

using namespace concurrency;
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
   // An event object that signals the end of processing.
   event e;

   // The components of the Adler-32 sum.
   unsigned int a = 1;
   unsigned int b = 0;

   // A call object that updates the checksum when it receives data.
   call<string> calculate_checksum([&] (string s) {
      // If the input string is empty, set the event to signal
      // the end of processing.
      if (s.size() == 0)
         e.set();
      // Perform the Adler-32 checksum algorithm.
      for_each(begin(s), end(s), [&] (char c) {
         a = (a + c) % 65521;
         b = (b + a) % 65521;
      });
   });

   // Create the agent.
   file_reader reader("test.txt", calculate_checksum);
   
   // Start the agent and wait for it to complete.
   reader.start();
   agent::wait(&reader);

   // Wait for the call object to receive all data and complete.
   e.wait();

   // Check the file reader for errors.
   // If no error occurred, calculate the final Adler-32 sum and print it 
   // to the console.
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
}