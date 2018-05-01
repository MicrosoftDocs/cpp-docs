// MainFrm.h : interface of the CMainFrame class
//


#pragma once

class CMainFrame : public CMDIFrameWnd
{
   DECLARE_DYNAMIC(CMainFrame)
public:
   CMainFrame();

// Attributes
public:
   UINT_PTR m_nTimer;

// Operations
public:

// Overrides
public:
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
   virtual ~CMainFrame();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
   CStatusBar  m_wndStatusBar;
   CToolBar    m_wndToolBar;

// Generated message map functions
protected:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   DECLARE_MESSAGE_MAP()

// <Snippet11>
   afx_msg void OnUpdatePage(CCmdUI *pCmdUI);
// </Snippet11>
   int m_nPage;
public:
   afx_msg void OnSetPaneText();
   afx_msg void OnUpdatePane(CCmdUI* pCmdUI);
public:
   afx_msg void OnDhtmlMultipagedlg();
public:
   afx_msg void OnViewStarttimer();
public:
   afx_msg void OnViewKilltimer();
public:
   afx_msg void OnTimer(UINT_PTR nIDEvent);
};


