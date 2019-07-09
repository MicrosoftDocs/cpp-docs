CObList list;
list.AddTail(new CAge(21));
list.AddTail(new CAge(40)); // List now contains (21, 40).
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("AddTail example: ") << &list << _T("\n");
#endif      