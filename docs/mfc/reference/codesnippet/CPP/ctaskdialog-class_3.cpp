// TODO: Replace the strings below with the appropriate message,
// main instruction, and dialog title
CString message("This is an important message to the user.");
CString mainInstruction("Important!\nPlease read!");
CString title("Alert Dialog");

CTaskDialog taskDialog(message, mainInstruction, title,
                       TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);

// Setting new information to be able to reuse the dialog resource
taskDialog.SetWindowTitle(L"New title for the task dialog");
taskDialog.SetContent(L"New message to show the user.");
taskDialog.SetMainInstruction(L"Even more important!");
taskDialog.SetMainIcon(TD_ERROR_ICON);
taskDialog.SetDialogWidth(300);

// Add a footer
taskDialog.SetFooterText(L"Footer information for the dialog.");
taskDialog.SetFooterIcon(TD_INFORMATION_ICON);

// Add expansion information
taskDialog.SetExpansionArea(L"Additional information\non two lines.",
                            L"Click here for more information.",
                            L"Click here to hide the extra information.");

// Change the options to show the expanded information by default.
// It is necessary to retrieve the current options first.
int options = taskDialog.GetOptions();
options |= TDF_EXPANDED_BY_DEFAULT;
taskDialog.SetOptions(options);

taskDialog.DoModal();