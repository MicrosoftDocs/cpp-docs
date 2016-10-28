   COleDateTime dateOne(1995, 3, 15, 12, 0, 0); // 15 March 1995 12 noon
   COleDateTime dateTwo(dateOne);             // 15 March 1995 12 noon
   BOOL b;
   b = dateOne == dateTwo;                    // TRUE
   b = dateOne < dateTwo;                     // FALSE, same value
   b = dateOne > dateTwo;                     // FALSE, same value
   b = dateOne <= dateTwo;                    // TRUE, same value
   b = dateOne >= dateTwo;                    // TRUE, same value   

   dateTwo.SetStatus(COleDateTime::invalid);
   b = dateOne == dateTwo;                    // FALSE, different status
   b = dateOne != dateTwo;                    // TRUE, different status