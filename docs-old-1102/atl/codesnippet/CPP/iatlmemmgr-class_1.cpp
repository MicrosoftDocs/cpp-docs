// Demonstrate IAtlMemMgr using the five possible
// memory function implementation classes. 

HRESULT MemoryManagerDemonstration(IAtlMemMgr& MemoryManager) throw()
{
   // The IAtlMemMgr interface guarantees not to throw exceptions
   // so we can make the same guarantee for this function
   // without adding exception handling code.

   // A variable which will point to some allocated memory.
   void* pMemory = NULL;

   const size_t BytesInChunk = 1024;

   // Allocate a chunk of memory
   pMemory = MemoryManager.Allocate(BytesInChunk);

   // Confirm the validity of the allocated memory
   if (pMemory == NULL)
      return E_OUTOFMEMORY;

   // Confirm the size of the allocated memory
   ATLASSERT(MemoryManager.GetSize(pMemory) == BytesInChunk);

   // Increase the size of the allocated memory
   pMemory = MemoryManager.Reallocate(pMemory, BytesInChunk * 2);

   // Confirm the validity of the allocated memory
   if (pMemory == NULL)
      return E_OUTOFMEMORY;

   // Confirm the size of the reallocated  memory
   ATLASSERT(MemoryManager.GetSize(pMemory) == BytesInChunk * 2);

   // Free the allocated memory
   MemoryManager.Free(pMemory);

   return S_OK;
}

int DoMemoryManagerDemonstration()
{
   CComHeap heapCom;
   CCRTHeap heapCrt;
   CLocalHeap heapLocal;
   CGlobalHeap heapGlobal;
   // It is necessary to provide extra information 
   // to the constructor when using CWin32Heap
   CWin32Heap heapWin32(NULL, 4096); 

   ATLASSERT(S_OK==MemoryManagerDemonstration(heapCom));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapCrt));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapLocal));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapGlobal));
   ATLASSERT(S_OK==MemoryManagerDemonstration(heapWin32));

   return 0;
}