class CChildFrame : public CMDIChildWndEx
{
   DECLARE_DYNCREATE(CChildFrame)
public:
   CChildFrame();

   // Overrides
public:
   virtual BOOL PreCreateWindow(CREATESTRUCT &cs);
   virtual void ActivateFrame(int nCmdShow = -1);

   virtual BOOL IsReadOnly();
   virtual LPCTSTR GetDocumentName(CObject **pObj);

   // Implementation
public:
   virtual ~CChildFrame();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext &dc) const;
#endif

protected:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

   DECLARE_MESSAGE_MAP()
};