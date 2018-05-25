// MFCFiles.cpp : Defines the entry point for the console application.
//
// This project contains snippets that demonstrate the usage of MFC file handling classes.
//
// Topic								            Snippets
// Opening Files						         1
// Reading and Writing Files			      2
// Accessing File Status				      3
// CFile::Abort                           5
// CFile::CFile                           4
// CFile::GetFileName                     6
// CFile::GetLength                       7
// CFile::GetPosition                     8
// CFile::GetStatus                       10
// CFile::LockRange                       12
// CFile::Open                            13 - 14
// CFile::Read                            15
// CFile::Remove                          17
// CFile::Rename                          18
// CFile::Seek                            9
// CFile::SeekToBegin                     19
// CFile::SeekToEnd                       19
// CFile::SetFilePath                     20
// CFile::SetLength                       11
// CFile::SetStatus                       21
// CFile::UnlockRange                     12
// CFile::Write                           16
// CFile::hFileNull                       22
// CFileDialog Class                      23
// CFileDialog::CFileDialog               23 - 24
// CFileDialog::DoModal                   25
// CFileException::ErrnoToException       26
// CFileException::OsErrorToException     27
// CFileException::ThrowErrno             28
// CFileException::ThrowOsError           29
// CFileException::m_cause                30
// CFileFind Class                        31
// CFileFind::GetFileName                 32
// CFileFind::GetLength                   33
// CFileFind::IsDirectory                 34
// CFileFind::MatchesMask                 35
// CMemFile::CMemFile                     36
// CStdioFile::CStdioFile                 37
// CStdioFile::ReadString                 38
// CStdioFile::Seek                       39
// CStdioFile::WriteString                40

#include "stdafx.h"
#include "MFCFiles.h"	
#include <errno.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object

CWinApp theApp;

using namespace std;

// <Snippet14>
//A second example for CFile::Open.
//This function uses CFile to copy binary files.
bool BinaryFileCopy(LPCTSTR pszSource, LPCTSTR pszDest)
{
   // constructing these file objects doesn't open them
   CFile sourceFile;
   CFile destFile;

   // we'll use a CFileException object to get error information
   CFileException ex;

   // open the source file for reading
   if (!sourceFile.Open(pszSource,
      CFile::modeRead | CFile::shareDenyWrite, &ex))
   {
      // complain if an error happened
      // no need to delete the ex object

      TCHAR szError[1024];
      ex.GetErrorMessage(szError, 1024);
      _tprintf_s(_T("Couldn't open source file: %1024s"), szError);
      return false;
   }
   else
   {
      if (!destFile.Open(pszDest, CFile::modeWrite |
         CFile::shareExclusive | CFile::modeCreate, &ex))
      {
         TCHAR szError[1024];
         ex.GetErrorMessage(szError, 1024);
         _tprintf_s(_T("Couldn't open source file: %1024s"), szError);

         sourceFile.Close();
         return false;
      }

      BYTE buffer[4096];
      DWORD dwRead;

      // Read in 4096-byte blocks,
      // remember how many bytes were actually read,
      // and try to write that many out. This loop ends
      // when there are no more bytes to read.
      do
      {
         dwRead = sourceFile.Read(buffer, 4096);
         destFile.Write(buffer, dwRead);
      }
      while (dwRead > 0);

      // Close both files

      destFile.Close();
      sourceFile.Close();
   }

   return true;
}
// </Snippet14>

class CMyClass
{
public:
   CMyClass() {}
   void OnFileOpen();
   void SetWindowText(CString& str) { UNREFERENCED_PARAMETER(str); }
};

