#pragma once

#include "ColorPage.h"
#include "StylePage.h"
#include "ShapePage.h"

// CMyPropertySheet

class CMyPropertySheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CMyPropertySheet)

public:
	CMyPropertySheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CMyPropertySheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CMyPropertySheet();

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
   virtual BOOL OnInitDialog();
protected:
   virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
   virtual BOOL PreTranslateMessage(MSG* pMsg);
};


// CMyTTPropertySheet

class CMyTTPropertySheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CMyTTPropertySheet)

public:
   CToolTipCtrl* m_pToolTipCtrl;

public:
	CMyTTPropertySheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CMyTTPropertySheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CMyTTPropertySheet();

protected:
	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
public:
   virtual BOOL PreTranslateMessage(MSG* pMsg);
};


// CPSheetView view

class CPSheetView : public CView
{
	DECLARE_DYNCREATE(CPSheetView)

protected:
	CPSheetView();           // protected constructor used by dynamic creation
	virtual ~CPSheetView();

public:
   CPropertySheet* m_pdlgPropertySheet;
   CStylePage* m_pstylePage;
   CColorPage* m_pcolorPage;
   CShapePage* m_pshapePage;

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
   afx_msg void OnCpropertypageConstruct();
public:
   afx_msg void OnCpropertypageCtor();
public:
   afx_msg void OnCpropertypageDowizard();
public:
   afx_msg void OnCpropertysheetAddpage();
public:
   afx_msg void OnCpropertysheetConstruct();
public:
   afx_msg void OnCpropertysheetCtor();
public:
   afx_msg void OnModelessPropertySheet();
public:
   afx_msg void OnCpropertysheetCreatemyps();
public:
   afx_msg void OnCpropertysheetSettitle();
public:
   afx_msg void OnCpropertysheetSetwizardmode();
public:
   afx_msg void OnCpropertysheetM_psh();
public:
   afx_msg void OnCpropertysheetGettabcontrol();
};

