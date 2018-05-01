#pragma once

class CMyHeaderCtrl : public CHeaderCtrl
{
public:
   CMyHeaderCtrl() {}
   ~CMyHeaderCtrl() {}

public:
   DECLARE_MESSAGE_MAP()

public:
   virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
public:
   afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};


// CHeaderDlg dialog

class CHeaderDlg : public CDialog
{
	DECLARE_DYNAMIC(CHeaderDlg)

public:
	CHeaderDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CHeaderDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CHEADERCTRL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CMyHeaderCtrl m_myHeaderCtrl;
   CImageList m_HeaderImages;

private:
   void InsertHeaderItems();
   
protected:
	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
