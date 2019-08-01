class CTabbedViewView : public CTabView
{
protected: // create from serialization only
   CTabbedViewView();
   DECLARE_DYNCREATE(CTabbedViewView)

   // Attributes
public:
   CTabbedViewDoc *GetDocument();

   // Operations
public:
   // Overrides
public:
   virtual void OnDraw(CDC *pDC); // overridden to draw this view
   virtual BOOL PreCreateWindow(CREATESTRUCT &cs);

protected:
   virtual BOOL OnPreparePrinting(CPrintInfo *pInfo);
   virtual void OnBeginPrinting(CDC *pDC, CPrintInfo *pInfo);
   virtual void OnEndPrinting(CDC *pDC, CPrintInfo *pInfo);

   BOOL IsScrollBar() const
   {
      return TRUE;
   }

   // Implementation
public:
   virtual ~CTabbedViewView();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext &dc) const;
#endif

protected:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   afx_msg BOOL OnEraseBkgnd(CDC *pDC);
   afx_msg void OnContextMenu(CWnd *, CPoint point);
   afx_msg void OnFilePrintPreview();

   DECLARE_MESSAGE_MAP()
};