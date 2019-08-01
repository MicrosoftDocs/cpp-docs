CButton myPushButton;

// Create a push button.
myPushButton.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                    CRect(10, 10, 100, 30), pParentWnd, 1);

// Invert the highlight state of the button.
myPushButton.SetState(!(myPushButton.GetState() & 0x0004));