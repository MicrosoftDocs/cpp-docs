#pragma once


// CDCView view

class CDCView : public CView
{
   DECLARE_DYNCREATE(CDCView)

protected:
   CDCView();           // protected constructor used by dynamic creation
   virtual ~CDCView();

public:
   virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
   virtual void AssertValid() const;
#ifndef _WIN32_WCE
   virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
   enum DrawType
   {
      dtArc,
      dtPath,
      dtChord,
      dtBitmap,
      dt3dRect,
      dtFC,
      dtInvertRect,
      dtPie,
      dtPolygon,
      dtRectangle,
      dtRoundRect,
      dtClientDC,
      dtAfxDrawDitheredBitmap,
      dtAfxDrawGrayBitmap,
      dtAfxGetDitheredBitmap,
      dtAfxGetGrayBitmap,
      
      dtCount // this must be the last element
   } m_DrawType;
   
   void DrawArc(CDC* pDC);
   void DrawPath(CDC* pDC);
   void DrawChord(CDC* pDC);
   void DrawBitmap(CDC* pDC);
   void Draw3dRect(CDC* pDC);
   void DrawFC(CDC* pDC);
   void DoInvertRect(CDC* pDC);
   void DrawPie(CDC* pDC);
   void DrawPolygon(CDC* pDC);
   void DrawRectangle(CDC* pDC);
   void DrawRoundRect(CDC* pDC);
   void DrawInClientDC(CDC* pDC);
   void DrawDitheredBitmap(CDC* pDC);
   void DrawGrayBitmap(CDC* pDC);
   void GetDitheredBitmap(CDC* pDC);
   void GetGrayBitmap(CDC* pDC);

   typedef void (CDCView::*t_pDrawFunc)(CDC* pDC);
   t_pDrawFunc m_aDrawFuncs[dtCount];

protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnDcArc();
public:
   afx_msg void OnUpdateDcArc(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcPath();
public:
   afx_msg void OnUpdateDcPath(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcChord();
public:
   afx_msg void OnUpdateDcChord(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcBitmap();
public:
   afx_msg void OnUpdateDcBitmap(CCmdUI *pCmdUI);
public:
   afx_msg void OnDc3drect();
public:
   afx_msg void OnUpdateDc3drect(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcFramectl();
public:
   afx_msg void OnUpdateDcFramectl(CCmdUI *pCmdUI);
public:
   afx_msg void OnEnumPens();
public:
   afx_msg void OnDcInvertrect();
public:
   afx_msg void OnUpdateDcInvertrect(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcPie();
public:
   afx_msg void OnUpdateDcPie(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcPolygon();
public:
   afx_msg void OnUpdateDcPolygon(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcRectangle();
public:
   afx_msg void OnUpdateDcRectangle(CCmdUI *pCmdUI);
public:
   afx_msg void OnDcRoundrect();
public:
   afx_msg void OnUpdateDcRoundrect(CCmdUI *pCmdUI);
public:
   afx_msg void DoStartDoc();
public:
   afx_msg void OnDcClientdc();
public:
   afx_msg void OnUpdateDcClientdc(CCmdUI *pCmdUI);
public:
   afx_msg void OnStuffCpaintdc();
public:
   afx_msg void OnStuffDopenstuff();
public:
   afx_msg void OnAfxAfxdrawditheredbitmap();
public:
   afx_msg void OnUpdateAfxAfxdrawditheredbitmap(CCmdUI *pCmdUI);
public:
   afx_msg void OnAfxAfxdrawgraybitmap();
public:
   afx_msg void OnUpdateAfxAfxdrawgraybitmap(CCmdUI *pCmdUI);
public:
   afx_msg void OnAfxAfxgetditheredbitmap();
public:
   afx_msg void OnUpdateAfxAfxgetditheredbitmap(CCmdUI *pCmdUI);
public:
   afx_msg void OnAfxAfxgetgraybitmap();
public:
   afx_msg void OnUpdateAfxAfxgetgraybitmap(CCmdUI *pCmdUI);
};


