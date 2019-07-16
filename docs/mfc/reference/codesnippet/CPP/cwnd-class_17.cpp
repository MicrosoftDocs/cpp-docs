// resize dialog to client's size
void CMyDlg::OnSizeToClient()
{
   CRect myRect;
   GetClientRect(&myRect);

   ClientToScreen(myRect);
   MoveWindow(myRect.left, myRect.top,
              myRect.Width(), myRect.Height());
}