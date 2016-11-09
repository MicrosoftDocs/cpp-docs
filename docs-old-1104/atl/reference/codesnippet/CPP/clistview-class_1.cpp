void CMyListView::OnInitialUpdate()
{
   CListView::OnInitialUpdate();

   // this code only works for a report-mode list view
   ASSERT(GetStyle() & LVS_REPORT);

   CListCtrl& listCtrl = GetListCtrl();

   // Insert a column. This override is the most convenient.
   listCtrl.InsertColumn(0, _T("Player Name"), LVCFMT_LEFT);

   // The other InsertColumn() override requires an initialized
   // LVCOLUMN structure.
   LVCOLUMN col;
   col.mask = LVCF_FMT | LVCF_TEXT;
   col.pszText = _T("Jersey Number");
   col.fmt = LVCFMT_LEFT;
   listCtrl.InsertColumn(1, &col);

   // Set reasonable widths for our columns
   listCtrl.SetColumnWidth(0, LVSCW_AUTOSIZE_USEHEADER);
   listCtrl.SetColumnWidth(1, LVSCW_AUTOSIZE_USEHEADER);
}