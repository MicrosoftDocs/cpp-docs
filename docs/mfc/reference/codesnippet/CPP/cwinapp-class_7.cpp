   CWinApp* pApp = AfxGetApp();

   const TCHAR* pszKey = _T("My Section");
   struct complex {
     double re, im;
   } myData = { 1.4142, -0.5 };

   // Write the information to the registry.

   pApp->WriteProfileBinary(pszKey, _T("ComplexData"), (LPBYTE)&myData, 
      sizeof(myData));

   // Read the information from the registry.

   complex* pData;
   UINT n;
   BOOL ret = pApp->GetProfileBinary(pszKey, _T("ComplexData"), (LPBYTE*)&pData, 
      &n);

   ASSERT(ret);
   ASSERT(n == sizeof(complex));
   ASSERT(myData.re == pData->re);
   ASSERT(myData.im == pData->im);
   delete [] pData; // free the buffer