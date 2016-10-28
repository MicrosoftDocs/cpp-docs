   CUrl url;

   // Set the CUrl contents
   url.CrackUrl(_T("http://someone:secret@www.microsoft.com:8080/visualc/stuff.htm#contents"));

   // Obtain the length of the URL string and allocate a buffer to 
   // hold its contents
   DWORD dwUrlLen = url.GetUrlLength() + 1;
   TCHAR* szUrl = new TCHAR[dwUrlLen];

   // Retrieve the contents of the CUrl object
   url.CreateUrl(szUrl, &dwUrlLen, 0L);

   // Cleanup
   delete[] szUrl;   