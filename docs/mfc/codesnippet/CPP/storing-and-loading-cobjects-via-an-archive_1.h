class CMyObject : public CObject
{
   // ...Member functions
public:
   CMyObject() {}
   virtual void Serialize(CArchive &ar);

   // Implementation
protected:
   DECLARE_SERIAL(CMyObject)
};

class COtherObject : public CObject
{
   // ...Member functions
public:
   COtherObject() {}
   virtual void Serialize(CArchive &ar);

   // Implementation
protected:
   DECLARE_SERIAL(COtherObject)
};

class CCompoundObject : public CObject
{
   // ...Member functions
public:
   CCompoundObject();
   ~CCompoundObject();
   virtual void Serialize(CArchive &ar);

   // Implementation
protected:
   CMyObject m_myob;       // Embedded object
   COtherObject *m_pOther; // Object allocated in constructor
   CObject *m_pObDyn;      // Dynamically allocated object
   //..Other member data and implementation

   DECLARE_SERIAL(CCompoundObject)
};