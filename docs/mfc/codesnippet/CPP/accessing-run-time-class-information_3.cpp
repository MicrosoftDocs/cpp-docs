IMPLEMENT_DYNAMIC(CPerson, CObject)

IMPLEMENT_DYNCREATE(CMyDynCreateObj, CObject)

void MemoryCorruptingSnippet(bool bCorrupt)
{
   if (bCorrupt)
   {
      CAge *pcage = new CAge(21);  // CAge is derived from CObject.
      Age *page = new Age(22);     // Age is NOT derived from CObject.
      *(((char *)pcage) - 1) = 99; // Corrupt preceding guard byte
      *(((char *)page) - 1) = 99;  // Corrupt preceding guard byte
      AfxCheckMemory();
   }
}

void SomeFunction(void)
{
   CObject *pMyObject = new CPerson;

   if (NULL != pMyObject &&
       pMyObject->IsKindOf(RUNTIME_CLASS(CPerson)))
   {
      //if IsKindOf is true, then cast is all right
      CPerson *pmyPerson = (CPerson *)pMyObject;
      pmyPerson->AssertValid();
      // other code goes here...
   }

   delete pMyObject;
}