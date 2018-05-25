#pragma once


// CMyView2 view

class CMyView2 : public CView
{
	DECLARE_DYNCREATE(CMyView2)

public:
	CMyView2();
protected:
	virtual ~CMyView2();

public:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


