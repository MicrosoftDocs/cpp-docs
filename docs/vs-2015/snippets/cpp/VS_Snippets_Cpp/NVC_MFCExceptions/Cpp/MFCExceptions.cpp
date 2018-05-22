// MFCExceptions.cpp : Defines the entry point for the console application.
//
// This project implements a number of snippets to show various aspects of
// MFC Exception handling.
//
// Topic													               Snippets
// Exceptions: Changes to Exception Macros in Version 3.0	1, 19, 20, 2
// Exceptions: Catching and Deleting Exceptions				   3 - 5
// Exceptions: Converting from MFC Exception Macros			6 - 9
// Exceptions: Using MFC Macros and C++ Exceptions			   10 - 12
// Exceptions: Examining Exception Contents					   13
// Exceptions: Freeing Objects in Exceptions				      14 - 16
// Exceptions: Throwing Exceptions from Your Own Functions  17 - 18
// CException::Delete                                       21
// CException::GetErrorMessage                              22
// CException::ReportError                                  23
// CUserException Class                                     24
// AfxThrowOleDispatchException                             25
// CATCH                                                    26

#include "stdafx.h"
#include "MFCExceptions.h"
#include "MMSystem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object

CWinApp theApp;

using namespace std;

void UseMacroExceptions()
{
   bool m_bPassExceptionsUp = false;
   bool m_bReturnFromThisFunction = true;

// <Snippet8>
   TRY
   {
      // Do something to throw an exception.
      AfxThrowUserException();
   }
// <Snippet6>
   CATCH(CException, e)
// </Snippet6>
   {
      if (m_bPassExceptionsUp)
         THROW_LAST();

      if (m_bReturnFromThisFunction)
         return;

      // Not necessary to delete the exception e.
   }
   END_CATCH
// </Snippet8>
}

void UseKeywordExceptions()
{
   bool m_bPassExceptionsUp = false;
   bool m_bThrowDifferentException = false;
   bool m_bReturnFromThisFunction = true;

// <Snippet9>
   try
   {
      // Do something to throw an exception.
      AfxThrowUserException();
   }
// <Snippet7>
   catch(CException* e)
// </Snippet7>
   {
      if (m_bPassExceptionsUp)
         throw;

      if (m_bThrowDifferentException)
      {
         e->Delete();
         throw new CMyOtherException;
      }

      if (m_bReturnFromThisFunction)
      {
         e->Delete();
         return;
      }

      e->Delete();
   }
// </Snippet9>
}

class Wrapper1
{
public:
// <Snippet14>
   void SomeFunc()        // Problematic code
   {
      CPerson* myPerson = new CPerson;

      // Do something that might throw an exception.
      myPerson->SomeFunc();

      // Now destroy the object before exiting.
      // If SomeFunc above throws an exception this code will
      // not be reached and myPerson will not be deleted.
      delete myPerson;
   }
// </Snippet14>
};

class Wrapper2
{
public:
// <Snippet15>
   void SomeFunc()
   {
      CPerson* myPerson = new CPerson;

      try
      {
         // Do something that might throw an exception.
         myPerson->SomeFunc();
      }
      catch( CException* e )
      {
         // Handle the exception locally
         e->Delete();
      }

      // Now destroy the object before exiting.
      delete myPerson;
   }
// </Snippet15>
};

class Wrapper3
{
public:
// <Snippet16>
   void SomeFunc()
   {
      CPerson* myPerson = new CPerson;

      try
      {
         // Do something that might throw an exception.
         myPerson->SomeFunc();
      }
      catch( CException* e )
      {
         e->ReportError();
          // Destroy the object before passing exception on.
         delete myPerson;
         // Throw the exception to the next handler.
         throw;
      }

      // On normal exits, destroy the object.
      delete myPerson;
   }
// </Snippet16>
};

#define SIZE_FIRST 16
#define SIZE_SECOND 32

