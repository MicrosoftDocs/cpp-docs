#pragma once


// CRgnView view

class CRgnView : public CView
{
	DECLARE_DYNCREATE(CRgnView)

protected:
	CRgnView();           // protected constructor used by dynamic creation
	virtual ~CRgnView();

protected:
   enum RgnType
   {
      rtCombineRgn,
      rtCreateEllipticRgn,
      rtCreatePolygonRgn,
      rtCreateRectRgnIndirect,
      rtCreateRoundRectRgn,

      rtCount // this must be last element
   } m_RgnType;

   void DrawCombineRgn(CDC* pDC);
   void DrawCreateEllipticRgn(CDC* pDC);
   void DrawCreatePolygonRgn(CDC* pDC);
   void DrawCreateRectRgnIndirect(CDC* pDC);
   void DrawCreateRoundRectRgn(CDC* pDC);

   typedef void (CRgnView::*t_pDrawFunc)(CDC* pDC);
   t_pDrawFunc m_aDrawFuncs[rtCount];

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
public:
   afx_msg void OnRgnCombinergn();
public:
   afx_msg void OnRgnCreateellipticrgn();
public:
   afx_msg void OnRgnCreatepolygonrgn();
public:
   afx_msg void OnUpdateRgnCombinergn(CCmdUI *pCmdUI);
public:
   afx_msg void OnUpdateRgnCreateellipticrgn(CCmdUI *pCmdUI);
public:
   afx_msg void OnUpdateRgnCreatepolygonrgn(CCmdUI *pCmdUI);
public:
   afx_msg void OnCrgnCreaterectrgn();
public:
   afx_msg void OnDrawCreaterectrgnindirect();
public:
   afx_msg void OnUpdateDrawCreaterectrgnindirect(CCmdUI *pCmdUI);
public:
   afx_msg void OnDrawCreateroundrectrgn();
public:
   afx_msg void OnUpdateDrawCreateroundrectrgn(CCmdUI *pCmdUI);
public:
   afx_msg void OnCrgnEqualrgn();
};


