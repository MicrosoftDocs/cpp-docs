RECT rc = {50, 50, 200, 200};

Rectangle(pDC->GetSafeHdc(), rc.left, rc.top, rc.right, rc.bottom);

// The Win32 call to FillRect requires an HBRUSH.
// The HBRUSH operator casts the CBrush object
// to the required type.
CBrush brush;
brush.CreateSysColorBrush(COLOR_BTNFACE);
FillRect(pDC->GetSafeHdc(), &rc, (HBRUSH)brush);