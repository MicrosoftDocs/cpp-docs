// NVC_MFC_Utilities.cpp : Defines the entry point for the console application.
//
// Topic                                     Snippet
// Memory Management: Examples					1 - 9
// Memory Management: Frame Allocation			10
// CCriticalSection::Lock                    11
// CDumpContext::CDumpContext                12
// CDumpContext::DumpAsHex                   13
// CDumpContext::Flush                       14
// CDumpContext::HexDump                     15
// CDumpContext::SetDepth                    16
// CDumpContext::operator<<                  17
// CMemoryState::CMemoryState                18
// CMemoryState::DumpStatistics              40 - 42
// CSingleLock::CSingleLock                  19
// CSingleLock::IsLocked                     20
// CSingleLock::Lock                         21
// CSingleLock::Unlock                       22
// afxDump                                   23
// AfxEnableMemoryTracking                   24
// AfxFormatString1                          25
// AfxFormatString2                          26
// AfxIsMemoryBlock                          27
// AfxIsValidAddress                         28
// AfxIsValidString                          29
// afxMemDF                                  30
// ASSERT                                    43 - 44
// DEBUG_ONLY                                32
// ENSURE                                    33
// HashKey                                   34
// ISAPIASSERT                               31
// THIS_FILE                                 35
// AfxVerifyLicFile                          36
// POINT Structure                           37
// RECT Structure                            38
// SYSTEMTIME Structure                      39
// CEvent Class                              45 - 46
// Standard Command and Window IDs           47
// AfxExtractSubString                       48

#include "stdafx.h"
#include <afxmt.h>
#include <atlutil.h>
#include "resource.h"
#include "myclass.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// <Snippet31>
// For custom assert and trace handling with WebDbg
#ifdef _DEBUG
CDebugReportHook g_ReportHook;
#endif
// </Snippet31>

// <Snippet35>
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// __FILE__ is one of the six predefined ANSI C macros that the 
// compiler recognizes. 
// </Snippet35>

// The one and only application object

CWinApp theApp;

using namespace std;

IMPLEMENT_DYNAMIC(CAge, CObject)
IMPLEMENT_DYNCREATE(CMyClass, CObject)
IMPLEMENT_DYNAMIC(CPerson, CObject)

// <Snippet40>
static CMemoryState oldstate, newstate, diffstate;
// </Snippet40>

class CMyWinApp
{
public:
   BOOL InitInstance();
};

// <Snippet24>
BOOL CMyWinApp::InitInstance()
{
#ifdef _DEBUG
   // Disable tracking of memory for the scope of the InitInstance()
   AfxEnableMemoryTracking(FALSE);
#endif  // _DEBUG

   // ...

#ifdef _DEBUG
   // Re-enable tracking of memory
   AfxEnableMemoryTracking(TRUE);
#endif  // _DEBUG

   return TRUE;
}
// </Snippet24>

// <Snippet25>
void DisplayFileNotFoundMessage(LPCTSTR pszFileName)
{
   CString strMessage;

   // The IDS_FILENOTFOUND string resource contains "Error: File %1 not found"
   AfxFormatString1(strMessage, IDS_FILENOTFOUND, pszFileName);
   // In the previous call, substitute the actual file name for the
   // %1 placeholder
   AfxMessageBox(strMessage);  // Display the error message
}
// </Snippet25>

// <Snippet26>
void DisplayFileNotFoundMessage(LPCTSTR pszFileName, LPCTSTR pszDirectory)
{
   CString strMessage;

   // The IDS_FILENOTFOUND string resource contains "Error: File %1 not 
   // found in directory %2"
   AfxFormatString2(strMessage, IDS_FILENOTFOUND2, pszFileName, pszDirectory);
   // In the previous call, substitute the actual file and directory 
   // names into the message string
   AfxMessageBox(strMessage);  // Display the error message
}
// </Snippet26>

