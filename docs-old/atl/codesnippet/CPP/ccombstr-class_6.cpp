   CComBSTR bstr1;   // BSTR points to NULL
   bstr1 = "Bye";    // initialize with assignment operator
                     // ANSI string is converted to wide char

   OLECHAR* str = OLESTR("Bye bye!");  // wide char string of length 5
   int len = (int)wcslen(str);
   CComBSTR bstr2(len + 1);// unintialized BSTR of length 6
   wcsncpy_s(bstr2.m_str, bstr2.Length(), str, len); // copy wide char string to BSTR

   CComBSTR bstr3(5, OLESTR("Hello World")); // BSTR containing 'Hello', 
                                             // input string is wide char
   CComBSTR bstr4(5, "Hello World");         // same as above, input string 
                                             // is ANSI

   CComBSTR bstr5(OLESTR("Hey there")); // BSTR containing 'Hey there', 
                                        // input string is wide char
   CComBSTR bstr6("Hey there");         // same as above, input string 
                                        // is ANSI

   CComBSTR bstr7(bstr6);     // copy constructor, bstr7 contains 'Hey there'   