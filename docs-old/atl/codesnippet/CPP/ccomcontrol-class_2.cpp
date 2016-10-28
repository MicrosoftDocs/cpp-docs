   RECT rc = {10,10,210,110};
   HWND hwndParent, hwndControl;

   // get HWND of control's parent window from IOleInPlaceSite interface
   m_spInPlaceSite->GetWindow(&hwndParent);
   hwndControl = CreateControlWindow(hwndParent, rc);