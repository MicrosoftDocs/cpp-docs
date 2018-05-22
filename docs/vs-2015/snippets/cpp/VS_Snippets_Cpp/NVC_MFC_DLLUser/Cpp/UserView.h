// UserView.h : interface of the CUserView class
//


#pragma once


class CUserView : public CView
{
protected: // create from serialization only
   CUserView();
   DECLARE_DYNCREATE(CUserView)

// Attributes
public:
   CUserDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
   virtual void OnDraw(CDC* pDC);  // overridden to draw this view
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
   virtual ~CUserView();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in UserView.cpp
inline CUserDoc* CUserView::GetDocument() const
   { return reinterpret_cast<CUserDoc*>(m_pDocument); }
#endif