// <Snippet25>
void CMyClass::OnFileOpen()
{
   // szFilters is a text string that includes two file name filters:
   // "*.my" for "MyType Files" and "*.*' for "All Files."
   TCHAR szFilters[]= _T("MyType Files (*.my)|*.my|All Files (*.*)|*.*||");

   // Create an Open dialog; the default file name extension is ".my".
   CFileDialog fileDlg(TRUE, _T("my"), _T("*.my"),
      OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, szFilters);
   
   // Display the file dialog. When user clicks OK, fileDlg.DoModal() 
   // returns IDOK.
   if(fileDlg.DoModal() == IDOK)
   {
      CString pathName = fileDlg.GetPathName();
   
      // Implement opening and reading file in here.

      //Change the window's title to the opened file's title.
      CString fileName = fileDlg.GetFileTitle();
   
      SetWindowText(fileName);
   }
}
// </Snippet25>

// <Snippet34>
void Recurse(LPCTSTR pstr)
{
   CFileFind finder;

   // build a string with wildcards
   CString strWildcard(pstr);
   strWildcard += _T("\\*.*");

   // start working for files
   BOOL bWorking = finder.FindFile(strWildcard);

   while (bWorking)
   {
      bWorking = finder.FindNextFile();

      // skip . and .. files; otherwise, we'd
      // recur infinitely!

      if (finder.IsDots())
         continue;

      // if it's a directory, recursively search it

      if (finder.IsDirectory())
      {
         CString str = finder.GetFilePath();
         TRACE(_T("%s\n"), (LPCTSTR)str);
         Recurse(str);
      }
   }

   finder.Close();
}

