void CPerson::Serialize(CArchive& archive)
{
   // call base class function first
   // base class is CObject in this case
   CObject::Serialize(archive);

   // now do the stuff for our specific class
   if (archive.IsStoring())
      archive << m_name << m_number;
   else
      archive >> m_name >> m_number;
}