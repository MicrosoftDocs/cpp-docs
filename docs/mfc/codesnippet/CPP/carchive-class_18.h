class CMyLargeDocument : public CDocument
{
public:
   virtual void Serialize(CArchive &ar);
};
void CMyLargeDocument::Serialize(CArchive &ar)
{
   if (ar.IsStoring())
      ar.SetStoreParams(); // use large defaults
   else
      ar.SetLoadParams();

   if (ar.IsStoring())
   {
      // code for storing CMyLargeDocument
   }
   else
   {
      // code for loading CMyLargeDocument
   }
}