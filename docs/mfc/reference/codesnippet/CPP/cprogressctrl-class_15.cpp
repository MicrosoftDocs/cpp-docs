CProgressCtrl myCtrl;

// Create a child progress control.
myCtrl.Create(WS_CHILD | WS_VISIBLE, CRect(10, 10, 200, 30), pParentWnd,
              IDC_PROGRESSCTRL);

// Set the size to be 1/10 of the total range.
int nLower, nUpper;
myCtrl.GetRange(nLower, nUpper);
myCtrl.SetStep((nUpper - nLower) / 10);