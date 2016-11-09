   CComCurrency cur(10, 5000);
   int nFract;
   nFract = cur.GetFraction();
   ATLASSERT(nFract == 5000);   