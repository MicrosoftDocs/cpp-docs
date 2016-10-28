BOOL CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry(BOOL bRegister)
{
   if (bRegister)
      return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
         m_clsid, IDS_SAMPLE_ADDPAGE);
   else
      return AfxOleUnregisterClass(m_clsid, NULL);
}