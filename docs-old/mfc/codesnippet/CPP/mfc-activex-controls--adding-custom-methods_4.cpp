VARIANT_BOOL CMyAxUICtrl::PtInCircle(OLE_XPOS_PIXELS xCoord, OLE_YPOS_PIXELS yCoord)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   CPoint point(xCoord, yCoord);
   return InCircle(point);
}