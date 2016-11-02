void CMyAxUICtrl::SetMyProperty(SHORT newVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   if (m_bReadOnlyMode)   //  some control-specific state
   {
      SetNotSupported();
   }
   else
   {
      m_iPropVal = newVal;   //  set property as normal
      SetModifiedFlag();
   }
}