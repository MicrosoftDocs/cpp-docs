// works if default locale has dot decimal point
COleCurrency cur;
cur.ParseCurrency(_T("$135.95"), 0);
ASSERT(cur == COleCurrency(135, 9500));