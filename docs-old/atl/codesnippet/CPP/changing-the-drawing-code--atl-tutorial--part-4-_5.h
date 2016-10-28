   void FinalRelease()
   {
   }
public:
   STDMETHOD(get_Sides)(short* pVal);
   STDMETHOD(put_Sides)(short newVal);
   void CalcPoints(const RECT& rc);