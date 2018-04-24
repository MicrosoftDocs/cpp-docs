// MyHtmlView.h : interface of the CMyHtmlView class
//


#pragma once


class CMyHtmlView : public CHtmlView
{
protected: // create from serialization only
	CMyHtmlView();
	DECLARE_DYNCREATE(CMyHtmlView)

// Attributes
public:
	CMyDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CMyHtmlView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnViewDhtmldlg();
public:
   afx_msg void OnGoToMicrosoft();
public:
   afx_msg void OnViewAfxgetappmodulestate();
};

#ifndef _DEBUG  // debug version in MyHtmlView.cpp
inline CMyDoc* CMyHtmlView::GetDocument() const
   { return reinterpret_cast<CMyDoc*>(m_pDocument); }
#endif

