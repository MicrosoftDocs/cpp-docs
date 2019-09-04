#include <afxinet.h>

void DisplayPage(LPCTSTR pszURL)
{
   CInternetSession session(_T("My Session"));
   CStdioFile *pFile = NULL;
   CHAR szBuff[1024];
   //use a URL and print a Web page to the console
   pFile = session.OpenURL(pszURL);
   while (pFile->Read(szBuff, 1024) > 0)
   {
      printf_s("%1023s", szBuff);
   }
   delete pFile;
   session.Close();
}