// disable assignment within conditional expression for this func
#pragma warning(push)
#pragma warning(disable : 4706)
//<Snippet32>
void ExampleFunc(char* p, int size, char fill)
{
   char* q;               // working copy of pointer 
   VERIFY(q = p);         // copy buffer pointer and validate
   ASSERT(size >= 100);   // make sure buffer is at least 100 bytes
   ASSERT(isalpha(fill)); // make sure fill character is alphabetic
   // if fill character is invalid, substitute 'X' so we can continue
   // debugging after the preceding ASSERT fails.
   DEBUG_ONLY(fill = (isalpha(fill)) ? fill : 'X');
}
// </Snippet32>
#pragma warning(pop)

// // <Snippet33>
void CMyClass::Open(CMyObject* pMyObject)
{
   ENSURE_VALID(pMyObject); 
   ENSURE(m_CubeLen > 0);
   pMyObject->DoSomething();
}
// </Snippet33>

// <Snippet34>
template <> UINT AFXAPI HashKey(unsigned __int64 key)
{
   // Generate the hash value by XORing the lower 32 bits of the number 
   // with the upper 32 bits
   return(UINT(key) ^ UINT(key >> 32));
}
// </Snippet34>

// <Snippet4>
struct MyStructType { int topScore; };
void MyFunc()
{
    // Frame allocation
    MyStructType myStruct;

    // Use the struct 
    myStruct.topScore = 297;

    // Reclaimed when exiting scope
}
// </Snippet4>


// <Snippet10>
void MyFunction()
{
    // Local object created on the stack
    CString strName;
    // Object goes out of scope and is deleted as function ends
}
// </Snippet10>

// <Snippet45>
// The following demonstrates trivial usage of the CEvent class.
// A CEvent object is created and passed as a parameter to another 
// thread.  The other thread will wait for the event to be signaled
// and then exit

UINT __cdecl MyThreadProc(LPVOID lpParameter)
{
   CEvent* pEvent = (CEvent*)(lpParameter);
   VERIFY(pEvent != NULL);

   // Wait for the event to be signaled
   ::WaitForSingleObject(pEvent->m_hObject, INFINITE);

   // Terminate the thread
   ::AfxEndThread(0, FALSE); 
   return 0L;
}

void CEvent_Test()
{
   // Create the CEvent object that will be passed to the thread routine
   CEvent* pEvent = new CEvent(FALSE, FALSE);

   // Create a thread that will wait on the event
   CWinThread* pThread;
   pThread = ::AfxBeginThread(&MyThreadProc, pEvent, 0, 0, CREATE_SUSPENDED, NULL);
   pThread->m_bAutoDelete = FALSE; 
   pThread->ResumeThread();

   // Signal the thread to do the next work item
   pEvent->SetEvent();

   // Wait for the thread to consume the event and return
   ::WaitForSingleObject(pThread->m_hThread, INFINITE); 
   delete pThread;
   delete pEvent;
}
// </Snippet45>

// <Snippet46>
// This example builds upon the previous one.
// A second thread is created to calculate prime numbers.
// The main thread will signal the second thread to calulate the next 
// prime number in the series.  The second thread signals the first 
// after each number is calculated. Finally, after several iterations 
// the worker thread is signaled to terminate.

class CPrimeTest
{
public:
   CPrimeTest()
      : m_pCalcNext(new CEvent(FALSE, FALSE))
      , m_pCalcFinished(new CEvent(FALSE, FALSE))
      , m_pTerminateThread(new CEvent(FALSE, FALSE))
      , m_iCurrentPrime(0)
   {   
      // Create a thread that will calculate the prime numbers
      CWinThread* pThread;
      pThread = ::AfxBeginThread(&PrimeCalcProc, this, 0, 0, CREATE_SUSPENDED, NULL);
      pThread->m_bAutoDelete = FALSE; 
      pThread->ResumeThread();

      // Calcuate the first 10 prime numbers in the series on the thread
      for(UINT i = 0; i < 10; i++)
      {
         // Signal the thread to do the next work item
         m_pCalcNext->SetEvent();
         // Wait for the thread to complete the current task
         ::WaitForSingleObject(m_pCalcFinished->m_hObject, INFINITE);
         // Print the result
         TRACE(_T("The value of m_iCurrentPrime is: %d\n"), m_iCurrentPrime);
      }

      // Notify the worker thread to exit and wait for it to complete
      m_pTerminateThread->SetEvent();
      ::WaitForSingleObject(pThread->m_hThread, INFINITE); 
      delete pThread;
   }
   ~CPrimeTest()
   {
      delete m_pCalcNext;
      delete m_pCalcFinished;
      delete m_pTerminateThread;
   }

private:
   // Determines whether the given number is a prime number
   static BOOL IsPrime(INT ThisPrime)
   {
      if(ThisPrime < 2) 
         return FALSE;

      for(INT n = 2; n < ThisPrime; n++)
      {
         if(ThisPrime % n == 0)
            return FALSE;
      }
      return TRUE;
   }

