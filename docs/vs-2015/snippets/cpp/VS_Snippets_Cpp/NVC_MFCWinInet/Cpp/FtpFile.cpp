// <Snippet3>
#include <afxinet.h>

void GetFtpFile(LPCTSTR pszServerName, LPCTSTR pszRemoteFile, LPCTSTR pszLocalFile)
{
   CInternetSession session(_T("My FTP Session"));
   CFtpConnection* pConn = NULL;

   pConn = session.GetFtpConnection(pszServerName);
   //get the file
   if (!pConn->GetFile(pszRemoteFile, pszLocalFile))
   {
      //display an error
   }
   delete pConn;
   session.Close();
}
// </Snippet3>

void EnumFtpMicrosoftCom()
{
// <Snippet8>
   // create a session object to initialize WININET library
   // Default parameters mean the access method in the registry
   // (that is, set by the "Internet" icon in the Control Panel)
   // will be used.

   CInternetSession sess(_T("My FTP Session"));

   CFtpConnection* pConnect = NULL;

   try
   {
      // Request a connection to ftp.microsoft.com. Default
      // parameters mean that we'll try with username = ANONYMOUS
      // and password set to the machine name @ domain name
      pConnect = sess.GetFtpConnection(_T("ftp.microsoft.com"));

      // use a file find object to enumerate files
      CFtpFileFind finder(pConnect);

      // start looping
      BOOL bWorking = finder.FindFile(_T("*"));

      while (bWorking)
      {
         bWorking = finder.FindNextFile();
         _tprintf_s(_T("%s\n"), (LPCTSTR)finder.GetFileURL());
      }
   }
   catch (CInternetException* pEx)
   {
      TCHAR sz[1024];
      pEx->GetErrorMessage(sz, 1024);
      _tprintf_s(_T("ERROR!  %s\n"), sz);
      pEx->Delete();
   }

   // if the connection is open, close it
   if (pConnect != NULL) 
   {
      pConnect->Close();
      delete pConnect;
   }
// </Snippet8>
}