CObArray arr;

arr.Add(new CAge(21)); // Element 0
arr.Add(new CAge(40)); // Element 1
arr.SetAtGrow(3, new CAge(65)); // Element 2 deliberately
                                      // skipped.
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("SetAtGrow example: ") << &arr << _T("\n");
#endif      