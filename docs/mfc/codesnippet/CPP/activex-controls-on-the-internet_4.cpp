BSTR CMFCActiveXControlCtrl::GetEditControlText(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   CString strResult;
   strResult = EditControlText.GetPath();
   return strResult.AllocSysString();
}

void CMFCActiveXControlCtrl::SetEditControlText(LPCTSTR newVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   Load(newVal, EditControlText);
   SetModifiedFlag();
}