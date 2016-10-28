   // Create an array and display its contents
    CSimpleArray<int> iMySampleArray;

    for (int i = 0; i < 10; i++)
       iMySampleArray.Add(i);

    for (int i = 0; i < iMySampleArray.GetSize(); i++)
       _tprintf_s(_T("Array index %d contains %d\n"), i, iMySampleArray[i]);