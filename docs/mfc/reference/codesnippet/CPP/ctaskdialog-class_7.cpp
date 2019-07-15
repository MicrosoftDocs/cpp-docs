// TODO: Replace the strings below with the appropriate message,
// main instruction, and dialog title
CString message("This is an important message to the user.");
CString mainInstruction("Important!\nPlease read!");
CString title("Alert Dialog");

CTaskDialog taskDialog(message, mainInstruction, title,
                       TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);

// Add a marquee progress bar.
taskDialog.SetProgressBarMarquee();

taskDialog.DoModal();

// Remove the marquee bar and replace it with a standard progress bar
taskDialog.SetProgressBarMarquee(0);
taskDialog.SetProgressBarRange(0, 100);
taskDialog.SetProgressBarPosition(75);
taskDialog.SetProgressBarState();

taskDialog.DoModal();