void MemoryExceptionFunc()
// <Snippet17>
{
    char* p1 = (char*)malloc( SIZE_FIRST );
    if( p1 == NULL )
        AfxThrowMemoryException();
    char* p2 = (char*)malloc( SIZE_SECOND );
    if( p2 == NULL )
    {
        free( p1 );
        AfxThrowMemoryException();
    }
    
    // ... Do something with allocated blocks ...

    // In normal exit, both blocks are deleted.
    free( p1 );
    free( p2 );
}
// </Snippet17>

void WaveErrorFunc()
{
// <Snippet18>
   #define WAVE_ERROR -5
   {
      // This Win32 API returns 0 if the sound cannot be played.
      // Throw an integer constant if it fails.
      if( !PlaySound(_T("SIREN.WAV"), NULL, SND_ASYNC) )
         throw WAVE_ERROR;
   }
// </Snippet18>
}

// <Snippet24>
void DoSomeOperation()
{
   // Processing
   // If something goes wrong...
   AfxMessageBox(_T("The x operation failed"));
   AfxThrowUserException();
}

BOOL TrySomething()
{
   try
   {
      // Could throw a CUserException or other exception.
      DoSomeOperation(); 
   }
   catch(CUserException* pe)
   {
      pe->Delete();
      return FALSE;    // User already notified.
   }
   catch(CException* pe)
   {
      // For other exception types, notify user here.
      pe->ReportError();
      return FALSE;
   }
   return TRUE;   // No exception thrown.
}
// </Snippet24>

class CStrArrayDoc
{
public:
   CStrArrayDoc() {}
   long Sort(VARIANT* vArray);
};

// <Snippet25>
// Sort is method of automation class CStrArrayDoc
long CStrArrayDoc::Sort(VARIANT* vArray)
{
   USES_CONVERSION;

   // Type check VARIANT parameter. It should contain a BSTR array
   // passed by reference. The array must be passed by reference; it is
   // an in-out-parameter.

   // throwing COleDispatchException allows the EXCEPINFO structure of 
   // IDispatch::Invoke() to set
   if (V_VT(vArray) != (VT_ARRAY | VT_BSTR))
      AfxThrowOleDispatchException(1001, 
         _T("Type Mismatch in Parameter. Pass a string array by reference"));

   // ...
   // ...

   return 0;
}
// </Snippet25>

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
// <Snippet1>
      TRY
      {
// <Snippet19>
         THROW( (CException*) new CCustomException() );
// </Snippet19>
      }
      CATCH( CCustomException, e )
      {
         TRACE( "MFC 2.x will land here\n" );
      }
      AND_CATCH( CException, e )
      {
         TRACE( "MFC 3.0 will land here\n" );
      }
      END_CATCH
// </Snippet1>

// <Snippet2>
      TRY
      {
         // Do something to throw an exception.
         AfxThrowUserException();
      }
      CATCH( CException, e )
      {
         THROW( e );    // Wrong. Use THROW_LAST() instead
      }
      END_CATCH
   }
// </Snippet2>

   UseMacroExceptions();

   UseKeywordExceptions();

   bool m_bThrowExceptionAgain = false;
   try
   {
      AfxThrowUserException();
   }
// <Snippet3>
   catch(CException* e)
   {
      if (m_bThrowExceptionAgain)
         throw; // Do not delete e
      else 
         e->Delete();
   }
// </Snippet3>

// <Snippet4>
   try
   {
      // Execute some code that might throw an exception.
      AfxThrowUserException();
   }
   catch( CException* e )
   {
      // Handle the exception here.
      // "e" contains information about the exception.
      e->Delete();
   }
// </Snippet4>

// <Snippet5>
   try
   {
      // Execute some code that might throw an exception.
      AfxThrowUserException();
   }
   catch( CMemoryException* e )
   {
      // Handle the out-of-memory exception here.
      e->Delete();
   }
   catch( CFileException* e )
   {
      // Handle the file exceptions here.
      e->Delete();
   }
   catch( CException* e )
   {
      // Handle all other types of exceptions here.
      e->Delete();
   }
