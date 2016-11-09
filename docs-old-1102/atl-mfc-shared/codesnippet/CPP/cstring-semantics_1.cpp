   CString s1, s2;
   s1 = s2 = _T("hi there");

   ASSERT(s1 == s2); // they are equal

   s1.MakeUpper();  // Does not modify s2
   ASSERT(s2[0] == _T('h')); // s2 is still "hi there"   