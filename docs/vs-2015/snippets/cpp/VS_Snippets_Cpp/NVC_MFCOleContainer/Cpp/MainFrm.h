// MainFrm.h : interface of the CMainFrame class
//


#pragma once

class CMainFrame : public CMDIFrameWnd
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CMainFrame();

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnColecurrencyColecurrency();
public:
   afx_msg void OnColecurrencyFormat();
public:
   afx_msg void OnColecurrencyGetstatus();
public:
   afx_msg void OnColecurrencyParsecurrency();
public:
   afx_msg void OnColecurrencySetcurrency();
public:
   afx_msg void OnColecurrencyEqual();
public:
   afx_msg void OnColecurrencyPlusMinus();
public:
   afx_msg void OnColecurrencyPlusMinusEqual();
public:
   afx_msg void OnColecurrencyMultDiv();
public:
   afx_msg void OnColecurrencyRelationalops();
public:
   afx_msg void OnColecurrencyMultdivequal();
public:
   afx_msg void OnColeexceptionM_sc();
public:
   afx_msg void OnColesafearrayAccessdata();
   void Sort(VARIANT FAR* vArray);
public:
   afx_msg void OnColesafearrayCreate();
public:
   afx_msg void OnColesafearrayCreateonedim();
public:
   afx_msg void OnColesafearrayGetelement();
public:
   afx_msg void OnColesafearrayGetlbound();
public:
   afx_msg void OnColesafearrayGetubound();
public:
   afx_msg void OnColesafearrayPutelement();
};


