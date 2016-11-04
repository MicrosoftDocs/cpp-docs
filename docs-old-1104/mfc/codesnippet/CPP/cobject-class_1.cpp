void CAge::AssertValid() const
{
   CObject::AssertValid();
   ASSERT(m_years > 0); 
   ASSERT(m_years < 105);
}