#include <afx.h>
#include <afxdb.h>

int _tmain(int /*argc*/, TCHAR * /*argv[]*/, TCHAR * /*envp[]*/)
{
   int nRetCode = 0;

   // initialize MFC and print and error on failure
   if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
   {
      // TODO: change error code to suit your needs
      _tprintf(_T("Fatal Error: MFC initialization failed\n"));
      nRetCode = 1;
   }
   else
   {
      // try to connect to an ODBC database that doesn't exist
      // (this wouldn't work at all without initializing MFC)

      CDatabase db;
      try
      {
         db.Open(_T("This Databsae Doesn't Exist"));

         // we shouldn't realistically get here

         _tprintf_s(_T("Successful!\n")
                    _T("Closing ...\n"));
         db.Close();
         _tprintf_s(_T("Closed!"));
      }
      catch (CDBException *pEx)
      {
         // we got an exception! print an error message
         // (this wouldn't work without initializing MFC)

         TCHAR sz[1024];

         _tprintf_s(_T("Error: "));
         if (pEx->GetErrorMessage(sz, 1024))
            _tprintf_s(sz);
         else
            _tprintf_s(_T("No error message was available"));
         _tprintf_s(_T("\n"));

         pEx->Delete();

         nRetCode = 1;
      }
   }

   return nRetCode;
}