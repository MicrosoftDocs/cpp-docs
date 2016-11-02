   CComCurrency cur(10, 0);
   cur.SetFraction(5000);
   ATLASSERT(CComCurrency(10, 5000) == cur);   