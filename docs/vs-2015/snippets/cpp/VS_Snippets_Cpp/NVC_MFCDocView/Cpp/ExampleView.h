#pragma once


// CExampleView view

class CExampleView : public CView
{
	DECLARE_DYNCREATE(CExampleView)

protected:
	CExampleView();           // protected constructor used by dynamic creation
	virtual ~CExampleView();

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
   virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
};


