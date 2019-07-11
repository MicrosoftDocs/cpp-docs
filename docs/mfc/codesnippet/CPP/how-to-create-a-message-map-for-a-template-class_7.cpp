template<>
CString StringizeElement(CStringList* pStringList, INT iIndex)
{
   if (pStringList != NULL && iIndex < pStringList->GetCount())
   {
      POSITION pos = pStringList->GetHeadPosition();
      for (INT i = 0; i < iIndex; i++)
      {
         pStringList->GetNext(pos);
      }
      return pStringList->GetAt(pos);
   }
   return CString(); // or throw, depending on application requirements
}