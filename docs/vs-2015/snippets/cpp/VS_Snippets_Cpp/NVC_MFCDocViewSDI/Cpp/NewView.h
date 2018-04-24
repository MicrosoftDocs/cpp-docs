#pragma once


// CNewView view

class CNewView : public CView
{
   DECLARE_DYNCREATE(CNewView)

public:
   CNewView();           // protected constructor used by dynamic creation
   virtual ~CNewView();

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


