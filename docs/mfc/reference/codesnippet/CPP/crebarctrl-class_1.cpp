CReBarCtrl *pReBarCtrl = new CReBarCtrl();
CRect rect;
GetWindowRect(rect);
pReBarCtrl->Create(RBS_BANDBORDERS, rect, this, AFX_IDW_REBAR);

// Use ReBar Control.

delete pReBarCtrl;