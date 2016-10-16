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