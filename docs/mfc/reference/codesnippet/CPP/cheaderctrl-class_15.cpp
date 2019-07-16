void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXGetoverflowrect()
{
   if (controlCreated == FALSE)
   {
      MessageBox(_T("Header control has not been created yet."));
      return;
   }
   CRect rect;
   // Get the overflow rectangle.
   BOOL bRetVal = m_headerCtrl.GetOverflowRect(&rect);
   // Get the device context.
   CDC *pDC = m_headerCtrl.GetDC();
   // Draw around the overflow rect a rectangle that has red
   // left and top sides, and green right and bottom sides.
   pDC->Draw3dRect(rect, RGB(255, 0, 0), RGB(0, 255, 0));
}
