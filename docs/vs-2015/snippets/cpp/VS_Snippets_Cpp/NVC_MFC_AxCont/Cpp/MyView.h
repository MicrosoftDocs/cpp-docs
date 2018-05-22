// MyView.h : interface of the CMyView class
//


#pragma once

// <Snippet12>
#include "circ.h"
// </Snippet12>

// <Snippet13>
class CMyView : public CView
{
// </Snippet13>
protected: // create from serialization only
   CMyView();
   DECLARE_DYNCREATE(CMyView)

// Attributes
public:
   CMyDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
   virtual void OnDraw(CDC* pDC);  // overridden to draw this view
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

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
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
   afx_msg void OnViewContainerdlg();

// <Snippet14>
protected:
   CCirc m_myCtl;
public:
   afx_msg void OnViewCircdlg();
};
// </Snippet14>

#ifndef _DEBUG  // debug version in MyView.cpp
inline CMyDoc* CMyView::GetDocument() const
   { return reinterpret_cast<CMyDoc*>(m_pDocument); }
#endif

