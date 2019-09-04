
// Create the bitmap button (must include the BS_OWNERDRAW style).
pmyButton->Create(NULL, WS_CHILD | WS_VISIBLE | BS_OWNERDRAW,
                  CRect(10, 10, 100, 100), pParentWnd, 1);

// Load the bitmaps for this button.
pmyButton->LoadBitmaps(IDB_UP, IDB_DOWN, IDB_FOCUS, IDB_DISABLE);