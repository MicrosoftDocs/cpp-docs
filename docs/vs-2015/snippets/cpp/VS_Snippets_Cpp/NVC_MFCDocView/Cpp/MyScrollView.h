#pragma once



// CMyScrollView view

class CMyScrollView : public CScrollView
{
	DECLARE_DYNCREATE(CMyScrollView)

protected:
	CMyScrollView();           // protected constructor used by dynamic creation
	virtual ~CMyScrollView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual void OnInitialUpdate();     // first time after construct

	DECLARE_MESSAGE_MAP()
public:
   afx_msg BOOL OnEraseBkgnd(CDC* pDC);
public:
   afx_msg void OnScrollRecalclayout();
public:
   afx_msg void OnScrollSetscrollsizes();
protected:
   virtual void OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, CObject* /*pHint*/);
};


