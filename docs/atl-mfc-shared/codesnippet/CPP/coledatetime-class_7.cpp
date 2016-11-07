   // example for COleDateTime::GetCurrentTime
   COleDateTime dateTest;
      // dateTest value = midnight 30 December 1899

   dateTest = COleDateTime::GetCurrentTime();
      // dateTest value = current date and time

   // a second example for COleDateTime::GetCurrentTime
   // Since GetCurrentTime() is a static member, you can use it in
   // a constructor:

   COleDateTime t1 = COleDateTime::GetCurrentTime();
   COleDateTime t2(COleDateTime::GetCurrentTime());

   // Or in a normal assignment operator

   COleDateTime t3;
   t3 = COleDateTime::GetCurrentTime();

   // or even in an expression

    if (COleDateTime::GetCurrentTime().GetDayOfWeek() == 6)
       _tprintf(_T("Thank Goodness it is Friday!\n\n"));   