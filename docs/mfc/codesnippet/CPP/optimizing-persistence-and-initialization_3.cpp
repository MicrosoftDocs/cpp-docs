if (ar.IsLoading())
{
   BYTE bTmp;
   ar >> bTmp;
   m_BoolProp = (BOOL)bTmp;
   // other properties...
}
else
{
   ar << (BYTE)m_BoolProp;
   // other properties...
}