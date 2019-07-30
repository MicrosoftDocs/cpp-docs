//change the background color of an edit control on the dialog
HBRUSH CMyDlg::OnCtlColor(CDC *pDC, CWnd *pWnd, UINT nCtlColor)
{
   HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

   if (pWnd->GetDlgCtrlID() == IDC_MYEDIT)
   {
      if (pWnd->IsWindowEnabled())
      {
         // Red brush for the background...
         pDC->SetBkColor(RGB(255, 0, 0));
         // m_pRedBrush is the CBrush object initialized with a red brush
         // using CreateSolidBrush
         return (HBRUSH)m_RedBrush.GetSafeHandle();
      }
      else
      {
         // Blue brush for the background...
         pDC->SetBkColor(RGB(0, 0, 255));
         // m_pBlueBrush is the CBrush object initialized with a blue
         // brush using CreateSolidBrush
         return (HBRUSH)m_BlueBrush.GetSafeHandle();
      }
   }

   return hbr;
}