   // Calculates the next prime number in the series
   static INT NextPrime(INT ThisPrime)
   {
      while(TRUE)
      {
         if(IsPrime(++ThisPrime))
         {
            return ThisPrime;
         }
      }
   }

   // Worker thread responsible for calculating the next prime
   // number in the series
   static UINT __cdecl PrimeCalcProc(LPVOID lpParameter)
   {
      CPrimeTest* pThis = static_cast<CPrimeTest*>(lpParameter);
      VERIFY(pThis != NULL);

      VERIFY(pThis->m_pCalcNext != NULL);
      VERIFY(pThis->m_pCalcFinished != NULL);
      VERIFY(pThis->m_pTerminateThread != NULL);
      
      // Create a CMultiLock object to wait on the various events
      // WAIT_OBJECT_0 refers to the first event in the array, WAIT_OBJECT_0+1 refers to the second
      CSyncObject* pWaitObjects[] = { pThis->m_pCalcNext, pThis->m_pTerminateThread };
      CMultiLock MultiLock(pWaitObjects, 2L);
      while(MultiLock.Lock(INFINITE, FALSE) == WAIT_OBJECT_0) 
      {         
         // Calculate next prime
         pThis->m_iCurrentPrime = NextPrime(pThis->m_iCurrentPrime);
         // Notify main thread calculation is complete
         pThis->m_pCalcFinished->SetEvent();
       } 

      // Terminate the thread
       ::AfxEndThread(0, FALSE); 
      return 0L;
   }

   CEvent* m_pCalcNext;      // notifies worker thread to calculate next prime
   CEvent* m_pCalcFinished;   // notifies main thread current calculation is complete
   CEvent* m_pTerminateThread;   // notifies worker thread to terminate
   
   INT m_iCurrentPrime;   // current calculated prime number
};
// </Snippet46>

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(argv);
   UNREFERENCED_PARAMETER(envp);

// <Snippet41>
   oldstate.Checkpoint();
// </Snippet41>

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
#pragma warning(disable : 4101) // C4101: unreferenced local variable
// <Snippet1>
      {
         const int BUFF_SIZE = 128; 

         // Allocate on the frame
         char myCharArray[BUFF_SIZE];
         int myIntArray[BUFF_SIZE];
         // Reclaimed when exiting scope 
      }
// </Snippet1>

      {
// <Snippet2>
         const int BUFF_SIZE = 128;

         // Allocate on the heap
         char* myCharArray = new char[BUFF_SIZE]; 
         int* myIntArray = new int[BUFF_SIZE];
// </Snippet2>

// <Snippet3>
         delete [] myCharArray;
         delete [] myIntArray;
// </Snippet3>
      }

      {
// <Snippet5>
         // Heap allocation
         MyStructType* myStruct = new MyStructType;

         // Use the struct through the pointer ...
         myStruct->topScore = 297;

         delete myStruct;	
// </Snippet5>
      }

// <Snippet6>
      {
         CMyClass myClass;     // Automatic constructor call here

         myClass.SomeMemberFunction();     // Use the object
      }
