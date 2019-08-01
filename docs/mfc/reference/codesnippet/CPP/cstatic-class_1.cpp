// This code can be placed in OnInitDialog
CStatic myStatic;

// Create a child static control that centers its text horizontally.
myStatic.Create(_T("my static"), WS_CHILD | WS_VISIBLE | SS_CENTER,
                CRect(10, 10, 150, 50), pParentWnd);