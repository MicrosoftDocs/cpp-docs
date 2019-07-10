// both set to 35.0050
COleCurrency cur1(35, 50);
COleCurrency cur2(35, 50);

// adding 2.0075 results in 37.0125
cur1 += COleCurrency(2, 75);
ASSERT(cur1 == COleCurrency(37, 125));

// subtracting 2.0075 results in 32.9975
cur2 -= COleCurrency(2, 75);
ASSERT(cur2 == COleCurrency(32, 9975));