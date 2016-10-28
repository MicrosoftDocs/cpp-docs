   CComCurrency cur(10, 1234);
   cur.Round(3);
   ATLASSERT(cur.GetFraction() == 1230);   