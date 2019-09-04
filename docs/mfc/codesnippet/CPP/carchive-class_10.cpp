//SubItem.cpp
IMPLEMENT_SERIAL(CSubItem, CObject, 1);

void CSubItem::Serialize(CArchive &ar)

{
   if (ar.IsStoring())
   {
      // will serialize a reference
      // to the "mapped" document pointer
      ar << (CObject *)m_pDoc;
      ar << m_i;
   }
   else
   {
      // Will load a reference to
      // the "mapped" document pointer
      ar >> (CObject *&)m_pDoc;
      ar >> m_i;
   }
}