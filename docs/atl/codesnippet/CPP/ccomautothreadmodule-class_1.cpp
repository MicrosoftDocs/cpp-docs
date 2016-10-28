class CMyModule : 
public CComAutoThreadModule<CComSimpleThreadAllocator>
{
public:
   LONG Unlock()
   {
      LONG l = CComAutoThreadModule<CComSimpleThreadAllocator>::Unlock();
      if (l == 0)
         PostThreadMessage(dwThreadID, WM_QUIT, 0, 0);
      return l;
   }

   DWORD dwThreadID;
};