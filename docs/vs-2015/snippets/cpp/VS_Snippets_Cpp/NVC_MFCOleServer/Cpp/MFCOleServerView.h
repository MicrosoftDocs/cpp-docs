// MFCOleServerView.h : interface of the CMFCOleServerView class
//


#pragma once


class CMFCOleServerView : public CView
{
protected: // create from serialization only
   CMFCOleServerView();
   DECLARE_DYNCREATE(CMFCOleServerView)

// Attributes
public:
   CMFCOleServerDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
   virtual void OnDraw(CDC* pDC);  // overridden to draw this view
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
   virtual ~CMFCOleServerView();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   afx_msg void OnCancelEditSrvr();
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnOleserverGetserveritem();
};

#ifndef _DEBUG  // debug version in MFCOleServerView.cpp
inline CMFCOleServerDoc* CMFCOleServerView::GetDocument() const
   { return reinterpret_cast<CMFCOleServerDoc*>(m_pDocument); }
#endif

