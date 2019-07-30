CStatic myStatic;

// Create a child icon static control.
myStatic.Create(_T("my static"),
                WS_CHILD | WS_VISIBLE | SS_ICON | SS_CENTERIMAGE, CRect(10, 10, 150, 50),
                pParentWnd);

// If no icon is defined for the static control, define the icon
// to the system error icon.
if (myStatic.GetIcon() == NULL)
   myStatic.SetIcon(::LoadIcon(NULL, IDI_ERROR));