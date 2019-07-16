CProgressCtrl myCtrl;

// Create a child progress control.
myCtrl.Create(WS_CHILD | WS_VISIBLE, CRect(10, 10, 200, 30), pParentWnd,
              IDC_PROGRESSCTRL);

// Advance the position to the next step.
myCtrl.StepIt();