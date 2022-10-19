   // OEM character 252 on most IBM-compatible computers in
   // many countries/regions is superscript n, as in 2^n.
   // Converting it to the ANSI English charset results in a
   // normal character 'n', which is the closest possible
   // representation.

   CStringT<char, StrTraitATL<char, ChTraitsCRT<char>>> str((WCHAR)252);
   str.OemToAnsi();
   ASSERT(str[0] == 'n');

   // Be aware that in OEM to ANSI conversion the 'n'
   // from the previous result cannot be converted back to
   // a supsercript n because the system does not know what
   // the character's value truly was.
   str.AnsiToOem();
   ASSERT(str[0] != 252);
   ASSERT(str[0] == 'n');   
