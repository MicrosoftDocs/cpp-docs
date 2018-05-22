// <snippet1>
// migration-lwt.cpp
// compile with: /EHsc
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
// <snippet2>
#include <concrt.h>
// </snippet2>

// <snippet3>
using namespace concurrency;
// </snippet3>

#define BUF_SIZE 255

// <snippet4>
void __cdecl MyThreadFunction(LPVOID param);
// </snippet4>

// Data structure for threads to use.
// <snippet5>
typedef struct MyData {
    int val1;
    int val2;
    event signal;
} MYDATA, *PMYDATA;
// </snippet5>

int _tmain()
{
   // Allocate memory for thread data.
   PMYDATA pData = (PMYDATA) HeapAlloc(GetProcessHeap(), 
      HEAP_ZERO_MEMORY, sizeof(MYDATA));

   if( pData == NULL )
   {
      ExitProcess(2);
   }

   // Set the values of the thread data.
   pData->val1 = 50;
   pData->val2 = 100;

   // Create the thread to begin execution on its own.
// <snippet6>
   CurrentScheduler::ScheduleTask(MyThreadFunction, pData);
// </snippet6>

// <snippet7>
   // Wait for the task to finish.
   pData->signal.wait();
// </snippet7>

   // Free memory allocation.
   HeapFree(GetProcessHeap(), 0, pData);

   return 0;
}

// <snippet8>
void __cdecl MyThreadFunction(LPVOID lpParam)
// </snippet8>
{
   PMYDATA pData = (PMYDATA)lpParam;

   // Use thread-safe functions to print the parameter values.

   TCHAR msgBuf[BUF_SIZE];
   StringCchPrintf(msgBuf, BUF_SIZE, TEXT("Parameters = %d, %d\n"), 
     pData->val1, pData->val2); 

   size_t cchStringSize;
   StringCchLength(msgBuf, BUF_SIZE, &cchStringSize);

   DWORD dwChars;
   WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), msgBuf, (DWORD)cchStringSize, &dwChars, NULL);

// <snippet9>
   pData->signal.set();
// </snippet9>
}
// </snippet1>