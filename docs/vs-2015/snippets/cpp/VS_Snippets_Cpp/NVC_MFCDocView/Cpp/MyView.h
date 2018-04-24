// CMyView.h : interface of the CMyView class
//


#pragma once

// CMyShape command target

class CMyShape : public CCmdTarget
{
	DECLARE_DYNAMIC(CMyShape)

public:
	CMyShape();
	virtual ~CMyShape();

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnShapeColor();
public:
   virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
};


class CMyView : public CView
{
protected: // create from serialization only
   CMyView();
   DECLARE_DYNCREATE(CMyView)

// Attributes
public:
   CMyDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
   virtual void OnDraw(CDC* pDC);  // overridden to draw this view
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
   virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
   virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
   virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
   virtual ~CMyView();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

   void DoModalPropertySheet();
   int m_nMember1;
   int m_nMember2;
   CString m_strMember3;
   CString m_strMember4;

   CMyShape* m_pActiveShape;

protected:
   void OnBeginSleepEnd();
   void OnBeginDlgRestore();
   void OnDlgRestore();
   void OnDlgDoWait();

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnEditProperties();
public:
   afx_msg void OnWizard();
public:
   afx_msg void OnEditIdleprocessing();
public:
   virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
public:
   afx_msg void OnShapeNewshape();
public:
   afx_msg void OnShapeDeleteshape();
public:
   afx_msg void OnColordialogDomodal();
public:
   afx_msg void OnColordialogGetcolor();
public:
   afx_msg void OnColordialogGetsavedcustomcolors();
public:
   afx_msg void OnColordialogOncolorok();
public:
   afx_msg void OnColordialogM();
public:
   virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);
protected:
   virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
public:
   afx_msg void OnEditCwindowdc();
};

#ifndef _DEBUG  // debug version in CMyView.cpp
inline CMyDoc* CMyView::GetDocument() const
   { return reinterpret_cast<CMyDoc*>(m_pDocument); }
#endif



// CMyColorDlg

class CMyColorDlg : public CColorDialog
{
	DECLARE_DYNAMIC(CMyColorDlg)

public:
	CMyColorDlg(COLORREF clrInit = 0, DWORD dwFlags = 0, CWnd* pParentWnd = NULL);
	virtual ~CMyColorDlg();

protected:
	DECLARE_MESSAGE_MAP()
   virtual BOOL OnColorOK();
};


