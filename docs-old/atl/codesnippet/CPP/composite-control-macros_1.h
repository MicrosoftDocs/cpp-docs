BEGIN_SINK_MAP(CMyCompositeCtrl)
   //Make sure the Event Handlers have __stdcall calling convention
   SINK_ENTRY(IDC_CALENDAR1, DISPID_CLICK, &CMyCompositeCtrl::ClickCalendar1)
   SINK_ENTRY(IDC_CALENDAR2, DISPID_CLICK, &CMyCompositeCtrl::ClickCalendar2)
END_SINK_MAP()