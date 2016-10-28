   CComCurrency cur(10, 5000);
   cur -= CComCurrency(4, 5000);
   ATLASSERT(cur == CComCurrency(6, 0));