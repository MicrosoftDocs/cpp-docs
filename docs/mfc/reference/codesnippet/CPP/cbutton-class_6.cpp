CButton myA3Button;

// Create an auto 3-state button.
myA3Button.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_AUTO3STATE,
                  CRect(10, 10, 100, 30), pParentWnd, 1);

// Set the check state to the next state
// (i.e. BST_UNCHECKED changes to BST_CHECKED
// BST_CHECKED changes to BST_INDETERMINATE
// BST_INDETERMINATE changes to BST_UNCHECKED).
myA3Button.SetCheck(((myA3Button.GetCheck() + 1) % 3));