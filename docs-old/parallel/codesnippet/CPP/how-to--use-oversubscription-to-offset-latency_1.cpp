// download-oversubscription.cpp
// compile with: /EHsc /MD /D "_AFXDLL"
#define _WIN32_WINNT 0x0501
#include <afxinet.h>
#include <concrtrm.h>
#include <agents.h>
#include <ppl.h>
#include <sstream>
#include <iostream>
#include <array>

using namespace concurrency;
using namespace std;

// Calls the provided work function and returns the number of milliseconds 
// that it takes to call that function.
template <class Function>
__int64 time_call(Function&& f)
{
   __int64 begin = GetTickCount();
   f();
   return GetTickCount() - begin;
}

// Downloads the file at the given URL.
CString GetHttpFile(CInternetSession& session, const CString& strUrl);

// Reads files from HTTP servers.
class http_reader : public agent
{
public:
   explicit http_reader(CInternetSession& session,      
      ISource<string>& source,
      unsigned int& total_bytes,
      unsigned int max_concurrent_reads)
      : _session(session)
      , _source(source)
      , _total_bytes(total_bytes)
   {
      // Add one token to the available tasks buffer for each 
      // possible concurrent read operation. The value of each token 
      // is not important, but can be useful for debugging.
      for (unsigned int i = 0; i < max_concurrent_reads; ++i)
         send(_available_tasks, i);
   }

   // Signals to the agent that there are no more items to download.
   static const string input_sentinel;
 
protected:
   void run()
   {
      // A task group. Each task in the group downloads one file.
      task_group tasks;

      // Holds the total number of bytes downloaded.
      combinable<unsigned int> total_bytes;

      // Read from the source buffer until the application 
      // sends the sentinel value.
      string url;
      while ((url = receive(_source)) != input_sentinel)
      {
         // Wait for a task to release an available slot.
         unsigned int token = receive(_available_tasks);

         // Create a task to download the file.
         tasks.run([&, token, url] {

            // Print a message.
            wstringstream ss;
            ss << L"Downloading " << url.c_str() << L"..." << endl;
            wcout << ss.str();

            // Download the file.
            string content = download(url);

            // Update the total number of bytes downloaded.
            total_bytes.local() += content.size();

            // Release the slot for another task.
            send(_available_tasks, token);
         });
      }

      // Wait for all tasks to finish.
      tasks.wait();
      
      // Compute the total number of bytes download on all threads.
      _total_bytes = total_bytes.combine(plus<unsigned int>());

      // Set the status of the agent to agent_done.
      done();
   }

   // Downloads the file at the given URL.
   string download(const string& url)
   {
      // Enable oversubscription.
      Context::Oversubscribe(true);

      // Download the file.
      string content = GetHttpFile(_session, url.c_str());
      
      // Disable oversubscription.
      Context::Oversubscribe(false);

      return content;
   }

private:
   // Manages the network connection.
   CInternetSession& _session;
   // A message buffer that holds the URL names to download.
   ISource<string>& _source;
   // The total number of bytes downloaded
   unsigned int& _total_bytes;
   // Limits the agent to a given number of simultaneous tasks.
   unbounded_buffer<unsigned int> _available_tasks;
};
const string http_reader::input_sentinel("");

int wmain()
{
   // Create an array of URL names to download.
   // A real-world application might read the names from user input.
   array<string, 21> urls = {
      "http://www.adatum.com/",
      "http://www.adventure-works.com/", 
      "http://www.alpineskihouse.com/",
      "http://www.cpandl.com/", 
      "http://www.cohovineyard.com/",
      "http://www.cohowinery.com/",
      "http://www.cohovineyardandwinery.com/", 
      "http://www.contoso.com/",
      "http://www.consolidatedmessenger.com/",
      "http://www.fabrikam.com/", 
      "http://www.fourthcoffee.com/",
      "http://www.graphicdesigninstitute.com/",
      "http://www.humongousinsurance.com/",
      "http://www.litwareinc.com/",
      "http://www.lucernepublishing.com/",
      "http://www.margiestravel.com/",
      "http://www.northwindtraders.com/",
      "http://www.proseware.com/", 
      "http://www.fineartschool.net",
      "http://www.tailspintoys.com/",
      http_reader::input_sentinel,
   };
      
   // Manages the network connection.
   CInternetSession session("Microsoft Internet Browser");

   // A message buffer that enables the application to send URL names to the 
   // agent.
   unbounded_buffer<string> source_urls;

   // The total number of bytes that the agent has downloaded.
   unsigned int total_bytes = 0u;

   // Create an http_reader object that can oversubscribe each processor by one.
   http_reader reader(session, source_urls, total_bytes, 2*GetProcessorCount());

   // Compute the amount of time that it takes for the agent to download all files.
   __int64 elapsed = time_call([&] {
      
      // Start the agent.
      reader.start();
      
      // Use the message buffer to send each URL name to the agent.
      for_each(begin(urls), end(urls), [&](const string& url) {
         send(source_urls, url);
      });

      // Wait for the agent to finish downloading.
      agent::wait(&reader);      
   });

   // Print the results.
   wcout << L"Downloaded " << total_bytes
         << L" bytes in " << elapsed << " ms." << endl;
}

// Downloads the file at the given URL and returns the size of that file.
CString GetHttpFile(CInternetSession& session, const CString& strUrl)
{
   CString strResult;

   // Reads data from an HTTP server.
   CHttpFile* pHttpFile = NULL;

   try
   {
      // Open URL.
      pHttpFile = (CHttpFile*)session.OpenURL(strUrl, 1, 
         INTERNET_FLAG_TRANSFER_ASCII | 
         INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE);

      // Read the file.
      if(pHttpFile != NULL)
      {           
         UINT uiBytesRead;
         do
         {
            char chBuffer[10000];
            uiBytesRead = pHttpFile->Read(chBuffer, sizeof(chBuffer));
            strResult += chBuffer;
         }
         while (uiBytesRead > 0);
      }
    }
   catch (CInternetException)
   {
      // TODO: Handle exception
   }

   // Clean up and return.
   delete pHttpFile;

   return strResult;
}