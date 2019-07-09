// Simple CObject-derived class for CObList and other examples
class CAge : public CObject
{
   DECLARE_SERIAL(CAge)
private:
   int   m_years;
public:
   CAge() { m_years = 0; }
   CAge(int age) { m_years = age; }
   CAge(const CAge& a) { m_years = a.m_years; } // Copy constructor
   void Serialize(CArchive& ar);
   void AssertValid() const;
   const CAge& operator=(const CAge& a)
   {
      m_years = a.m_years; return *this;
   }
   BOOL operator==(CAge a)
   {
      return m_years == a.m_years;
   }
#ifdef _DEBUG
   void Dump(CDumpContext& dc) const
   {
      CObject::Dump(dc);
      dc << m_years;
   }
#endif
};