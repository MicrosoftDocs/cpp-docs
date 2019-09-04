#if _DEBUG
TCHAR test[] = _T("This is a test of CDumpContext::HexDump\n");
afxDump.HexDump(_T("."), (BYTE *)test, sizeof(test), 20);
#endif