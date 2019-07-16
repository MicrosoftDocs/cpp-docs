CProgressCtrl myCtrl;

// Create a child progress control.
myCtrl.Create(WS_CHILD | WS_VISIBLE, CRect(10, 10, 200, 30), pParentWnd,
              IDC_PROGRESSCTRL);

// Set the position to be one-fourth of the total range.
int nLower, nUpper;
myCtrl.GetRange(nLower, nUpper);
myCtrl.SetPos((nUpper - nLower) / 4);