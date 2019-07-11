#ifdef _DEBUG
void DoForAllClasses(const CRuntimeClass* pClass, void* pContext)
{
   ASSERT(pContext != NULL);
   CString* pStr = (CString*)pContext;

   *pStr += pClass->m_lpszClassName;
   *pStr += _T("\n");
}
#endif