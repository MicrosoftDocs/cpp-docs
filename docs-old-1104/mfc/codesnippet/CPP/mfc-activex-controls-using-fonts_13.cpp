void CMyAxFontCtrl::SetHeadingFont(IDispatch* pVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   m_fontHeading.InitializeFont(&_fontdescHeading, pVal);
   OnFontChanged();    //notify any changes
   SetModifiedFlag();
}