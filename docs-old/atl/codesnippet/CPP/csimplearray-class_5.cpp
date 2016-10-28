   // Create an array of chars and copy it to a second array
   CSimpleArray<char> cMyArray1;
   cMyArray1.Add('a');
   CSimpleArray<char> cMyArray2;
   cMyArray2 = cMyArray1;
   ATLASSERT(cMyArray2[0] == 'a');   