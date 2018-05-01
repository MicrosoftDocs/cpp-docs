// CToolBarCtrl_s1View.h : interface of the CCToolBarCtrl_s1View class
//


#pragma once


class CCToolBarCtrl_s1View : public CView
{
protected: // create from serialization only
	CCToolBarCtrl_s1View();
	DECLARE_DYNCREATE(CCToolBarCtrl_s1View)

// Attributes
public:
	CCToolBarCtrl_s1Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CCToolBarCtrl_s1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CToolBarCtrl_s1View.cpp
inline CCToolBarCtrl_s1Doc* CCToolBarCtrl_s1View::GetDocument() const
   { return reinterpret_cast<CCToolBarCtrl_s1Doc*>(m_pDocument); }
#endif

