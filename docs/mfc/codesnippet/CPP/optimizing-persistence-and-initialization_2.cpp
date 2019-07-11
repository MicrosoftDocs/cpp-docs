void CMyAxOptCtrl::Serialize(CArchive& ar)
{
   SerializeVersion(ar, MAKELONG(_wVerMinor, _wVerMajor));
   SerializeExtent(ar);
   SerializeStockProps(ar);

   if (ar.IsLoading())
   {
      ar >> m_BoolProp;
      ar >> m_ShortProp;
      ar >> m_ColorProp;
      ar >> m_StringProp;
   }
   else
   {
      ar << m_BoolProp;
      ar << m_ShortProp;
      ar << m_ColorProp;
      ar << m_StringProp;
   }
}