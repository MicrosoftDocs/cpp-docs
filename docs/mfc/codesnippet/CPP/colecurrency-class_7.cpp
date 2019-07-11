// 35 units and 50/10000, or 35.0050
COleCurrency cur1(35, 50);
COleCurrency cur2;

// divided by two is 17.5025
cur2 = cur1 / 2;
ASSERT(cur2 == COleCurrency(17, 5025));

// multiplied by two is 70.0100
cur2 = cur1 * 2;
ASSERT(cur2 == COleCurrency(70, 100));