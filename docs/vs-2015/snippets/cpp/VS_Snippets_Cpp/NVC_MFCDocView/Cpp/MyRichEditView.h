#pragma once

class CMyPageSetupDialog : public CPageSetupDialog
{
public:
   virtual UINT OnDrawPage(CDC* pDC, UINT nMessage, LPRECT lpRect);
   void DrawMyImage(CDC* pDC, LPRECT lpRect);
};

// CMyRichEditView view

class CMyFindReplaceDialog : public CFindReplaceDialog
{
public:
   CMyFindReplaceDialog() {}
   virtual ~CMyFindReplaceDialog() {}

   const static WORD c_cchFindWhat = 256;
   TCHAR m_szFindWhat[c_cchFindWhat];
   LPTSTR GetFindWhatStr() { return m_szFindWhat; }
   WORD GetFindWhatStrLen() { return (c_cchFindWhat * sizeof(TCHAR)); }

   const static WORD c_cchReplaceWith = 256;
   TCHAR m_szReplaceWith[c_cchReplaceWith];
   LPTSTR GetReplaceWithStr() { return m_szReplaceWith; }
   WORD GetReplaceWithStrLen() { return (c_cchReplaceWith * sizeof(TCHAR)); }
};

class CMyRichEditView : public CRichEditView
{
	DECLARE_DYNCREATE(CMyRichEditView)

protected:
	CMyRichEditView();           // protected constructor used by dynamic creation
	virtual ~CMyRichEditView();

   BOOL PasteNative(LPDATAOBJECT lpdataobj);
   int m_nNumReplaced;
   UINT m_nDocSizeInInches;

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnUpdateLineNumber(CCmdUI *pCmdUI);

   CMyFindReplaceDialog* m_pFRDlg;

// <Snippet171>
// Message handler declared in CMyRichEditView class declaration
protected:
   afx_msg LONG OnFindReplace(WPARAM wParam, LPARAM lParam);
// </Snippet171>
public:
   afx_msg void InitFindReplaceDlg();
public:
   afx_msg void OnPageSetupDlg();
public:
   afx_msg void OnPsdMypsd();
public:
   afx_msg void OnPrintdlgCreateandctor();
public:
   afx_msg void OnPrintdlgCreatepinterdc();
public:
   afx_msg void OnPrintdlgGetdefaults();
public:
   afx_msg void OnPrintdlgGetdevicename();
public:
   afx_msg void OnPrintdlgGetprinterdc();
public:
   afx_msg void OnPrintdlgPrintcollate();
public:
   afx_msg void OnPrintdlgM_pd();
protected:
   virtual void OnReplaceAll(LPCTSTR lpszFind, LPCTSTR lpszReplace, BOOL bCase, BOOL bWord);
public:
   afx_msg void OnCharUnderline();
protected:
   virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
   virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
public:
   afx_msg void OnItalic();
public:
   afx_msg void OnParaCenter();
protected:
   virtual void OnTextNotFound(LPCTSTR lpszFind);
public:
   afx_msg void OnUpdateCharItalicUI(CCmdUI *pCmdUI);
public:
   afx_msg void OnUpdateParaCenterUI(CCmdUI *pCmdUI);
protected:
   virtual HRESULT QueryAcceptData(LPDATAOBJECT lpdataobj, CLIPFORMAT* lpcfFormat, DWORD dwReco, BOOL bReally, HGLOBAL hMetaFile);
   virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
public:
   afx_msg void AddBullets();
public:
   virtual void OnInitialUpdate();
public:
   afx_msg void OnCricheditviewWordwrap();
public:
   afx_msg void OnUpdateCricheditviewWordwrap(CCmdUI *pCmdUI);
public:
   afx_msg void OnCricheditviewReplaceHi();
};


