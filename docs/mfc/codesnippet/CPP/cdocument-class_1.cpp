// The following example toggles two views in an SDI (single document
// interface) frame window. A design decision must be made as to
// whether to leave the inactive view connected to the document,
// such that the inactive view continues to receive OnUpdate
// notifications from the document. It is usually desirable to
// keep the inactive view continuously in sync with the document, even
// though it is inactive. However, doing so incurs a performance cost,
// as well as the programming cost of implementing OnUpdate hints.
// It may be less expensive, in terms of performance and/or programming,
// to re-sync the inactive view with the document only with it is
// reactivated. This example illustrates this latter approach, by
// reconnecting the newly active view and disconnecting the newly
// inactive view, via calls to CDocument::AddView and RemoveView.

void CMainFrame::OnViewChange(UINT nCmdID)
// There is an ON_COMMAND_RANGE message map entry associated with
// OnViewChange:
// ON_COMMAND_RANGE(ID_VIEW_CHANGE1, ID_VIEW_CHANGE2, &OnViewChange)
{
   CView *pViewAdd;
   CView *pViewRemove;
   CDocument *pDoc = GetActiveDocument();

   // cvView1 and cvView2 are enum members defined in my CMainFrame class
   if ((nCmdID == ID_VIEW_CHANGE1) && (m_currentView == cvView1))
      return;
   if ((nCmdID == ID_VIEW_CHANGE2) && (m_currentView == cvView2))
      return;

   if (nCmdID == ID_VIEW_CHANGE2)
   {
      if (m_pView2 == NULL)
      {
         m_pView1 = GetActiveView();
         m_pView2 = new CMyView2;

         //Note that if OnSize has been overridden in CMyView2
         //and GetDocument() is used in this override it can
         //cause assertions and, if the assertions are ignored,
         //cause access violation.

         m_pView2->Create(NULL, NULL, AFX_WS_DEFAULT_VIEW, rectDefault, this,
                          AFX_IDW_PANE_FIRST + 1, NULL);
      }
      pViewAdd = m_pView2;
      pViewRemove = m_pView1;
      m_currentView = cvView2;
   }
   else
   {
      pViewAdd = m_pView1;
      pViewRemove = m_pView2;
      m_currentView = cvView1;
   }

   // Set the child i.d. of the active view to AFX_IDW_PANE_FIRST,
   // so that CFrameWnd::RecalcLayout will allocate to this
   // "first pane" that portion of   the frame window's client area
   // not allocated to control   bars.  Set the child i.d. of the
   // other view to anything other than AFX_IDW_PANE_FIRST; this
   // examples switches the child id's of the two views.

   int nSwitchChildID = pViewAdd->GetDlgCtrlID();
   pViewAdd->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
   pViewRemove->SetDlgCtrlID(nSwitchChildID);

   // Show the newly active view and hide the inactive view.

   pViewAdd->ShowWindow(SW_SHOW);
   pViewRemove->ShowWindow(SW_HIDE);

   // Connect the newly active view to the document, and
   // disconnect the inactive view.
   pDoc->AddView(pViewAdd);
   pDoc->RemoveView(pViewRemove);

   SetActiveView(pViewAdd);
   RecalcLayout();
}