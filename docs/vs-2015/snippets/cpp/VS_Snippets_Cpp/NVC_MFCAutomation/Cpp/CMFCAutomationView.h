// CMFCAutomationView.h : interface of the CCMFCAutomationView class
//


#pragma once


class CCMFCAutomationView : public CView
{
protected: // create from serialization only
	CCMFCAutomationView();
	DECLARE_DYNCREATE(CCMFCAutomationView)

// Attributes
public:
	CCMFCAutomationDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CCMFCAutomationView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CMFCAutomationView.cpp
inline CCMFCAutomationDoc* CCMFCAutomationView::GetDocument() const
   { return reinterpret_cast<CCMFCAutomationDoc*>(m_pDocument); }
#endif