// </Snippet6>

      {
// <Snippet7>
         // Automatic constructor call here
         CMyClass* myClass = new CMyClass;  

         myClass->SomeMemberFunction();  // Use the object

         delete myClass;  // Destructor invoked during delete
// </Snippet7>
      }
   
      {
// <Snippet8>
         CMyClass myClass("Joe Smith");
// </Snippet8>
      }

      {
// <Snippet9>
         CMyClass* myClass = new CMyClass("Joe Smith");
// </Snippet9>
         delete myClass;
      }

      MyFunc();

      // CDumpContext snippets

      {
// <Snippet12>
         CFile f;
         if (!f.Open(_T("dump.txt"), CFile::modeCreate | CFile::modeWrite)) 
         {
            AFXDUMP(_T("Unable to open file\n"));
            exit(1);
         }
         CDumpContext dc(&f);      
// </Snippet12>
      }

// <Snippet13>
      #if _DEBUG
         afxDump.DumpAsHex(115);      
      #endif
// </Snippet13>

// <Snippet14>
      #if _DEBUG
         afxDump.Flush();
      #endif
// </Snippet14>


      {
// <Snippet15>
         #if _DEBUG
            TCHAR test[] = _T("This is a test of CDumpContext::HexDump\n");
            afxDump.HexDump(_T("."), (BYTE*)test, sizeof(test), 20);
         #endif
// </Snippet15>
      }

// <Snippet16>
      #if _DEBUG
         afxDump.SetDepth(1);  // Specifies deep dump
         ASSERT(afxDump.GetDepth() == 1);      
      #endif
// </Snippet16>

      {
// <Snippet17>
         #if _DEBUG
            CStringList li;
            li.AddHead(_T("item 0"));
            li.AddHead(_T("item 1"));
            CString s = _T("test");
            int i = 7;
            long lo = 1000000000L;
            LONGLONG lolo = 12345678901234i64;
            afxDump << _T("list=") << &li << _T("string=")
               << s << _T("int=") << i << _T("long=") << lo 
               << _T("LONGLONG=") << lolo << _T("\n");
         #endif
// </Snippet17>
      }

      {
// <Snippet18>
         CMemoryState msOld;
         msOld.Checkpoint();
         CPerson* pper1 = new CPerson();
         CPerson* pper2 = new CPerson();
         msOld.DumpAllObjectsSince();               
// </Snippet18>
         delete pper1;
         delete pper2;
      }

      CLocking cl;
      cl.UseCritSect();
      cl.IsLockedMutex();
      cl.LockMutex();

      {
// <Snippet23>
      // example for afxDump
      CPerson* pMyPerson = new CPerson;
      // set some fields of the CPerson object...
      //..
      // now dump the contents
      #ifdef _DEBUG
      afxDump << _T("Dumping myPerson:\n");
      pMyPerson->Dump(afxDump);
      afxDump << _T("\n");
      #endif
// </Snippet23>  
      delete pMyPerson;
      }

      {
// <Snippet27>
      CAge* pcage = new CAge(21); // CAge is derived from CObject.
      ASSERT(AfxIsMemoryBlock(pcage, sizeof(CAge)));
// </Snippet27>

      delete pcage;
      }

      {
// <Snippet28>
      // Allocate a 5 character array, which should have a valid memory address.
      char* arr = new char[5];

      // Create a null pointer, which should be an invalid memory address.
      char* null = (char*)0x0;

      ASSERT(AfxIsValidAddress(arr, 5));
      ASSERT(!AfxIsValidAddress(null, 5));
// </Snippet28>
      delete [] arr;
      }

      {
// <Snippet29>
      // Create a character string which should be valid.
      char str[12] = "hello world";

      // Create a null pointer, which should be an invalid string.
      char* null = (char*)0x0;

      ASSERT(AfxIsValidString(str, 12));
      ASSERT(!AfxIsValidString(null, 5));   
// </Snippet29>
      }

      {
// <Snippet30>
      afxMemDF = allocMemDF | checkAlwaysMemDF;   
// </Snippet30>
      }

      CMyWinApp mwa;
      mwa.InitInstance();

      DisplayFileNotFoundMessage(_T("Thingy.thg"));
      DisplayFileNotFoundMessage(_T("Thingy.thg"), _T("c:\\temp"));

      {
         TCHAR* pszLicFileContents = _T("Some stuff.");
// <Snippet36>
         _tcslen(pszLicFileContents);
// </Snippet36>
      }

      {
// <Snippet37>
      //Alternate ways to initialize a POINT structure:

      POINT ptA;
      ptA.x = 370;
      ptA.y = 550;

      POINT ptB = {370,550};   
// </Snippet37>
      ptB;
      }

      {
// <Snippet38>
      //Alternate ways to intialize a RECT structure:

      RECT rctA;
      rctA.left = 20;  
      rctA.top = 30;  
      rctA.right  = 180;  
      rctA.bottom = 230;

      RECT rctB = {20,30,180,230};   
// </Snippet38>
      rctB;
      }

      {
// <Snippet39>
      // Retrieves the current system date and time.  The system 
      // time is expressed in Coordinated Universal Time (UTC). 
      SYSTEMTIME systime;
      GetSystemTime(&systime);

      // Determine day of the week.
      CString day;
      switch (systime.wDayOfWeek)
      {
         case 0:
            day = _T("Sunday");
         break;

         case 1:
            day = _T("Monday");
         break;

         case 2:
            day = _T("Tuesday");
         break;

         case 3:
            day = _T("Wednesday");
         break;

         case 4:
            day = _T("Thursday");
         break;

         case 5:
            day = _T("Friday");
         break;

         case 6:
            day = _T("Saturday");
         break;
      }

      // Show the time in a message box.
      CString str;
      str.Format(_T("%s %u/%u/%u  %u:%u:%u:%u"), day,
         systime.wYear, systime.wMonth, systime.wDay,
         systime.wHour, systime.wMinute, systime.wSecond,
         systime.wMilliseconds);

      AfxMessageBox(str);
// </Snippet39>
      }

