//SubItem.h
class CSubItem : public CObject
{
   DECLARE_SERIAL(CSubItem)
   CSubItem() : m_i(0){};

public:
   CSubItem(CMyDocument *pDoc)
   {
      m_pDoc = pDoc;
   }

   // back pointer to owning document
   CMyDocument *m_pDoc;
   WORD m_i; // other item data

   virtual void Serialize(CArchive &ar);
};