// TODO: Replace the strings below with the appropriate message,
// main instruction, and dialog title
CString message("This is an important message to the user.");
CString mainInstruction("Important!\nPlease read!");
CString title("Alert Dialog");

CTaskDialog taskDialog(message, mainInstruction, title,
                       TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);

taskDialog.AddRadioButton(201, L"First option");
taskDialog.AddRadioButton(202, L"Second option");
taskDialog.AddRadioButton(203, L"Third option");

taskDialog.DoModal();
int selection = taskDialog.GetSelectedRadioButtonID();

switch (selection)
{
case 201:
   // TODO: Place processing here for the first
   // radio button.
   break;

case 202:
   // TODO: Place processing here for the second
   // radio button.
   break;

case 203:
   // TODO: Place processing here for the third
   // radio button.
   break;

default:
   break;
}

// Remove all the radio buttons so that we can use the same task
// dialog with new radio buttons.
taskDialog.RemoveAllRadioButtons();

taskDialog.AddRadioButton(301, L"New first option");
taskDialog.AddRadioButton(302, L"New second option");
taskDialog.AddRadioButton(303,
                          L"New third option should be disabled");

// Change the default radio button to the second option
taskDialog.SetDefaultRadioButton(302);

// Make sure the third option is disabled.
if (taskDialog.IsRadioButtonEnabled(303))
{
   taskDialog.SetRadioButtonOptions(303, FALSE);
}

taskDialog.DoModal();
selection = taskDialog.GetSelectedRadioButtonID();

switch (taskDialog.GetSelectedRadioButtonID())
{
case 301:
   // TODO: Place processing here for new first
   // command button control.
   break;

case 302:
   // TODO: Place processing here for new second
   // command button control.
   break;

case 303:
   // TODO: Place processing here for the new third
   // command button control.
   break;

default:
   break;
}

// Remove all the radio button controls and add new ones from
// the string table resource.
taskDialog.RemoveAllRadioButtons();
taskDialog.LoadRadioButtons(1001, 1005);