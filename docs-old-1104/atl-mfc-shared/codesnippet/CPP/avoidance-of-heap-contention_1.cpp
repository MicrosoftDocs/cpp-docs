DWORD WINAPI WorkerThreadProc(void* pBase)
{
   // Declare a non-thread-safe heap just for this thread:
   CWin32Heap stringHeap(HEAP_NO_SERIALIZE, 0, 0);

   // Declare a string manager that uses the thread's heap:
   CAtlStringMgr stringMgr(&stringHeap);

   int nBase = *((int*)pBase);
   int n = 1;
   for(int nPower = 0; nPower < 10; nPower++)
   {
      // Use the thread's string manager, instead of the default:
      CString strPower(&stringMgr);

      strPower.Format(_T("%d"), n);
      _tprintf_s(_T("%s\n"), strPower);
      n *= nBase;
   }

   return(0);
}