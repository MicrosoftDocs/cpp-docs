// In this example a rectangle is drawn in a view.
// The OnChangeRect() function changes the dimensions
// of the rectangle and then calls CWnd::Invalidate() so the
// client area of the view will be redrawn next time the
// window is updated.  It then calls CWnd::UpdateWindow
// to force the new rectangle to be painted.

void CMdiView::OnChangeRect()
{
   // Change Rectangle size.
   m_rcBox = CRect(20, 20, 210, 210);

   // Invalidate window so entire client area
   // is redrawn when UpdateWindow is called.
   Invalidate();

   // Update Window to cause View to redraw.
   UpdateWindow();
}

// On Draw function draws the rectangle.
void CMdiView::OnDraw(CDC *pDC)
{
   // Other draw code here.

   pDC->Draw3dRect(m_rcBox, 0x00FF0000, 0x0000FF00);
}