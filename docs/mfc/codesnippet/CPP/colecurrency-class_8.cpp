// both set to 35.0050
COleCurrency cur1(35, 50);
COleCurrency cur2(35, 50);

// divide in half
cur1 /= 2;
ASSERT(cur1 == COleCurrency(17, 5025));

// multiply by two
cur2 *= 2;
ASSERT(cur2 == COleCurrency(70, 100));