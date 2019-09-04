//this code excerpt also demonstrates try/catch exception handling
#include <afxinet.h>

void DisplayHttpPage(LPCTSTR pszServerName, LPCTSTR pszFileName)
{
   CInternetSession session(_T("My Session"));
   CHttpConnection *pServer = NULL;
   CHttpFile *pFile = NULL;
   try
   {
      CString strServerName;
      INTERNET_PORT nPort = 80;
      DWORD dwRet = 0;

      pServer = session.GetHttpConnection(pszServerName, nPort);
      pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_GET, pszFileName);
      pFile->SendRequest();
      pFile->QueryInfoStatusCode(dwRet);

      if (dwRet == HTTP_STATUS_OK)
      {
         CHAR szBuff[1024];
         while (pFile->Read(szBuff, 1024) > 0)
         {
            printf_s("%1023s", szBuff);
         }
      }
      delete pFile;
      delete pServer;
   }
   catch (CInternetException *pEx)
   {
      //catch errors from WinInet
      TCHAR pszError[64];
      pEx->GetErrorMessage(pszError, 64);
      _tprintf_s(_T("%63s"), pszError);
   }
   session.Close();
}