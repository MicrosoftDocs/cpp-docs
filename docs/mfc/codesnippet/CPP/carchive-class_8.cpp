//MyDocument.cpp
IMPLEMENT_SERIAL(CMyDocument, CDocument, 1)

void CMyDocument::Serialize(CArchive& ar)
{
   CDocument::Serialize(ar);

   if (ar.IsStoring())
   {
      // TODO: add storing code here
   }
   else
   {
      // TODO: add loading code here
   }

   ar.MapObject(this);

   //serialize the subitems in the document;
   //they will be able to serialize their m_pDoc
   //back pointer
   m_listOfSubItems.Serialize(ar);
}