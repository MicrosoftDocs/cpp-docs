// windows-threads.cpp
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>

#define BUF_SIZE 255

DWORD WINAPI MyThreadFunction(LPVOID param);

// Data structure for threads to use.
typedef struct MyData {
    int val1;
    int val2;
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
   DWORD dwThreadId;
   HANDLE hThread = CreateThread( 
      NULL,                   // default security attributes
      0,                      // use default stack size  
      MyThreadFunction,       // thread function name
      pData,                  // argument to thread function 
      0,                      // use default creation flags 
      &dwThreadId);           // returns the thread identifier 

   if (hThread == NULL) 
   {      
      ExitProcess(3);
   }

   // Wait for the thread to finish.
   WaitForSingleObject(hThread, INFINITE);

   // Close the thread handle and free memory allocation.
   CloseHandle(hThread);
   HeapFree(GetProcessHeap(), 0, pData);

   return 0;
}

DWORD WINAPI MyThreadFunction(LPVOID lpParam)
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

   return 0;
}