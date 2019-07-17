CProgressCtrl myCtrl;

// Create a child progress control.
myCtrl.Create(WS_CHILD | WS_VISIBLE, CRect(10, 10, 200, 30), pParentWnd,
              IDC_PROGRESSCTRL);

// Set the new position to half of the current position.
myCtrl.SetPos(myCtrl.GetPos() / 2);