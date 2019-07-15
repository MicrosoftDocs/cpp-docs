CButton myRadioButton;

// Create a radio button.
myRadioButton.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_RADIOBUTTON,
                     CRect(10, 10, 100, 30), pParentWnd, 1);

// Change the button style to use one of the "auto" styles; for
// push button, change to def push button.
UINT uStyle = myRadioButton.GetButtonStyle();
if (uStyle == BS_PUSHBUTTON)
   uStyle = BS_DEFPUSHBUTTON;
else if (uStyle == BS_RADIOBUTTON)
   uStyle = BS_AUTORADIOBUTTON;
else if (uStyle == BS_CHECKBOX)
   uStyle = BS_AUTOCHECKBOX;
else if (uStyle == BS_3STATE)
   uStyle = BS_AUTO3STATE;

// Change the button style to the one wanted.
myRadioButton.SetButtonStyle(uStyle);