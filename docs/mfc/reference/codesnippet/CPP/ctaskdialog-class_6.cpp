// TODO: Replace the strings below with the appropriate message,
// main instruction, and dialog title
CString message("This is an important message to the user.");
CString mainInstruction("Important!\nPlease read!");
CString title("Alert Dialog");

CTaskDialog taskDialog(message, mainInstruction, title);

// Create a button mask.
int buttons = TDCBF_OK_BUTTON | TDCBF_CANCEL_BUTTON;
buttons |= TDCBF_RETRY_BUTTON | TDCBF_CLOSE_BUTTON;

taskDialog.SetCommonButtons(buttons);

// Disable the close button and make the retry button require
// elevation.
taskDialog.SetCommonButtonOptions(TDCBF_CLOSE_BUTTON,
                                  TDCBF_RETRY_BUTTON);

taskDialog.DoModal();