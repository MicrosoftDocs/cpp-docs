   CComCurrency cur(10, 5000);
   LONGLONG nInteger;
   nInteger = cur.GetInteger();
   ATLASSERT(nInteger == 10);   