// </Snippet5>

// nested TRY macros trigger C6246

// <Snippet10>
   TRY
   {
      TRY
      {
         // Do something to throw an exception.
         AfxThrowUserException();
      }
      CATCH(CException, e)  // The "inner" catch block
      {
         throw;  // Invalid attempt to throw exception
               // to the outer catch block below.
      }
      END_CATCH
   }
   CATCH(CException, e)  // The "outer" catch block
   {
       // Pointer e is invalid because
       // it was deleted in the inner catch block.
   }
   END_CATCH
// </Snippet10>

// <Snippet11>
   TRY
   {
      TRY
      {
         // Do something to throw an exception.
         AfxThrowUserException();
      }
      CATCH(CException, e)  // The "inner" catch block
      {
         THROW_LAST(); // Throw exception to the outer catch block below.
      }
      END_CATCH
   }
   CATCH(CException, e)  // The "outer" catch block
   {
       // Pointer e is valid because
       // THROW_LAST() was used.
   }
   END_CATCH
// </Snippet11>

// <Snippet12>
   TRY
   {
      // Do something to throw an exception.
      AfxThrowUserException();
   }
   CATCH(CException, e)
   {
      try
      {
         throw;  // Wrong.  Causes e (the exception 
               // being thrown) to be deleted.
      }
      catch(CException* exception)
      {
         exception->ReportError();
      }
   }
   END_CATCH
// </Snippet12>

// <Snippet13>
   try
   {
      CFile file(_T("\\this_file_should_not_exist.dat"), CFile::modeRead);
   }
   catch( CFileException* theException )
   {
      if( theException->m_cause == CFileException::fileNotFound )
         TRACE( "File not found\n" );
      theException->Delete();
   }
// </Snippet13>

   Wrapper1 w1;
   try
   {
      w1.SomeFunc();
   }
   catch (CException* e)
   {
// <Snippet20>
      e->IsKindOf(RUNTIME_CLASS(CException));
// </Snippet20>
      e->Delete();	
   }

   Wrapper2 w2;
   w2.SomeFunc();

   Wrapper3 w3;
   try 
   {
      w3.SomeFunc();
   }
   catch (CException* e)
   {
      e->Delete();	
   }

   try
   {
      MemoryExceptionFunc();
   }
   catch (CMemoryException* e)
   {
      e->Delete();	
   }

   try
   {
      WaveErrorFunc();	
   }
   catch (CException* e)
   {
      e->Delete();	
   }

// <Snippet21>
   CFile* pFile = NULL;

   // Constructing a CFile object with this override may throw
   // a CFile exception, and won't throw any other exceptions.
   // Calling CString::Format() may throw a CMemoryException,
   // so we have a catch block for such exceptions, too. Any
   // other exception types this function throws will be
   // routed to the calling function.

   // Note that this example performs the same actions as the 
   // example for CATCH, but uses C++ try/catch syntax instead
   // of using the MFC TRY/CATCH macros. This sample must use
   // CException::Delete() to delete the exception objects
   // before closing the catch block, while the CATCH example
   // implicitly performs the deletion via the macros.

   try
   {
      pFile = new CFile(_T("C:\\WINDOWS\\SYSTEM.INI"),
         CFile::modeRead | CFile::shareDenyNone);

      ULONGLONG ullLength = pFile->GetLength();

      CString str;
      str.Format(_T("Your SYSTEM.INI file is %u bytes long."), ullLength);

      AfxMessageBox(str);
   }
   catch(CFileException* pEx)
   {
      // Simply show an error message to the user.

      pEx->ReportError();
      pEx->Delete();
   }
   catch(CMemoryException* pEx)
   {
      // We can't recover from this memory exception, so we'll
      // just terminate the app without any cleanup. Normally, an
      // an application should do everything it possibly can to
      // clean up properly and _not_ call AfxAbort().

      pEx->Delete();
      AfxAbort();
   }

   // If an exception occurrs in the CFile constructor,
   // the language will free the memory allocated by new
   // and will not complete the assignment to pFile.
   // Thus, our clean-up code needs to test for NULL.

   if (pFile != NULL)
   {
      pFile->Close();
      delete pFile;
   }   
