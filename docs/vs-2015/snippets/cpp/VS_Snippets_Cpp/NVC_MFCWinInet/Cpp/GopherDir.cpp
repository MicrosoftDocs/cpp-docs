#pragma warning(push)
#pragma warning(disable : 4995) // C4995: deprecated; Gopher classes are deprecated.

// <Snippet4>
#include <afxinet.h>

void RetrieveGopherFile(LPCTSTR pszGopherSite, LPCTSTR pszFile)
{
   CInternetSession session(_T("My Gopher Session"));
   CGopherConnection* pConn = NULL;
   CGopherFileFind* pFile;

   pConn = session.GetGopherConnection(pszGopherSite);
   pFile = new CGopherFileFind(pConn);
   BOOL bFound = pFile->FindFile(pszFile);
   while (bFound)
   {
      //retrieve attributes of found file
      bFound = pFile->FindNextFile();
   }
   delete pFile;
   delete pConn;
   session.Close();
}
// </Snippet4>

#pragma warning(pop)