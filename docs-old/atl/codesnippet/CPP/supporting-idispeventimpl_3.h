   BEGIN_SINK_MAP(CMyCompositCtrl2)
      //Make sure the Event Handlers have __stdcall calling convention
      SINK_ENTRY_EX(IDC_CALENDAR1, __uuidof(DCalendarEvents), DISPID_CLICK, 
         &CMyCompositCtrl2::ClickCalendar1)
      SINK_ENTRY_EX(IDC_CALENDAR2, __uuidof(DCalendarEvents), DISPID_CLICK, 
         &CMyCompositCtrl2::ClickCalendar2)
   END_SINK_MAP()