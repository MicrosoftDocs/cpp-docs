void CMainFrame::OnDisplayErrorMessage()
{
   // This displays a message box with the title "Error"
   // and the message "Help, Something went wrong."
   // The error icon is displayed in the message box, along with
   // an OK button.
   MessageBox(_T("Help, Something went wrong."), _T("Error"),
              MB_ICONERROR | MB_OK);
}