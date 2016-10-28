// arrange minimized MDI child windows
// called from menu item; CMdiChildFrame is derived from CMDIChildWnd
void CMdiChildFrame::OnActionArrangeIconicWindows()
{
   UINT height = GetParent()->ArrangeIconicWindows();   
   TRACE(_T("height = %d\n"), height);
}