CView *pActiveView = ((CFrameWnd *)m_pMainWnd)->GetActiveView();
m_pOldView = pActiveView;
m_pNewView = (CView *)new CNewView;
if (NULL == m_pNewView)
   return FALSE;

CDocument *pCurrentDoc = ((CFrameWnd *)m_pMainWnd)->GetActiveDocument();

// Initialize a CCreateContext to point to the active document.
// With this context, the new view is added to the document
// when the view is created in CView::OnCreate().
CCreateContext newContext;
newContext.m_pNewViewClass = NULL;
newContext.m_pNewDocTemplate = NULL;
newContext.m_pLastView = NULL;
newContext.m_pCurrentFrame = NULL;
newContext.m_pCurrentDoc = pCurrentDoc;

// The ID of the initial active view is AFX_IDW_PANE_FIRST.
// Incrementing this value by one for additional views works
// in the standard document/view case but the technique cannot
// be extended for the CSplitterWnd case.
UINT viewID = AFX_IDW_PANE_FIRST + 1;
CRect rect(0, 0, 0, 0); // Gets resized later.

// Create the new view. In this example, the view persists for
// the life of the application. The application automatically
// deletes the view when the application is closed.
m_pNewView->Create(NULL, _T("AnyWindowName"), WS_CHILD, rect, m_pMainWnd, viewID, &newContext);

// When a document template creates a view, the WM_INITIALUPDATE
// message is sent automatically. However, this code must
// explicitly send the message, as follows.
m_pNewView->SendMessage(WM_INITIALUPDATE, 0, 0);