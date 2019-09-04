#include <afxinet.h>

void GetFtpFile(LPCTSTR pszServerName, LPCTSTR pszRemoteFile, LPCTSTR pszLocalFile)
{
   CInternetSession session(_T("My FTP Session"));
   CFtpConnection *pConn = NULL;

   pConn = session.GetFtpConnection(pszServerName);
   //get the file
   if (!pConn->GetFile(pszRemoteFile, pszLocalFile))
   {
      //display an error
   }
   delete pConn;
   session.Close();
}