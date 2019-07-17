// Uses CalcWindowRect to determine size for new CFrameWnd
// based on the size of the current view. The end result is a
// top level frame window of the same size as CMdiView's frame.
void CMdiView::OnMyCreateFrame()
{
   CFrameWnd *pFrameWnd = new CFrameWnd;
   CRect myRect;
   GetClientRect(myRect);
   pFrameWnd->Create(NULL, _T("My Frame"));
   pFrameWnd->CalcWindowRect(&myRect, CWnd::adjustBorder);
   pFrameWnd->MoveWindow(0, 0, myRect.Width(), myRect.Height());
   pFrameWnd->ShowWindow(SW_SHOW);
}