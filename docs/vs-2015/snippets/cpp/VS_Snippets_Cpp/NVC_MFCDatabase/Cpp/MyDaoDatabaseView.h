// MyDaoDatabaseView.h : interface of the CMyDaoDatabaseView class
//


#pragma once


class CMyDaoDatabaseView : public CView
{
protected: // create from serialization only
	CMyDaoDatabaseView();
	DECLARE_DYNCREATE(CMyDaoDatabaseView)

// Attributes
public:
	CMyDaoDatabaseDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CMyDaoDatabaseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyDatabaseView.cpp
inline CMyDaoDatabaseDoc* CMyDaoDatabaseView::GetDocument() const
   { return reinterpret_cast<CMyDaoDatabaseDoc*>(m_pDocument); }
#endif

