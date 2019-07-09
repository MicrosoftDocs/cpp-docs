#ifdef _DEBUG
CString cStr;
AfxDoForAllClasses(DoForAllClasses, &cStr);
AfxMessageBox(cStr);
#endif