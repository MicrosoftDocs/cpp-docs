   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1 - CComCurrency(4, 5000);
   ATLASSERT(cur2 == CComCurrency(6, 0));   