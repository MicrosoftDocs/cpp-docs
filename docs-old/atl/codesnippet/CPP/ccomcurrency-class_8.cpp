   CComCurrency cur(10, 5000);
   cur /= 10;
   ATLASSERT(cur == CComCurrency(1, 500));