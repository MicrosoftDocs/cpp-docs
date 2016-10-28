void DoCCommandTest()
{
   HRESULT hr;

   hr = CoInitialize(NULL);

   CCustomer rs;           // Your CCommand-derived class
   rs.m_BillingID = 6611;  // Open billing ID 6611
   hr = rs.OpenAll();      // (Open also executes the command)
   hr = rs.MoveFirst();    // Move to the first row and print it

   _tprintf_s(_T("First name: %s, Last Name: %s, Customer ID: %d, Postal Code: %s\n"),
      rs.m_ContactFirstName, rs.m_L_Name, rs.m_CustomerID, rs.m_PostalCode);

   // Close the first command execution
   rs.Close();

   rs.m_BillingID = 3333;     // Open billing ID 3333 (a new customer)
   hr = rs.Open();            // (Open also executes the command)
   hr = rs.MoveFirst();       // Move to the first row and print it

   _tprintf_s(_T("First name: %s, Last Name: %s, Customer ID: %d, Postal Code: %s\n"),
      rs.m_ContactFirstName, rs.m_L_Name, rs.m_CustomerID, rs.m_PostalCode);

   // Close the second command execution;
   // Instead of the two following lines
   // you could simply call rs.CloseAll()
   // (a wizard-generated method):
   rs.Close();
   rs.ReleaseCommand();

   CoUninitialize();
}