// </Snippet21>

   {
// <Snippet22>
   CFile fileInput;
   CFileException ex;

   // try to open a file for reading.
   // The file will certainly not
   // exist because there are too many explicit
   // directories in the name.

   // if the call to Open() fails, ex will be
   // initialized with exception
   // information.  the call to ex.GetErrorMessage()
   // will retrieve an appropriate message describing
   // the error, and we'll add our own text
   // to make sure the user is perfectly sure what
   // went wrong.
   
   if (!fileInput.Open(_T("\\Too\\Many\\Bad\\Dirs.DAT"), CFile::modeRead, &ex))
   {
      TCHAR   szCause[255];
      CString strFormatted;

      ex.GetErrorMessage(szCause, 255);

      // (in real life, it's probably more
      // appropriate to read this from
      //  a string resource so it would be easy to
      // localize)

      strFormatted = _T("The data file could not be opened because of this error: ");
      strFormatted += szCause;

      AfxMessageBox(strFormatted);
   }
   else
   {
      // the file was opened, so do whatever work
      // with fileInput
      // we were planning...

      fileInput.Close();
   }
// </Snippet22>
   }

   {
// <Snippet23>   
   CFile fileInput;
   CFileException ex;

   // try to open a file for reading.  
   // The file will certainly not
   // exist because there are too many explicit
   // directories in the name.

   // if the call to Open() fails, ex will be
   // initialized with exception
   // information.  the call to ex.ReportError() will
   // display an appropriate
   // error message to the user, such as
   // "\Too\Many\Bad\Dirs.DAT contains an
   // invalid path."  The error message text will be
   // appropriate for the
   // file name and error condition.

   if (!fileInput.Open(_T("\\Too\\Many\\Bad\\Dirs.DAT"), CFile::modeRead, &ex))
   {
      ex.ReportError();
   }
   else
   {
      // the file was opened, so do whatever work
      // with fileInput we were planning...

      fileInput.Close();
   }
// </Snippet23>
   }

   TrySomething();

   try
   {
      VARIANT vt;
      CStrArrayDoc sad;
      sad.Sort(&vt);
   }
   catch (COleDispatchException* pEx)
   {
      pEx->ReportError();
      pEx->Delete();   
   }

   {
// <Snippet26>
   CFile* pFile = NULL;
   // Constructing a CFile object with this override may throw
   // a CFile exception and won't throw any other exceptions.
   // Calling CString::Format() may throw a CMemoryException,
   // so we have a catch block for such exceptions, too. Any
   // other exception types this function throws will be
   // routed to the calling function.
   TRY
   {
      pFile = new CFile(_T( "C:\\WINDOWS\\SYSTEM.INI"), 
         CFile::modeRead | CFile::shareDenyNone);
      ULONGLONG dwLength = pFile->GetLength();
      CString str;
      str.Format(_T("Your SYSTEM.INI file is %I64u bytes long.") , dwLength);
      AfxMessageBox(str);
   }
   CATCH(CFileException, pEx)
   {
      // Simply show an error message to the user.
      pEx->ReportError();
   }
   AND_CATCH(CMemoryException, pEx)
   {
      // We can't recover from this memory exception, so we'll
      // just terminate the app without any cleanup. Normally, 
      // an application should do everything it possibly can to
      // clean up properly and not call AfxAbort().
      AfxAbort();
   }
   END_CATCH
   // If an exception occurs in the CFile constructor,
   // the language will free the memory allocated by new
   // and will not complete the assignment to pFile.
   // Thus, our cleanup code needs to test for NULL.
   if (pFile != NULL)
   {
      pFile->Close();
      delete pFile;
   }
// </Snippet26>
   }

   return nRetCode;
}
