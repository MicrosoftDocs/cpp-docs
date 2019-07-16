HDLAYOUT hdl;
WINDOWPOS wpos;
RECT rc;

// Reposition the header control so that it is placed at
// the top of its parent window's client area.
m_myHeaderCtrl.GetParent()->GetClientRect(&rc);

hdl.prc = &rc;
hdl.pwpos = &wpos;
if (m_myHeaderCtrl.Layout(&hdl))
{
   m_myHeaderCtrl.SetWindowPos(
       CWnd::FromHandle(wpos.hwndInsertAfter),
       wpos.x,
       wpos.y,
       wpos.cx,
       wpos.cy,
       wpos.flags | SWP_SHOWWINDOW);
}
