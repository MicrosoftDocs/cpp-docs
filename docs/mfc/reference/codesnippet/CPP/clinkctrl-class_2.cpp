CRect rect1, rect2;
int height = 0;
SIZE sz = {0};
PTCHAR url =
    _T("Link 2)  ")
    _T("<A HREF=\"https://visualstudio.microsoft.com\">")
    _T("Microsoft VC++ Home")
    _T("</A>");
m_Link1.GetWindowRect(&rect1);
m_Link2.Create(url,
               (WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER),
               CRect(
                   rect1.left, rect1.bottom + rect1.Height(),
                   rect1.right, rect1.bottom + (2 * rect1.Height())),
               this,
               IDC_SYSLINK2);
m_Link2.GetClientRect(&rect2);
// The return value of GetIdealSize() is the same as sz.cy
height = m_Link2.GetIdealSize(
    rect2.Width(), &sz);
if ((sz.cx != 0) && (sz.cy != 0))
{
   int rc = m_Link2.SetWindowPos(
       this,
       0, 0, sz.cx, sz.cy,
       (SWP_NOMOVE | SWP_NOZORDER | SWP_NOREPOSITION | SWP_NOACTIVATE));
}