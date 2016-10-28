// Downloads the file at the given URL.
string download(const string& url)
{
   scoped_blocking_signal signal;

   // Download the file.
   return string(GetHttpFile(_session, url.c_str()));
}