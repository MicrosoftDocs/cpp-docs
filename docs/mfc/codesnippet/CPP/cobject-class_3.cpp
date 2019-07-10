void CAge::Dump(CDumpContext& dc) const
{
   CObject::Dump(dc);
   dc << _T("Age = ") << m_years;
}