   COleDateTimeSpan spanOne(3, 12, 0, 0); // 3 days and 12 hours
   COleDateTimeSpan spanTwo(spanOne);     // 3 days and 12 hours
   BOOL b;
   b = spanOne == spanTwo;                // TRUE
   b = spanOne < spanTwo;                 // FALSE, same value
   b = spanOne > spanTwo;                 // FALSE, same value
   b = spanOne <= spanTwo;                // TRUE, same value
   b = spanOne >= spanTwo;                // TRUE, same value   

   spanTwo.SetStatus(COleDateTimeSpan::invalid);
   b = spanOne == spanTwo;                // FALSE, different status
   b = spanOne != spanTwo;                // TRUE, different status