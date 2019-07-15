// int m_iCursor
void CPage1::OnSetCursor()
{
   UpdateData();

   switch (m_iCursor)
   {
   case 0:
      m_Button.SetMouseCursor(NULL);
      break;

   case 1:
      m_Button.SetMouseCursorHand();
      break;

   case 2:
      m_Button.SetMouseCursor(AfxGetApp()->LoadCursor(IDC_CURSOR));
      break;
   }
}