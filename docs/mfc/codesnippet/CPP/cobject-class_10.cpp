void CAge::Serialize(CArchive& ar)
{
   CObject::Serialize(ar);
   if(ar.IsStoring())
      ar << m_years;
   else
      ar >> m_years;
}