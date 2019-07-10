class CPerson : public CObject
{
public:
   DECLARE_SERIAL(CPerson)
   // empty constructor is necessary
   CPerson();
   virtual ~CPerson();

   CString m_name;
   WORD   m_number;

   void Serialize(CArchive& archive);
};