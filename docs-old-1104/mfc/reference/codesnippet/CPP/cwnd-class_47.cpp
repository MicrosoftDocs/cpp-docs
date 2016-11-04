// This OnCtlColor handler will change the color of a static control
// with the ID of IDC_MYSTATIC. The code assumes that the CPenWidthsDlg
// class has an initialized and created CBrush member named m_brush.
// The control will be painted with red text and a background
// color of m_brush.
HBRUSH CPenWidthsDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
   // Call the base class implementation first! Otherwise, it may
   // undo what we're trying to accomplish here.
   HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

   // Are we painting the IDC_MYSTATIC control? We can use
   // CWnd::GetDlgCtrlID() to perform the most efficient test.
   if (pWnd->GetDlgCtrlID() == IDC_MYSTATIC)
   {
      // Set the text color to red
      pDC->SetTextColor(RGB(255, 0, 0));

      // Set the background mode for text to transparent 
      // so background will show thru.
      pDC->SetBkMode(TRANSPARENT);

      // Return handle to our CBrush object
      hbr = m_brush;
   }

   return hbr;
}