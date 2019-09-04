void CSerializableObj::Serialize(CArchive &archive)
{
   // call base class function first
   // base class is CObject in this case
   CObject::Serialize(archive);

   // now do the stuff for our specific class
   if (archive.IsStoring())
   {
      // TODO:  add storing code here
   }
   else
   {
      // TODO:  add storing code here
   }
}