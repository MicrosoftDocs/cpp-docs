   COleDateTime time(1970, 12, 18, 17, 30, 0);
   // 18 December 1970, 5:30 PM
   CString s = time.Format(VAR_DATEVALUEONLY);
   // s contains the date formatted based on 
   // the current national language specifications
   // (locale ID). The time portion is ignored for 
   // formatting purposes in this case.   