   CComCurrency cur(0, 5000);
   cur.SetInteger(10);
   ATLASSERT(CComCurrency(10, 5000) == cur);   