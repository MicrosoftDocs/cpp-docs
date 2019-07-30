void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXGetitemdropdownrect()
{
   if (controlCreated == FALSE)
   {
      MessageBox(_T("Header control has not been created yet."));
      return;
   }

   // Get the dropdown rect for the first column.
   CRect rect;
   BOOL bRetVal = m_headerCtrl.GetItemDropDownRect(0, &rect);
   if (bRetVal == TRUE)
   {
      // Draw around the dropdown rect a rectangle that has red
      // left and top sides, and blue right and bottom sides.
      CDC *pDC = m_headerCtrl.GetDC();
      pDC->Draw3dRect(rect, RGB(255, 0, 0), RGB(0, 0, 255));
   }
}