// IpFrame.h : interface of the CInPlaceFrame class
//

#pragma once

class CInPlaceFrame : public COleIPFrameWnd
{
   DECLARE_DYNCREATE(CInPlaceFrame)
public:
   CInPlaceFrame();

// Attributes
public:

// Operations
public:

// Overrides
   public:
   virtual BOOL OnCreateControlBars(CFrameWnd* pWndFrame, CFrameWnd* pWndDoc);
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
   virtual ~CInPlaceFrame();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:
   CToolBar    m_wndToolBar;
   COleDropTarget	m_dropTarget;
   COleResizeBar   m_wndResizeBar;

// Generated message map functions
protected:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   DECLARE_MESSAGE_MAP()
};

