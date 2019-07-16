// From message map for CMdiView, a CView-derived class
ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTW, 0, 0xFFFF, &CMdiView::OnToolTipNotify)
ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTA, 0, 0xFFFF, &CMdiView::OnToolTipNotify)