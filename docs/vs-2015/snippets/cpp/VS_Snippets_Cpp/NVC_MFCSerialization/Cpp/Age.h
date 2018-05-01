class CAge : public CObject 
{
   DECLARE_SERIAL(CAge);

public:
   CAge() : m_years(0) {};
   CAge(int years) : m_years(years) {};

   BOOL operator==(CAge& a)
    {
       UNREFERENCED_PARAMETER(a);
       return TRUE;
    }

private:
   int m_years;
};

IMPLEMENT_SERIAL(CAge, CObject, 1);