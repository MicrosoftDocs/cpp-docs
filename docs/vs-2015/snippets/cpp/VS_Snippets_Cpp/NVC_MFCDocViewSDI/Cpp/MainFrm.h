// MainFrm.h : interface of the CMainFrame class
//


#pragma once

class CMainFrame : public CFrameWnd
{
   
protected: // create from serialization only
   CMainFrame();
   DECLARE_DYNCREATE(CMainFrame)

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

   enum CurrentViewID
   {
      cvView1,
      cvView2
   } m_currentView;
   CView* m_pView1;
   CView* m_pView2;

protected:  // control bar embedded members
   CStatusBar  m_wndStatusBar;
   CToolBar    m_wndToolBar;

// Generated message map functions
protected:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   DECLARE_MESSAGE_MAP()

public:
   afx_msg void OnViewChange(UINT nCmdID);
};


