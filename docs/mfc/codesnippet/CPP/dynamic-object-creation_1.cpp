CRuntimeClass* pRuntimeClass = RUNTIME_CLASS(CMyClass);
CObject* pObject = pRuntimeClass->CreateObject();
ASSERT(pObject->IsKindOf(RUNTIME_CLASS(CMyClass)));