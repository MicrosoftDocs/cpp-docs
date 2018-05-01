// mainview.h : interface of the CMainView class
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.


class CRectItem;

class CMainView : public CScrollView
{
protected: // create from serialization only
   CMainView();
   DECLARE_DYNCREATE(CMainView)

// Attributes
public:
   CMainDoc* GetDocument()
   {
      ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMainDoc)));
      return (CMainDoc*) m_pDocument;
   }

   CRectItem* GetSelection() const
      { return m_pSelection; } // Just the top-most window
   // set bSafeSelect to TRUE when there is a chance that an inplace
   // active item could be deactivated before finishing
   void SetSelection(CRectItem* pNewSel, BOOL bSafeSelect = FALSE);

// Operations
public:
   CRectItem* DoPasteItem(BOOL bLink, COleDataObject* pDataObject,
      CPoint* pPoint, CLIPFORMAT cfFormat = 0);
   void ClientToDoc(CRect &rc);
   void DocToClient(CRect &rc);
   void ClientToDoc(CPoint &pt);
   void DocToClient(CPoint &pt);
   void ClientToDoc(CSize &sz);
   void DocToClient(CSize &sz);
   void UpdateActiveItem();


// Implementation
protected:
   BOOL m_bInDrag;
   CRectItem* m_pSelection;
   COleDropTarget m_dropTarget;
   CPoint m_dragPoint;
   CSize m_dragSize;
   CSize m_dragOffset;
   DROPEFFECT m_prevDropEffect;
   static CLIPFORMAT m_cfObjectDescriptor;
   static CBrush NEAR m_brHatch;

   CRectItem* GetHitItem(CPoint point);
   BOOL GetObjectInfo(COleDataObject* pDataObject,
      CSize* pSize, CSize* pOffset);
   void DoPasteNative(COleDataObject* pDataObject, CPoint* pPoint,
      CRectItem* pItem);
   void DoPasteStandard(BOOL bLink, COleDataObject* pDataObject,
      CPoint* pPoint, CRectItem* pItem, CLIPFORMAT cfFormat = 0);

   CRectTracker m_Tracker;

public:
   virtual ~CMainView();
   virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);
   virtual void OnDraw(CDC* pDC);  // overridden to draw this view
   virtual void OnInitialUpdate();
   virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

   // special scroll handling
   virtual BOOL OnScrollBy(CSize sizeScroll, BOOL bDoScroll = TRUE);

   // drag drop implementation
   virtual BOOL OnDrop(COleDataObject* pDataObject,
      DROPEFFECT dropEffect, CPoint point);
   virtual DROPEFFECT OnDragEnter(COleDataObject* pDataObject,
      DWORD grfKeyState, CPoint point);
   virtual DROPEFFECT OnDragOver(COleDataObject* pDataObject,
      DWORD grfKeyState, CPoint point);
   virtual void OnDragLeave();

   // Printing support
protected:
   virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);

   // OLE Client support
   virtual BOOL IsSelected(const CObject* pDocItem) const;
   BOOL DoCopySelection();
   void SetupTracker(CRectTracker* pTracker, CRectItem* pItem,
      CRect* pTrueRect = NULL);
   void InvalidateItem(CRectItem* pItem);

// Generated message map functions
protected:
   //{{AFX_MSG(CMainView)
   afx_msg void OnPaste();
   afx_msg void OnPasteLink();
   afx_msg void OnInsertObject();
   afx_msg void OnUpdateEditMenu(CCmdUI* pCmdUI);
   afx_msg void OnEditClear();
   afx_msg void OnEditCopy();
   afx_msg void OnEditCut();
   afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
   afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
   afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
   afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
   afx_msg void OnSetFocus(CWnd* pOldWnd);
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   afx_msg void OnSize(UINT nType, int cx, int cy);
   afx_msg void OnObjectDisplayContent();
   afx_msg void OnUpdateObjectDisplayContent(CCmdUI* pCmdUI);
   afx_msg void OnObjectDisplayAsIcon();
   afx_msg void OnUpdateObjectDisplayAsIcon(CCmdUI* pCmdUI);
   afx_msg void OnPasteSpecial();
   afx_msg void OnUpdateEditClone(CCmdUI* pCmdUI);
   afx_msg void OnEditClone();
   afx_msg void OnUpdateEditPaste(CCmdUI* pCmdUI);
   afx_msg void OnObjectResetsize();
   afx_msg void OnCancelInplace();
   afx_msg void OnDestroy();
   afx_msg void OnUpdateOleEditProperties(CCmdUI* pCmdUI);
   afx_msg void OnOleEditProperties();
   afx_msg void OnUpdateOleChangeSource(CCmdUI* pCmdUI);
   afx_msg void OnOleChangeSource();
   //}}AFX_MSG
   DECLARE_MESSAGE_MAP()
};
