// This example creates an object from the run-time class. It only 
// creates objects derived from CWnd.

// We only want to create an object derived from CWnd.
if (!pClass->IsDerivedFrom(RUNTIME_CLASS(CWnd)))
{
   TRACE(_T("Error; Object %s is not derived from CWnd\n"),
      pClass->m_lpszClassName);
   return FALSE;
}

// Get a pointer to the base class CRuntimeClass.
#ifdef _AFXDLL
CRuntimeClass* pBaseClass = pClass->m_pfnGetBaseClass();
#else
CRuntimeClass* pBaseClass = pClass->m_pBaseClass;
#endif
ASSERT(pBaseClass != NULL);

TRACE("Creating object %s derived from %s, with object size %d "
   "and schema %d\n", pClass->m_lpszClassName,
   pBaseClass->m_lpszClassName, pClass->m_nObjectSize,
   pClass->m_wSchema);

// Create the object.
CObject* pObject = pClass->CreateObject();