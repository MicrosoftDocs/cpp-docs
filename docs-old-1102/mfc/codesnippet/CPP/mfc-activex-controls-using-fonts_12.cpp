IDispatch* CMyAxFontCtrl::GetHeadingFont(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   return m_fontHeading.GetFontDispatch();
}