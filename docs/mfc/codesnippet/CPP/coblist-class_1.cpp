CObList list;
list.AddHead(new CAge(21)); // 21 is now at head.
list.AddHead(new CAge(40)); // 40 replaces 21 at head.
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("AddHead example: ") << &list << _T("\n");
#endif      