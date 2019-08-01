CButton myButton1, myButton2, myButton3, myButton4;

// Create a push button.
myButton1.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                 CRect(10, 10, 100, 30), pParentWnd, 1);

// Create a radio button.
myButton2.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_RADIOBUTTON,
                 CRect(10, 40, 100, 70), pParentWnd, 2);

// Create an auto 3-state button.
myButton3.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_AUTO3STATE,
                 CRect(10, 70, 100, 100), pParentWnd, 3);

// Create an auto check box.
myButton4.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
                 CRect(10, 100, 100, 130), pParentWnd, 4);