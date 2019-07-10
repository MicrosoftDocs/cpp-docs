CArray< CPerson, CPerson& > personArray;

template <> void AFXAPI SerializeElements <CPerson>(CArchive& ar,
   CPerson* pNewPersons, INT_PTR nCount)
{
   for (int i = 0; i < nCount; i++, pNewPersons++)
   {
      // Serialize each CPerson object
      pNewPersons->Serialize(ar);
   }
}