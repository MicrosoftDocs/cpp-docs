// MyView.h : interface of the CMyView class
//


#pragma once


class CMyView : public CView
{
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
};

#ifndef _DEBUG  // debug version in MyView.cpp
inline CMyDoc* CMyView::GetDocument() const
   { return reinterpret_cast<CMyDoc*>(m_pDocument); }
#endif

