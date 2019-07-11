class CAge : public CObject
{
public:
   void Serialize(CArchive& ar);
   DECLARE_SERIAL(CAge)

   // remainder of class declaration omitted