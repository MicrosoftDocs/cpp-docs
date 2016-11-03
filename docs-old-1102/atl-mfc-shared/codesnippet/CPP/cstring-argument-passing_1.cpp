class CName : public CObject
{
private:
   CString m_firstName;
   TCHAR m_middleInit;
   CString m_lastName;
public:
   CName() {}
   void SetData(LPCTSTR fn, const TCHAR mi, LPCTSTR ln)
   {
      m_firstName = fn;
      m_middleInit = mi;
      m_lastName = ln;
   }
   void GetData(CString& cfn, TCHAR& mi, CString& cln)
   {
      cfn = m_firstName;
      mi = m_middleInit;
      cln = m_lastName;
   }
   CString GetLastName()
   {
      return m_lastName;
   }
};