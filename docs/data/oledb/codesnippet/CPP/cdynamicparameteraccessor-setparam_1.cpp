   WCHAR* wszSQL = L"SELECT * FROM Authors WHERE State='?' AND LName='?'";

   CCommand<CDynamicParameterAccessor> rs;
   //...
   rs.SetParam<LONG>(1, &m_BillingID);
   rs.SetParam<CString>(2, &m_strFirstName);