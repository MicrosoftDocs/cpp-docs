   // Create an array of floats and search for a particular element

   CSimpleArray<float> fMyArray;

   for (int i = 0; i < 10; i++)
      fMyArray.Add((float)i * 100);

   int e = fMyArray.Find(200);
   if (e == -1)
      _tprintf_s(_T("Could not find element\n"));
   else
      _tprintf_s(_T("Found the element at location %d\n"), e);   