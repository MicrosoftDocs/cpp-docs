HRESULT CMyClass::get_StatusText(BSTR* pbstr)
{
   try
   {
      //m_str is a CString in your class
      *pbstr = m_str.AllocSysString();
   }
   catch (...)
   {
      return E_OUTOFMEMORY;
   }

   // The client is now responsible for freeing pbstr.
   return(S_OK);
}