void PrintDirs()
{
   Recurse(_T("C:"));
}
// </Snippet34>

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(argv);
   UNREFERENCED_PARAMETER(envp);

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

      // Concepts topics

      {
// <Snippet1>
         TCHAR* pszFileName = _T("c:\\test\\myfile.dat");
         CFile myFile;
         CFileException fileException;

         if ( !myFile.Open( pszFileName, CFile::modeCreate |   
                 CFile::modeReadWrite, &fileException ) )
         {
            TRACE( _T("Can't open file %s, error = %u\n"),
               pszFileName, fileException.m_cause );
         }	
// </Snippet1>
      }

      {
// <Snippet2>
         TCHAR	szBuffer[256]; 
         UINT    nActual = 0; 
         CFile	myFile;

         if ( myFile.Open( _T("c:\\test\\myfile.dat"), CFile::modeCreate |   
            CFile::modeReadWrite ) )
         {
            myFile.Write( szBuffer, sizeof( szBuffer ) ); 
            myFile.Flush();
            myFile.Seek( 0, CFile::begin );
            nActual = myFile.Read( szBuffer, sizeof( szBuffer ) ); 
         }
// </Snippet2>
      }

      {
// <Snippet3>
         CFile theFile;
         TCHAR* szFileName = _T("c:\\test\\myfile.dat");
         BOOL bOpenOK;

         CFileStatus status;
         if( CFile::GetStatus( szFileName, status ) )
         {
            // Open the file without the Create flag
            bOpenOK = theFile.Open( szFileName, 
               CFile::modeWrite );
         }
         else
         {
            // Open the file with the Create flag
            bOpenOK = theFile.Open( szFileName, 
               CFile::modeCreate | CFile::modeWrite );
         }		
// </Snippet3>
      }

      // CFile topics

      {
// <Snippet4>
         HANDLE hFile = CreateFile(_T("CFile_File.dat"),
            GENERIC_WRITE, FILE_SHARE_READ,
            NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

         if (hFile == INVALID_HANDLE_VALUE)
         {
            AfxMessageBox(_T("Couldn't create the file!"));
         }
         else
         {
            // Attach a CFile object to the handle we have.
            CFile myFile(hFile);

            static const TCHAR sz[] = _T("I love CFile!");

            // write string
            myFile.Write(sz, sizeof(sz));

            // We need to call Close() explicitly. Note that there's no need to 
            // call CloseHandle() on the handle returned by the API because 
            // Close() automatically calls CloseHandle() for us.
            myFile.Close();
// </Snippet4>
         }               

         {
// <Snippet5>
            CStdioFile fileTest;
            TCHAR* pszFileName = _T("Abort_File.dat");

            // do stuff that may cause exceptions
            CFileException ex;
            if (!fileTest.Open(pszFileName, CFile::modeWrite, &ex))
            {
               ex.ReportError();
               fileTest.Abort();   // close file safely and quietly
            }
// </Snippet5>
         }

         {
// <Snippet6>
            try
            {
               // try to open the file
               CFile sysFile(_T("C:\\WINDOWS\\SYSTEM.INI"), CFile::modeRead);

               // print out path name and title information
               _tprintf_s(_T("Path is : \"%s\"\n"),
                  (LPCTSTR) sysFile.GetFilePath());
               _tprintf_s(_T("Name is : \"%s\"\n"),
                  (LPCTSTR) sysFile.GetFileName());
               _tprintf_s(_T("Title is: \"%s\"\n"), 
                  (LPCTSTR) sysFile.GetFileTitle());

               // close the file handle
               sysFile.Close();
            }
            catch (CFileException* pEx)
            {
               // if an error occurs, just make a message box
               pEx->ReportError();
               pEx->Delete();
            }
// </Snippet6>
         }

         {
// <Snippet7>
            CFile* pFile = NULL;
            // Constructing a CFile object with this override may throw
            // a CFile exception, and won't throw any other exceptions.
            // Calling CString::Format() may throw a CMemoryException,
            // so we have a catch block for such exceptions, too. Any
            // other exception types this function throws will be
            // routed to the calling function.
            try
            {
               pFile = new CFile(_T("C:\\WINDOWS\\SYSTEM.INI"),
                  CFile::modeRead | CFile::shareDenyNone);
               ULONGLONG dwLength = pFile->GetLength();
               CString str;
               str.Format(_T("Your SYSTEM.INI file is %I64u bytes long."), dwLength);
               AfxMessageBox(str);
            }
            catch (CFileException* pEx)
            {
               // Simply show an error message to the user.
               pEx->ReportError();
               pEx->Delete();
            }
            catch(CMemoryException* pEx)
            {
               pEx->ReportError();
               pEx->Delete();
               // We can't recover from this memory exception, so we'll
               // just terminate the app without any cleanup. Normally,
               // an application should do everything it possibly can to
               // clean up properly and _not_ call AfxAbort().
               AfxAbort();
            }

            // If an exception occurs in the CFile constructor,
            // the language will free the memory allocated by new
            // and will not complete the assignment to pFile.
            // Thus, our clean-up code needs to test for NULL.
            if (pFile != NULL)
            {
               pFile->Close();
               delete pFile;
            }         
// </Snippet7>
         }

         {
// <Snippet8>
// <Snippet9>
            CFile cfile;
            cfile.Open(_T("Seek_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            LONGLONG lOffset = 1000;
            ULONGLONG lActual;
            lActual = cfile.Seek(lOffset, CFile::begin);
// </Snippet9>
            ASSERT(cfile.GetPosition() == lActual);
// </Snippet8>
         }

         {
// <Snippet10>
// <Snippet11>
            CFile cfile;
            cfile.Open(_T("SetLength_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            ULONGLONG dwNewLength = 10000;
            cfile.SetLength(dwNewLength);
// </Snippet11>
            CFileStatus status;
            if(cfile.GetStatus(status))    // virtual member function
            {
               TRACE(_T("File size = %u\n"), status.m_size);
            }
            TCHAR* pszFileName = _T("SetLength_File.dat");
            if(CFile::GetStatus(pszFileName, status))   // static function
            {
               TRACE(_T("Full file name = %s\n"), status.m_szFullName);
            }
// </Snippet10>
         }

         {
// <Snippet12>
            CFile cfile;
            cfile.Open(_T("LockRange_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            ULONGLONG dwPos = 10;
            ULONGLONG dwCount = 100;
            cfile.LockRange(dwPos, dwCount);

            // do something with the file

            cfile.UnlockRange(dwPos, dwCount);
// </Snippet12>
         }

         {
// <Snippet13>
            CFile f;
            CFileException e;
            TCHAR* pszFileName = _T("Open_File.dat");
            if(!f.Open(pszFileName, CFile::modeCreate | CFile::modeWrite, &e))
            {
               TRACE(_T("File could not be opened %d\n"), e.m_cause);
            }
// </Snippet13>
         }

         {
            // test code for snippet 14
            CFile f;
            TCHAR* pszSrc = _T("BinarySource_File.dat");
            f.Open(pszSrc, CFile::modeCreate | CFile::modeWrite);
            TCHAR szBuff[5000];
            memset(szBuff, _T('a'), sizeof(szBuff));
            f.Write(szBuff, sizeof(szBuff));
            f.Close();
            
            BinaryFileCopy(pszSrc, _T("BinaryDest_File.dat"));
         }

         {
// <Snippet15>
// <Snippet16>
            CFile cfile;
            cfile.Open(_T("Write_File.dat"), CFile::modeCreate | 
               CFile::modeReadWrite);
            char pbufWrite[100];
            memset(pbufWrite, 'a', sizeof(pbufWrite));
            cfile.Write(pbufWrite, 100);         
            cfile.Flush();
// </Snippet16>
            cfile.SeekToBegin();
            char pbufRead[100];
            cfile.Read(pbufRead, sizeof(pbufRead));
            ASSERT(0 == memcmp(pbufWrite, pbufRead, sizeof(pbufWrite)));
// </Snippet15>
         }

         {
            CFile f;
            f.Open(_T("Remove_File.dat"), CFile::modeCreate | CFile::modeWrite);
            f.Close();
// <Snippet17>
            //example for CFile::Remove
            TCHAR* pFileName = _T("Remove_File.dat");
            try
            {
               CFile::Remove(pFileName);
            }
            catch (CFileException* pEx)
            {
               TRACE(_T("File %20s cannot be removed\n"), pFileName);
               pEx->Delete();
            }
// </Snippet17>
         }

         {
            CFile f;
            f.Open(_T("Oldname_File.dat"), CFile::modeCreate | CFile::modeWrite);
            f.Close();
// <Snippet18>
            TCHAR* pOldName = _T("Oldname_File.dat");
            TCHAR* pNewName = _T("Renamed_File.dat");

            try
            {
                CFile::Rename(pOldName, pNewName);
            }
            catch(CFileException* pEx )
            {
                TRACE(_T("File %20s not found, cause = %d\n"), pOldName, 
                   pEx->m_cause);
                pEx->Delete();
            }
// </Snippet18>
         }

         {
// <Snippet19>
            CFile f;
            f.Open(_T("Seeker_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            f.SeekToBegin();
            ULONGLONG ullEnd = f.SeekToEnd();
// </Snippet19>
            UNREFERENCED_PARAMETER(ullEnd);
         }

         {
// <Snippet20>
            TCHAR* pstrName = _T("C:\\test\\SetPath_File.dat");

            // open a file
            HANDLE hFile = ::CreateFile(pstrName, GENERIC_WRITE, FILE_SHARE_READ,
               NULL, CREATE_ALWAYS, 0, NULL);

            if (hFile != INVALID_HANDLE_VALUE)
            {
               // attach a CFile object to it
               CFile myFile(hFile);

               // At this point, myFile doesn't know the path name for the file
               // it owns because Windows doesn't associate that information
               // with the handle. Any CFileExceptions thrown by this object
               // won't have complete information.

               // Calling SetFilePath() remedies that problem by letting CFile
               // know the name of the file that's associated with the object.

               myFile.SetFilePath(pstrName);

               // write something to the file and flush it immediately
               DWORD dwValue = 1234;
               myFile.Write(&dwValue, sizeof(dwValue));
               myFile.Flush();

               // destroying the CObject here will call ::CloseHandle() on the file
            } 
// </Snippet20>
         }

         {
            CFile f;
            f.Open(_T("ReadOnly_File.dat"), CFile::modeCreate | CFile::modeWrite);
            f.Close();
// <Snippet21>
            TCHAR* pFileName = _T("ReadOnly_File.dat");
            CFileStatus status;
            CFile::GetStatus(pFileName, status);
            status.m_attribute |= CFile::readOnly;
            CFile::SetStatus(pFileName, status);         
// </Snippet21>
         }

         {
            CFile myFile;
// <Snippet22>
            if (myFile.m_hFile != CFile::hFileNull)
               ;//perform operations on the file
            else
               ;//indicate the presence of an invalid handle         
// </Snippet22>
         }

         // CFileDialog snippets

         {
// <Snippet23>
            #define MAX_CFileDialog_FILE_COUNT 99
            #define FILE_LIST_BUFFER_SIZE ((MAX_CFileDialog_FILE_COUNT * (MAX_PATH + 1)) + 1)

            CString fileName;
            wchar_t* p = fileName.GetBuffer( FILE_LIST_BUFFER_SIZE );
            CFileDialog dlgFile(TRUE);
            OPENFILENAME& ofn = dlgFile.GetOFN( );
            ofn.Flags |= OFN_ALLOWMULTISELECT;
            ofn.lpstrFile = p;
            ofn.nMaxFile = FILE_LIST_BUFFER_SIZE;

            dlgFile.DoModal();
            fileName.ReleaseBuffer();

            wchar_t* pBufEnd = p + FILE_LIST_BUFFER_SIZE - 2;
            wchar_t* start = p;
            while( ( p < pBufEnd ) && ( *p ) )
              p++;
            if( p > start )
            {
              _tprintf(_T("Path to folder where files were selected:  %s\r\n\r\n"), start );
              p++;

              int fileCount = 1;
              while( ( p < pBufEnd ) && ( *p ) )
              {
                start = p;
                while( ( p < pBufEnd ) && ( *p ) )
                  p++;
                if( p > start )
                  _tprintf(_T("%2d. %s\r\n"), fileCount, start );
                p++;
                fileCount++;
              }
            }
// </Snippet23>
         }

         {
// <Snippet24>
         static TCHAR BASED_CODE szFilter[] = _T("Chart Files (*.xlc)|*.xlc|")
            _T("Worksheet Files (*.xls)|*.xls|Data Files (*.xlc;*.xls)|")
            _T("*.xlc; *.xls|All Files (*.*)|*.*||");
// </Snippet24>
         }

         {
            CMyClass mc;
            mc.OnFileOpen();
         }

// <Snippet26>
         ASSERT(CFileException::ErrnoToException(EACCES) == 
            CFileException::accessDenied);
// </Snippet26>

// <Snippet27>
         ASSERT(CFileException::OsErrorToException(ERROR_ACCESS_DENIED) == 
            CFileException::accessDenied);
// </Snippet27>

         try
         {
// <Snippet28>
            CFileException::ThrowErrno(EACCES);  // "access denied"
// </Snippet28>
         }
         catch (CFileException* pfe)
         {
            pfe->Delete();         
         }

         try
         {
// <Snippet29>
            CFileException::ThrowOsError(ERROR_ACCESS_DENIED);  // "access denied"         
// </Snippet29>
         }
         catch (CFileException* pfe)
         {
            pfe->Delete();         
         }

// <Snippet30>
         try
         {
            CFile f(_T("M_Cause_File.dat"), CFile::modeWrite);
         }
         catch(CFileException* e)
         {
            if( e->m_cause == CFileException::fileNotFound)
               TRACE(_T("ERROR: File not found\n"));
            e->Delete();
         }
// </Snippet30>

         {
// <Snippet31>
            CFileFind finder;
            BOOL bWorking = finder.FindFile(_T("*.*"));
            while (bWorking)
            {
               bWorking = finder.FindNextFile();
               TRACE(_T("%s\n"), (LPCTSTR)finder.GetFileName());
            } 
// </Snippet31>
         }

         {
// <Snippet32>
            CFileFind finder;
            static const TCHAR szFileToFind[] = _T("C:\\WINDOWS\\SYSTEM.INI");

            BOOL bResult = finder.FindFile(szFileToFind);

            if (bResult)
            {
               finder.FindNextFile();

               TRACE(_T("Root of %s is %s\n"), szFileToFind, 
                  (LPCTSTR)finder.GetRoot());

               TRACE(_T("Title of %s is %s\n"), szFileToFind, 
                  (LPCTSTR)finder.GetFileTitle());

               TRACE(_T("Path of %s is %s\n"), szFileToFind,
                  (LPCTSTR)finder.GetFilePath());

               TRACE(_T("URL of %s is %s\n"), szFileToFind,
                  (LPCTSTR)finder.GetFileURL());

               TRACE(_T("Name of %s is %s\n"), szFileToFind,
                  (LPCTSTR)finder.GetFileName());

               finder.Close();
            }
            else
            {
               TRACE(_T("You have no %s file.\n"), szFileToFind);
            }
// </Snippet32>
         }

         {
// <Snippet33>
            // This code fragment prints out a very verbose directory
            // listing for all the files in the root directory on the
            // C: drive. After the file's name, each attribute of the
            // file is printed, as are the creation, last access, and 
            // last write times.

            CFileFind finder;

            BOOL bWorking = finder.FindFile(_T("C:\\*.*"));

            while (bWorking)
            {
               bWorking = finder.FindNextFile();

               _tprintf_s(_T("%s\n\t"), (LPCTSTR)finder.GetFileName());
               _tprintf_s(_T("%c"), finder.IsArchived()   ? 'A' : 'a');
               _tprintf_s(_T("%c"), finder.IsCompressed() ? 'C' : 'c');
               _tprintf_s(_T("%c"), finder.IsHidden()     ? 'H' : 'h');
               _tprintf_s(_T("%c"), finder.IsNormal()     ? 'N' : 'n');
               _tprintf_s(_T("%c"), finder.IsReadOnly()   ? 'R' : 'r');
               _tprintf_s(_T("%c"), finder.IsSystem()     ? 'S' : 's');
               _tprintf_s(_T("%c"), finder.IsTemporary()  ? 'T' : 't');

               _tprintf_s(_T("\t%I64u byte(s)\n"), finder.GetLength());
               
               CTime tempTime;
               CString str;
               
               _tprintf_s(_T("\tCreated    : "));
               if (finder.GetCreationTime(tempTime))
               {
                  str = tempTime.Format(_T("%c"));
                  _tprintf_s(_T("%s\n"), (LPCTSTR) str);
               }
               else
               {
                  _tprintf_s(_T("(unavailable)\n"));
               }

               _tprintf_s(_T("\tLast Access: "));
               if (finder.GetLastAccessTime(tempTime))
               {
                  str = tempTime.Format(_T("%c"));
                  _tprintf_s(_T("%s\n"), (LPCTSTR) str);
               }
               else
               {
                  _tprintf_s(_T("(unavailable)\n"));
               }

               _tprintf_s(_T("\tLast Write : "));
               if (finder.GetLastWriteTime(tempTime))
               {
                  str = tempTime.Format(_T("%c"));
                  _tprintf_s(_T("%s\n"), (LPCTSTR) str);
               }
               else
               {
                  _tprintf_s(_T("(unavailable)\n"));
               }

               _tprintf_s(_T("\n"));
            } 
// </Snippet33>
         }

         PrintDirs();

         {
// <Snippet35>         
            // This code fragment shows all of the files in the root directory
            // of drive C: which have either the hidden attribute or the system
            // attribute, or both.

            CFileFind finder;

            BOOL bWorking = finder.FindFile(_T("C:\\*.*"));

            while (bWorking)
            {
               bWorking = finder.FindNextFile();

               if (finder.MatchesMask(FILE_ATTRIBUTE_HIDDEN | 
                  FILE_ATTRIBUTE_SYSTEM))
               {
                  _tprintf_s(_T("%s\n"), (LPCTSTR) finder.GetFileName());
               }
            }
// </Snippet35>
         }

         {
// <Snippet36>
            CMemFile f; // Ready to use - no Open necessary.

            BYTE * pBuf = (BYTE *)new char [1024];
            CMemFile g(pBuf, 1024, 256);
            // same as CMemFile g; g.Attach(pBuf, 1024, 256);
// </Snippet36>
            delete pBuf;
         }

         {
// <Snippet37>
            TCHAR* pFileName = _T("CStdio_File.dat");
            CStdioFile f1;
            if(!f1.Open(pFileName, CFile::modeCreate | CFile::modeWrite 
               | CFile::typeText)) 
            {
               TRACE(_T("Unable to open file\n"));
            }

            CStdioFile f2(stdout);
            try
            {
               CStdioFile f3( pFileName,
                  CFile::modeCreate | CFile::modeWrite | CFile::typeText );
            }
            catch(CFileException* pe)
            {
               TRACE(_T("File could not be opened, cause = %d\n"),
                  pe->m_cause);
               pe->Delete();
            }
// </Snippet37>
         }

         {
// <Snippet38>
            CStdioFile f(stdin);
            TCHAR buf[100];

            f.ReadString(buf, 99);
// </Snippet38>
         }

         {
// <Snippet39>
            CStdioFile cfile(_T("Stdio_Seek_File.dat"), CFile::modeWrite |
               CFile::modeCreate);
            LONGLONG lOff = 1000;
            ULONGLONG lActual = cfile.Seek(lOff, CFile::begin);
// </Snippet39>
            UNREFERENCED_PARAMETER(lActual);
         }

         {
// <Snippet40>
            CStdioFile f(stdout);
            TCHAR buf[] = _T("test string");

            f.WriteString(buf);
// </Snippet40>
         }

         {
// <Snippet41>
            // Retrieve the current time
            CFileTime myFT;
            myFT = CFileTime::GetCurrentTime();
// </Snippet41>
         }

         {
// <Snippet42>
            // Convert a UTC time to local file time format
            CFileTime myUTC_FT, myL_FT;
            // Get system time (in UTC format)
            myUTC_FT = CFileTime::GetCurrentTime();
            // Convert to local file time
            myL_FT = myUTC_FT.UTCToLocal();         
// </Snippet42>
         }

         {
// <Snippet43>
            // Test for one time less than another
            // Declare the CFileType objects
            CFileTime myFT1, myFT2;

            // Obtain the first time value
            myFT1 = CFileTime::GetCurrentTime();

            // Pause for a moment...
            Sleep(1000);

            // Obtain the second time value
            myFT2 = CFileTime::GetCurrentTime();

            // Perform the comparison
            if (myFT1 < myFT2)
               _tprintf_s(_T("Time is going in the correct direction.\n"));
            else
               _tprintf_s(_T("Oh dear. Time is going backwards.\n"));
// </Snippet43>
         }

         {
// <Snippet44>
            // Calculate the difference between two times
            CFileTime myFT1, myFT2;
            CFileTimeSpan myFTS;

            // Get the first time
            myFT1 = CFileTime::GetCurrentTime();

            // Pause for a moment
            UINT randVal;
            rand_s(&randVal);
            Sleep(randVal % 10000);

            // Get the second time
            myFT2 = CFileTime::GetCurrentTime();

            // Calculate the time difference
            myFTS = myFT2 - myFT1;

            // Measure the difference
            if (myFTS.GetTimeSpan() < CFileTime::Minute)
               printf_s("Less than a minute passed\n");
            else
               printf_s("A minute or more passed\n");

            if (myFTS.GetTimeSpan() < CFileTime::Second)
               printf_s("Less than a second passed\n");
            else
               printf_s("A second or more passed\n");

            if (myFTS.GetTimeSpan() < CFileTime::Millisecond)
               printf_s("Less than a millisecond passed\n");
            else
               printf_s("A millisecond or more passed\n");
// </Snippet44>
         }
      }
   }

   return nRetCode;
}
