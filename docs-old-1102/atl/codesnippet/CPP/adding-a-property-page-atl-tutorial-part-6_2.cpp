LRESULT CPolyProp::OnEnChangeSides(WORD /*wNotifyCode*/, WORD /*wID*/, 
   HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
   SetDirty(TRUE);

   return 0;
}