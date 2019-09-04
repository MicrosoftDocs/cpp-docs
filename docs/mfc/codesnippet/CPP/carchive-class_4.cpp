IMPLEMENT_SERIAL(CSchemaObject, CObject, VERSIONABLE_SCHEMA | 1)

void CSchemaObject::Serialize(CArchive &ar)
{
   CObject::Serialize(ar);

   if (ar.IsLoading())
   {
      int nVersion = ar.GetObjectSchema();

      switch (nVersion)
      {
      case 0:
         // read in previous version of
         // this object
         break;
      case 1:
         // read in current version of
         // this object
         break;
      default:
         // report unknown version of
         // this object
         break;
      }
   }
   else
   {
      // Normal storing code goes here
   }
}