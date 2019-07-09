CObArray arr;

arr.Add(new CAge(21)); // Element 0
arr.Add(new CAge(40)); // Element 1 (will become 2).
arr.InsertAt(1, new CAge(30));  // New element 1
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("InsertAt example: ") << &arr << _T("\n");
#endif      