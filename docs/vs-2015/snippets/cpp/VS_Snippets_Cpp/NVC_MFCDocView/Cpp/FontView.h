#pragma once


// CFontView view

class CFontView : public CView
{
	DECLARE_DYNCREATE(CFontView)

protected:
	CFontView();           // protected constructor used by dynamic creation
	virtual ~CFontView();

public:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
   enum FontType
   {
      ftFont,
      ftFontIndirect,
      ftPointFont,
      ftPointFontIndirect,
      ftHandle,
      ftHFONT,

      ftCount // this must be last element
   } m_FontType;

   void DrawFont(CDC* pDC);
   void DrawFontIndirect(CDC* pDC);
   void DrawPointFont(CDC* pDC);
   void DrawPointFontIndirect(CDC* pDC);
   void DrawHandle(CDC* pDC);
   void DrawHFONT(CDC* pDC);

   typedef void (CFontView::*t_pDrawFunc)(CDC* pDC);
   t_pDrawFunc m_aDrawFuncs[ftCount];

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnFontFont();
public:
   afx_msg void OnUpdateFontFont(CCmdUI *pCmdUI);
public:
   afx_msg void OnFontFontindirect();
public:
   afx_msg void OnUpdateFontFontindirect(CCmdUI *pCmdUI);
public:
   afx_msg void OnFontPointfont();
public:
   afx_msg void OnUpdateFontPointfont(CCmdUI *pCmdUI);
public:
   afx_msg void OnFontPointfontindirect();
public:
   afx_msg void OnUpdateFontPointfontindirect(CCmdUI *pCmdUI);
public:
   afx_msg void OnFontHandle();
public:
   afx_msg void OnUpdateFontHandle(CCmdUI *pCmdUI);
public:
   afx_msg void OnFontHfont();
public:
   afx_msg void OnUpdateFontHfont(CCmdUI *pCmdUI);
public:
   afx_msg void OnFontTracefontname();
public:
   afx_msg void OnFontdialogCfontdialog();
public:
   afx_msg void OnFontdialogGetcolor();
public:
   afx_msg void OnFontdialogGetcurrentfont();
public:
   afx_msg void OnFontdialogGetfacename();
public:
   afx_msg void OnFontdialogGetsize();
public:
   afx_msg void OnFontdialogGetstylename();
public:
   afx_msg void OnFontdialogGetweight();
public:
   afx_msg void OnFontdialogIsbold();
public:
   afx_msg void OnFontdialogIsitalic();
public:
   afx_msg void OnFontdialogIsunderline();
public:
   afx_msg void OnFontdialogIsstrikeout();
public:
   afx_msg void OnFontdialogM_cf();
};


