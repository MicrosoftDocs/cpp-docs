class CMyDynCreateObj : public CObject
{
   int m_Num;
public:
   DECLARE_DYNCREATE(CMyDynCreateObj)
   CMyDynCreateObj(int Num) { m_Num = Num; }
private:
   CMyDynCreateObj() { m_Num = 0; }  // provide default constructor only for 
                                     // dynamic creation 
};