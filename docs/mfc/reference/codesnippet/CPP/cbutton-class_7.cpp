CButton myIconButton;

// Create an icon button.
myIconButton.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_ICON,
                    CRect(10, 10, 60, 50), pParentWnd, 1);

// If no image is defined for the button, define the image to the
// system arrow and question mark cursor.
if (myIconButton.GetCursor() == NULL)
   myIconButton.SetCursor(::LoadCursor(NULL, IDC_HELP));