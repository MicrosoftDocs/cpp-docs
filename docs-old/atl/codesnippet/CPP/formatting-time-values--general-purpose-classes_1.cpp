   CTime t( 1991, 3, 19, 22, 15, 0 );
   // 10:15PM March 19, 1991

   CString s = t.Format( "%A, %B %d, %Y" );
   // s == "Tuesday, March 19, 1991"    