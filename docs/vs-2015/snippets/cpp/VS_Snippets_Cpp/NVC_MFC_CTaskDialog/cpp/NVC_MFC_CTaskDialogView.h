
// NVC_MFC_CTaskDialogView.h : interface of the CNVC_MFC_CTaskDialogView class
//


#pragma once


class CNVC_MFC_CTaskDialogView : public CView
{
protected: // create from serialization only
	CNVC_MFC_CTaskDialogView();
	DECLARE_DYNCREATE(CNVC_MFC_CTaskDialogView)

// Attributes
public:
	CNVC_MFC_CTaskDialogDoc* GetDocument() const;

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
	virtual ~CNVC_MFC_CTaskDialogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in NVC_MFC_CTaskDialogView.cpp
inline CNVC_MFC_CTaskDialogDoc* CNVC_MFC_CTaskDialogView::GetDocument() const
   { return reinterpret_cast<CNVC_MFC_CTaskDialogDoc*>(m_pDocument); }
#endif

