// migration-lwt.cpp
// compile with: /EHsc
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <concrt.h>

using namespace concurrency;

#define BUF_SIZE 255

void __cdecl MyThreadFunction(LPVOID param);

// Data structure for threads to use.
typedef struct MyData {
    int val1;
    int val2;
    event signal;
} MYDATA, *PMYDATA;

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
   CurrentScheduler::ScheduleTask(MyThreadFunction, pData);

   // Wait for the task to finish.
   pData->signal.wait();

   // Free memory allocation.
   HeapFree(GetProcessHeap(), 0, pData);

   return 0;
}

void __cdecl MyThreadFunction(LPVOID lpParam)
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

   pData->signal.set();
}