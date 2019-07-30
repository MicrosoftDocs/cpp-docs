CButton myIconButton2;

// Create an icon button.
myIconButton2.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_ICON,
                     CRect(10, 10, 60, 50), pParentWnd, 1);

// If no icon is defined for the button, define the icon to the
// system error icon.
if (myIconButton2.GetIcon() == NULL)
   myIconButton2.SetIcon(::LoadIcon(NULL, IDI_ERROR));