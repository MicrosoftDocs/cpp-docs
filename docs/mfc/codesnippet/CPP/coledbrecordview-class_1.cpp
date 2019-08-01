CFrameWnd* pFrame = (CFrameWnd*)AfxGetMainWnd();
COleDBRecordView* pView = (COleDBRecordView*)pFrame->GetActiveView();

// CProductAccessor is a user-defined accessor class
CRowset<CAccessor<CProductAccessor>>* pRowSet =
(CRowset<CAccessor<CProductAccessor>>*)pView->OnGetRowset();