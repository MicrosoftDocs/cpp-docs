BEGIN_EVENTSINK_MAP(CContainerDlg, CDialog)
ON_EVENT(CContainerDlg, IDC_CIRCCTRL1, 1 /* ClickIn */, OnClickInCircctrl1,
         VTS_I4 VTS_I4)
END_EVENTSINK_MAP()