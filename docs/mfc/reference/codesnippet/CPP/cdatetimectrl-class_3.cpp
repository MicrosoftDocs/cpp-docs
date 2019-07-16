// choose an arbitrary rectangle for creation
CRect rect(20, 20, 120, 45);
m_DateTimeCtrl.Create(WS_VISIBLE | WS_CHILD | WS_TABSTOP | DTS_SHOWNONE |
                          DTS_SHORTDATEFORMAT,
                      rect, this, IDC_DATETIMECTRL);