#ifdef _DEBUG
void DoForAllObjects(CObject* pObject, void* pContext)
{
   int* pnCount = (int*)pContext;

   pObject->AssertValid();
   if (pnCount != NULL)
      (*pnCount)++;
}
#endif // _DEBUG