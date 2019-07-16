CStatic myStatic;

// Create a child icon static control.
myStatic.Create(_T("my static"),
                WS_CHILD | WS_VISIBLE | SS_ICON | SS_CENTERIMAGE, CRect(10, 10, 150, 50),
                pParentWnd);

// If no image is defined for the static control, define the image
// to the system arrow and question mark cursor.
if (myStatic.GetCursor() == NULL)
   myStatic.SetCursor(::LoadCursor(NULL, IDC_HELP));