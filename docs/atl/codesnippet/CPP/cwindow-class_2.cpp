//The following example attaches an HWND to the CWindow object
//and calls CWindow::BeginPaint() and CWindow::EndPaint() in the 
// WM_PAINT handler of a CWindowImpl-derived class
LRESULT CMyCtrl::OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
   BOOL& /*bHandled*/)
{
   CWindow myWindow;
   myWindow.Attach(m_hWnd);
   PAINTSTRUCT ps;
   HDC hDC  = myWindow.BeginPaint(&ps);
   //Use the hDC as much as you want
   ::Rectangle(hDC, 0, 0, 50, 50);

   myWindow.EndPaint(&ps);

   return 0;
}