// TODO: Replace the strings below with the appropriate message,
// main instruction, and dialog title.
CString message("This is an important message to the user.");
CString mainInstruction("Important!\nPlease read!");
CString title("Alert Dialog");

CTaskDialog taskDialog(message, mainInstruction, title,
                       TDCBF_YES_BUTTON | TDCBF_NO_BUTTON | TDCBF_CANCEL_BUTTON);

taskDialog.AddCommandControl(201, L"First command button control");
taskDialog.AddCommandControl(202, L"Second command button control");
taskDialog.AddCommandControl(203, L"Third command button control");

// Show the CTaskDialog and remember how the user closed it.
int selection = taskDialog.DoModal();

switch (selection)
{
case 201:
   // TODO: Place processing here for the first
   // command button control.
   break;

case 202:
   // TODO: Place processing here for the second
   // command button control.
   break;

case 203:
   // TODO: Place processing here for the third
   // command button control.
   break;

default:
   break;
}

// Remove all the command controls so that we can use the same task
// dialog with new command button controls.
taskDialog.RemoveAllCommandControls();

taskDialog.AddCommandControl(301,
                             L"New first command button control");
taskDialog.AddCommandControl(302,
                             L"New second command button control should require elevation",
                             TRUE, TRUE);
taskDialog.AddCommandControl(303,
                             L"New third command button control should be disabled");

// Change the default command button control
taskDialog.SetDefaultCommandControl(302);

// Make sure the third option is disabled.
if (taskDialog.IsCommandControlEnabled(303))
{
   taskDialog.SetCommandControlOptions(303, FALSE);
}

taskDialog.DoModal();

switch (taskDialog.GetSelectedCommandControlID())
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

// Remove all the command button controls and add new ones from
// the string table resource.
taskDialog.RemoveAllCommandControls();
taskDialog.LoadCommandControls(1001, 1005);