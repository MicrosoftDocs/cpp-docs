//marshaling interface from one thread to another

//IStream ptr to hold serialized presentation of interface ptr
IStream* g_pStm;

//forward declaration
DWORD WINAPI ThreadProc(LPVOID lpParameter);

HRESULT WriteInterfacePtrToStream(IMyCircle *pCirc)
{
   //marshal the interface ptr to another thread
   //pCirc has to be pointer to actual object & not a proxy
   HRESULT hr = AtlMarshalPtrInProc(pCirc, IID_IMyCircle, &g_pStm);

   //m_dwThreadID is a DWORD holding thread ID of thread being created.
   CreateThread(NULL, 0, ThreadProc, NULL, 0, &m_dwThreadID);
   return hr;
}

DWORD WINAPI ThreadProc(LPVOID /*lpParameter*/)
{
   // CoInitializeEx is per thread, so initialize COM on this thread
   // (required by AtlUnmarshalPtr)
   HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
   if (SUCCEEDED(hr))
   {
      IMyCircle* pCirc;

      //unmarshal IMyCircle ptr from the stream
      hr = AtlUnmarshalPtr(g_pStm, IID_IMyCircle, (IUnknown**)&pCirc);

      // use IMyCircle ptr to call its methods
      double center;
      pCirc->get_XCenter(&center);

      //release the stream if no other thread requires it 
      //to unmarshal the IMyCircle interface pointer
      hr = AtlFreeMarshalStream(g_pStm);

      CoUninitialize();
   }

   return hr;
}