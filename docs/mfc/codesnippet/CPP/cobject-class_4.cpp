CAge a(21);
CRuntimeClass* prt = a.GetRuntimeClass();
ASSERT(strcmp(prt->m_lpszClassName, "CAge") == 0);