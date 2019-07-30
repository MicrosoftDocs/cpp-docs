class CMyObject : public CObject
{
public:
   int i;
   void Serialize(CArchive& ar);
   CMyObject() { i = 9876; }
protected:
   DECLARE_SERIAL(CMyObject)
};

IMPLEMENT_SERIAL(CMyObject, CObject, 0)

void CMyObject::Serialize(CArchive& ar)
{
   CObject::Serialize(ar);
   if (ar.IsStoring())
      ar << i;
   else
      ar >> i;
}