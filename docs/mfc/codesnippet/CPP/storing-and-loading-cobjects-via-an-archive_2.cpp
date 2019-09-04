IMPLEMENT_SERIAL(CMyObject, CObject, 1)
IMPLEMENT_SERIAL(COtherObject, CObject, 1)
IMPLEMENT_SERIAL(CCompoundObject, CObject, 1)

CCompoundObject::CCompoundObject()
{
   m_pOther = new COtherObject; // Exact type known and object already
                                //allocated.
   m_pObDyn = NULL;             // Will be allocated in another member function
                                // if needed, could be a derived class object.
}

CCompoundObject::~CCompoundObject()
{
   delete m_pOther;
}

void CCompoundObject::Serialize(CArchive &ar)
{
   CObject::Serialize(ar);  // Always call base class Serialize.
   m_myob.Serialize(ar);    // Call Serialize on embedded member.
   m_pOther->Serialize(ar); // Call Serialize on objects of known exact type.

   // Serialize dynamic members and other raw data
   if (ar.IsStoring())
   {
      ar << m_pObDyn;
      // Store other members
   }
   else
   {
      ar >> m_pObDyn; // Polymorphic reconstruction of persistent object
      //load other members
   }
}