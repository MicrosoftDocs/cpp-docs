   COleCurrency curA;           // value: 0.0000
   curA.SetCurrency(4, 500);    // value: 4.0500

   // value returned: 4.05
   curA.Format(0, MAKELCID(MAKELANGID(LANG_CHINESE,
      SUBLANG_CHINESE_SINGAPORE), SORT_DEFAULT));
   // value returned: 4,05
   curA.Format(0, MAKELCID(MAKELANGID(LANG_GERMAN,
      SUBLANG_GERMAN_AUSTRIAN), SORT_DEFAULT));