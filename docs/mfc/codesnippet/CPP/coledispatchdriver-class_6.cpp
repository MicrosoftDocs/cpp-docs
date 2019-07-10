COleDispatchDriver disp;
if (disp.CreateDispatch(_T("WMPlayer.OCX")))
{
   IDispatch* pDispatch = disp; //COleDispatchDriver::operator
                                //LPDISPATCH is called here
   IUnknown* pUnkn = NULL;
   HRESULT hr = pDispatch->QueryInterface(IID_IUnknown, (void**)& pUnkn);
   if (SUCCEEDED(hr))
   {
      //Do something...
      pUnkn->Release();
   }
}