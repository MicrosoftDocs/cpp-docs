// MFCMessageHandlingView.h : interface of the CMyView class
//


#pragma once


class CMyView : public CFormView
{
protected: // create from serialization only
   CMyView();
   DECLARE_DYNCREATE(CMyView)

public:
   enum{ IDD = IDD_MFCMESSAGEHANDLING_FORM };

// Attributes
public:
   CMFCMessageHandlingDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
   virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
   virtual ~CMyView();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
public:
// <Snippet4>
   afx_msg void OnEditCut();
// </Snippet4>
public:
   afx_msg void OnUpdateEditCut(CCmdUI *pCmdUI);
public:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
// <Snippet5>
   afx_msg void OnBnClickedMybutton();
// </Snippet5>
};

#ifndef _DEBUG  // debug version in MFCMessageHandlingView.cpp
inline CMFCMessageHandlingDoc* CMyView::GetDocument() const
   { return reinterpret_cast<CMFCMessageHandlingDoc*>(m_pDocument); }
#endif

