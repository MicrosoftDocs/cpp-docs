CButton myBitmapButton;

// Create a bitmap button.
myBitmapButton.Create(_T("My button"), WS_CHILD | WS_VISIBLE | BS_BITMAP,
                      CRect(10, 10, 60, 50), pParentWnd, 1);

// If no bitmap is defined for the button, define the bitmap to the
// system close bitmap.
if (myBitmapButton.GetBitmap() == NULL)
   myBitmapButton.SetBitmap(::LoadBitmap(NULL, MAKEINTRESOURCE(OBM_CLOSE)));