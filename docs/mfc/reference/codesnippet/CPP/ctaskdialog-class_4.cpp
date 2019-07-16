// TODO: Replace the strings below with the appropriate message,
// main instruction, and dialog title
CString message("This is an important message to the user.");
CString mainInstruction("Important!\nPlease read!");
CString title("Alert Dialog");

CTaskDialog taskDialog(message, mainInstruction, title,
                       TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);

// Add the verification checkbox and set the default state.
taskDialog.SetVerificationCheckboxText(L"Remember your selection.");
taskDialog.SetVerificationCheckbox(false);

taskDialog.DoModal();

if (taskDialog.GetVerificationCheckboxState())
{
   // TODO: Write settings of the task dialog to the registry
}