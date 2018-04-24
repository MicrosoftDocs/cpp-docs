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

public:
   afx_msg void OnAfxOleCanExitApp();
   BOOL CanExit();
public:
   afx_msg void OnSnippetsAfxOleGetMessageFilter();
public:
   afx_msg void OnSnippetsAfxolelockcontrol();
public:
   afx_msg void OnSnippetsAfxoleunlockcontrol();
   afx_msg void OnCMyDlg();
};


