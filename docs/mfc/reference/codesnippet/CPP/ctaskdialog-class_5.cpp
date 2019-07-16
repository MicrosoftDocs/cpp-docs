// TODO: Replace the string below with the actual message to the user
CString message("Important information to the user");
// TODO: Replace the string below with the title of this project
CString title("Project Title");

CString emptyString;

if (CTaskDialog::IsSupported())
{
   CTaskDialog::ShowDialog(message, emptyString, title, 0, 0,
                           TDCBF_OK_BUTTON);
}
else
{
   AfxMessageBox(message);
}