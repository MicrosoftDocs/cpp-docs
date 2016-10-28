   COleCurrency curOne(3, 5000);             // 3.5
   COleCurrency curTwo(curOne);              // 3.5
   BOOL b = (curOne == curTwo);              // TRUE

   b = curOne < curTwo;                      // FALSE, same value
   b = curOne > curTwo;                      // FALSE, same value
   b = curOne <= curTwo;                     // TRUE, same value
   b = curOne >= curTwo;                     // TRUE, same value
   curTwo.SetStatus(COleCurrency::invalid);
   b = curOne == curTwo;                     // FALSE, different status
   b = curOne != curTwo;                     // TRUE, different status