// <Snippet42>
      newstate.Checkpoint();
      if (diffstate.Difference(oldstate, newstate))
      {
         TRACE(_T("Memory leaked\n"));
         diffstate.DumpStatistics();
      }
// </Snippet42>

      {
// <Snippet44>
      CAge* pcage = new CAge(21); // CAge is derived from CObject.
      ASSERT(pcage != NULL);
      ASSERT(pcage->IsKindOf(RUNTIME_CLASS(CAge)));
      // Terminates program only if pcage is NOT a CAge*.   
// </Snippet44>
      }

      {
      char ach[256];
      ExampleFunc(ach, 256, '9');
      }

      {
      CMyObject obj;
      CMyClass cls;
      cls.Open(&obj);
      }

      {
      UINT64 key = 0xf0f0f0f0ffffffff;
      UINT hash = HashKey(key);
      hash;
      }

      {
      CMyCritSectClass csc;
      csc.SomeMethod();
      }

      CEvent_Test();

      CPrimeTest();

      {
// <Snippet48>
      // The following example extracts a series of name, value pairs from a
      // given source string:
       
      // Input string consisting of a number of name, value pairs
      LPCTSTR lpszSource = _T("\"Name\"=\"John Smith\"\n")
         _T("\"Company\"=\"Contoso, Ltd\"\n\"Salary\"=\"25,000\"");

      CString strNameValue; // an individual name, value pair

      int i = 0; // substring index to extract
      while (AfxExtractSubString(strNameValue, lpszSource, i))
      {
         // Prepare to move to the next substring
         i++;

         CString strName, strValue; // individual name and value elements

         // Attempt to extract the name element from the pair
         if (!AfxExtractSubString(strName, strNameValue, 0, _T('=')))
         {
            // Pass an error message to the debugger for display
            OutputDebugString(_T("Error extracting name\r\n"));
            continue;
         }

         // Attempt to extract the value element from the pair
         if (!AfxExtractSubString(strValue, strNameValue, 1, _T('=')))
         {
            // Pass an error message to the debugger for display
            OutputDebugString(_T("Error extracting value element\r\n"));
            continue;
         }

         // Pass the name, value pair to the debugger for display
         CString strOutput = strName + _T(" equals ") + strValue + _T("\r\n");
         OutputDebugString(strOutput);
      }
// </Snippet48>
      }

   }

	return nRetCode;
}