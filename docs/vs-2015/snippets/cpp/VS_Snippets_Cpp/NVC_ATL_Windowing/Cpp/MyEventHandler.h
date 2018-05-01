// <Snippet143>
_ATL_FUNC_INFO Event1Info1 = { CC_CDECL, VT_EMPTY, 1, { VT_I4 } };

class CEventHandler :
   public IDispEventSimpleImpl<1234, CEventHandler, &__uuidof(DMyEventMakerEvents)>
{
public:
   BEGIN_SINK_MAP(CEventHandler)
      SINK_ENTRY_INFO(1234, __uuidof(DMyEventMakerEvents), 1, 
         &CEventHandler::OnEvent1, &Event1Info1)
   END_SINK_MAP()

   void __stdcall  OnEvent1(LONG l)
   {
      if (l != 445533)
      {
         OutputDebugString(L"l is not 445533\n");
      }
   }

   HRESULT Advise1234(IUnknown * punk) 
   {
      return IDispEventSimpleImpl<1234, CEventHandler, 
         &__uuidof(DMyEventMakerEvents)>::DispEventAdvise(punk);
   }
};
// </Snippet143>