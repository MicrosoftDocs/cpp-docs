#pragma once


// CMdiView view

class CMdiView : public CView
{
	DECLARE_DYNCREATE(CMdiView)

protected:
	CMdiView();           // protected constructor used by dynamic creation
	virtual ~CMdiView();

public:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

   CEdit m_Edit;

   CRect m_rcBox;

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnReplaceMenu();
public:
   afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
   afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
public:
   afx_msg void OnPaint();
public:
   afx_msg void OnMouseMove(UINT nFlags, CPoint point);
public:
   afx_msg void OnMyCreateFrame();
public:
   virtual void OnInitialUpdate();
public:
   afx_msg BOOL OnToolTipNotify(UINT id, NMHDR* pNMHDR, LRESULT* pResult);
protected:
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
public:
   afx_msg void OnSize(UINT nType, int cx, int cy);
public:
   afx_msg void OnEditCopy();
public:
   afx_msg void OnChangeRect();
};


