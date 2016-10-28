   CComCurrency cur(10, 2500);
   cur += CComCurrency(4, 2500);
   ATLASSERT(cur == CComCurrency(14, 5000));