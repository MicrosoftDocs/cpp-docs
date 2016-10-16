void CMyAxCtrl::OnResetState()
{
   ResetVersion(MAKELONG(_wVerMinor, _wVerMajor));
   ResetStockProps();

   // initialize custom properties here
}