   CComCurrency cur1(10, 5000), cur2;
   cur2 = cur1;
   ATLASSERT(cur1 == cur2);