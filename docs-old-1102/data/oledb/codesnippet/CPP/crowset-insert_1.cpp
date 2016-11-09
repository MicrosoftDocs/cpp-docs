   // Access the rowset using the wizard-generated class, CCustomerTable
   CCustomerTable rs;           // Your CTable-derived class

   // Insert a customer
   // Note that for fixed-length fields such as billing ID it isn't necessary
   // to set the length
   rs.m_BillingID = 5002;
   rs.m_dwBillingIDStatus = DBSTATUS_S_OK;

   _tcscpy_s(rs.m_ContactFirstName, sizeof(rs.m_ContactFirstName) / sizeof(TCHAR), 
      _T("Malcolm"));
   rs.m_dwContactFirstNameLength = 7;
   rs.m_dwContactFirstNameStatus = DBSTATUS_S_OK;

   _tcscpy_s(rs.m_L_Name, sizeof(rs.m_L_Name) / sizeof(TCHAR), _T("Reynolds"));
   rs.m_dwL_NameLength = 8;
   rs.m_dwContactFirstNameStatus = DBSTATUS_S_OK;

   rs.m_CustomerID = 2005;
   rs.m_dwCustomerIDStatus = DBSTATUS_S_OK;

   _tcscpy_s(rs.m_PostalCode, sizeof(rs.m_PostalCode) / sizeof(TCHAR), 
      _T("34213-4444"));
   rs.m_dwPostalCodeLength = 10;
   rs.m_dwPostalCodeStatus = DBSTATUS_S_OK;

   HRESULT hr = rs.Insert();
   if (FAILED(hr))
   {
      ATLTRACE(_T("Insert failed: 0x%X\n"), hr);
   }