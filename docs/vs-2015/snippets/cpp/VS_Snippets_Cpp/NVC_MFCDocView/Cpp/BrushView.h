#pragma once


// CBrushView view

class CBrushView : public CView
{
   DECLARE_DYNCREATE(CBrushView)

protected:
   CBrushView();           // protected constructor used by dynamic creation
   virtual ~CBrushView();

public:
   virtual void OnDraw(CDC* pDC);      // overridden to draw this view
#ifdef _DEBUG
   virtual void AssertValid() const;
#ifndef _WIN32_WCE
   virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
   enum BrushType
   {
      Variety,
      Indirect,
      DIBPattern,
      Hatch,
      Pattern,
      SysColor,
      Log,
      Handle
   };
   BrushType m_bt;

   void VarietyBrushes(CDC* pDC);
   void IndirectBrushes(CDC* pDC);
   void DIBPatternBrushes(CDC* pDC);
   void HatchBrushes(CDC* pDC);
   void PatternBrushes(CDC* pDC);
   void SysColorBrushes(CDC* pDC);
   void LogBrushes(CDC* pDC);
   void HandleBrushes(CDC* pDC);

protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnBrushVariety();
public:
   afx_msg void OnUpdateBrushVariety(CCmdUI *pCmdUI);
public:
   afx_msg void OnBrushIndirect();
public:
   afx_msg void OnUpdateBrushIndirect(CCmdUI *pCmdUI);
public:
   afx_msg void OnBrushDibpattern();
public:
   afx_msg void OnUpdateBrushDibpattern(CCmdUI *pCmdUI);
public:
   afx_msg void OnBrushHatch();
public:
   afx_msg void OnUpdateBrushHatch(CCmdUI *pCmdUI);
public:
   afx_msg void OnBrushPattern();
public:
   afx_msg void OnUpdateBrushPattern(CCmdUI *pCmdUI);
public:
   afx_msg void OnBrushSyscolor();
public:
   afx_msg void OnUpdateBrushSyscolor(CCmdUI *pCmdUI);
public:
   afx_msg void OnBrushLog();
public:
   afx_msg void OnUpdateBrushLog(CCmdUI *pCmdUI);
public:
   afx_msg void OnBrushHandle();
public:
   afx_msg void OnUpdateBrushHandle(CCmdUI *pCmdUI);
};


