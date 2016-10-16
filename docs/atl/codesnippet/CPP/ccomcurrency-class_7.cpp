   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1 / 10;
   ATLASSERT(cur2 == CComCurrency(1, 500));