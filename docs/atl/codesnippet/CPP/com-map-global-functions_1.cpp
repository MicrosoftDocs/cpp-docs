// MyTimerProc is a callback function passed to SetTimer()
VOID CALLBACK MyTimerProc(HWND /*hwnd*/, UINT /*uMsg*/, UINT /*idEvent*/, 
   DWORD /*dwTime*/)
{
   LPDISPATCH pDisp = NULL;
   // gpMyCtrl is a global variable of type CMyCtrl*
   // _GetEntries() is a static function you get with BEGIN_COM_MAP()
   AtlInternalQueryInterface (gpMyCtrl, CMyCtrl::_GetEntries(), IID_IDispatch, 
      (LPVOID*)&pDisp);
   //...
   pDisp->Release ();
}