// 35.0050
COleCurrency cur1(35, 50);
// 2.0075
COleCurrency cur2(2, 75);
COleCurrency cur3;

// sum is 37.0125
cur3 = cur1 + cur2;
ASSERT(cur3 == COleCurrency(37, 125));

// difference is 32.9975
cur3 = cur1 - cur2;
ASSERT(cur3 == COleCurrency(32, 9975));