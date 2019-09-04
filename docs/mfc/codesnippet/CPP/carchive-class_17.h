class CBaseClass : public CObject
{
   DECLARE_SERIAL(CBaseClass);
};
class CDerivedClass : public CBaseClass
{
public:
   virtual void Serialize(CArchive &ar);
};
void CDerivedClass::Serialize(CArchive &ar)
{
   if (ar.IsStoring())
   {
      //normal code for storing contents
      //of this object
   }
   else
   {
      //normal code for reading contents
      //of this object
   }

   //allow the base class to serialize along
   //with its version information
   ar.SerializeClass(RUNTIME_CLASS(CBaseClass));
   CBaseClass::Serialize(ar);
}