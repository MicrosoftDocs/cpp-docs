// This example creates an object if CAge is defined.

CRuntimeClass* pClass = CRuntimeClass::FromName(_T("CAge"));
if (pClass == NULL)
{
   // not found, display a warning for diagnostic purposes
   AfxMessageBox(_T("Warning: CMyClass not defined"));
   return NULL;
}

// attempt to create the object with the found CRuntimeClass
CObject* pObject = pClass->CreateObject();