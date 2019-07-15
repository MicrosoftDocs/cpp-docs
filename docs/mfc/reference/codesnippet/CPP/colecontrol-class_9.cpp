void CMyAxCtrl::Serialize(CArchive &ar)
{
   SerializeVersion(ar, MAKELONG(_wVerMinor, _wVerMajor));
   SerializeExtent(ar);
   SerializeStockProps(ar);

   if (ar.IsStoring())
   { // storing code
   }
   else
   { // loading code
   }
}