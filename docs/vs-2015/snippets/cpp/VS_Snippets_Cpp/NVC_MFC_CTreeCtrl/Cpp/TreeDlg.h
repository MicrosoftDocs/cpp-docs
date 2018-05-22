#pragma once


// CTreeDlg dialog

class CTreeDlg : public CDialog
{
	DECLARE_DYNAMIC(CTreeDlg)

public:
	CTreeDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTreeDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CTREECTRL_DIALOG };

   CTreeCtrl m_TreeCtrl;
   CMenu m_TreeMenu;
   CImageList m_TreeImages;
   CBitmap m_bmpUp;
   CBitmap m_bmpDown;
   CToolTipCtrl m_ToolTips;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
public:
   afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
public:
   afx_msg void OnTreectrlCreatedragimage();
public:
   afx_msg void OnTreectrlDeleteallitems();
public:
   afx_msg void OnTreectrlDeleteitem();
public:
   afx_msg void OnTreectrlEditlabel();
public:
   afx_msg void OnTreectrlEnsurevisible();
public:
   afx_msg void OnTreectrlGetchilditem();
public:
   afx_msg void OnTreectrlGetcount();
public:
   afx_msg void OnTreectrlGetdrophighlightitem();
public:
   afx_msg void OnTreectrlGeteditcontrol();
public:
   afx_msg void OnTreectrlGetimagelist();
public:
   afx_msg void OnTreectrlGetindent();
public:
   afx_msg void OnTreectrlGetinsertmarkcolor();
public:
   afx_msg void OnTreectrlGetitemdata();
public:
   afx_msg void OnTreectrlGetitemheight();
public:
   afx_msg void OnTreectrlGetitemimage();
public:
   afx_msg void OnTreectrlGetitemrect();
public:
   afx_msg void OnTreectrlGetitemstate();
public:
   afx_msg void OnTreectrlGetlinecolor();
public:
   afx_msg void OnTreectrlGetnextitem();
public:
   afx_msg void OnTreectrlGetnextsiblingitem();
public:
   afx_msg void OnTreectrlGetprevsiblingitem();
public:
   afx_msg void OnChunk2Getprevvisibleitem();
public:
   afx_msg void OnChunk2Getselecteditem();
public:
   afx_msg void OnChunk2Gettooltips();
public:
   afx_msg void OnChunk2Hittest();
public:
   afx_msg void OnResetTree();
public:
   afx_msg void OnChunk2Selectsetfirstvisible();
public:
   afx_msg void OnChunk2Setcheck();
public:
   afx_msg void OnChunk2Setinsertmark();
public:
   afx_msg void OnChunk2Setitem();
public:
   afx_msg void OnChunk2Setitemdata();
public:
   afx_msg void OnChunk2Setitemtext();
public:
   afx_msg void OnChunk2Setlinecolor();
public:
   afx_msg void OnChunk2Settextcolor();
public:
   afx_msg void OnChunk2Sortchildren();
public:
   afx_msg void OnChunk2Sortchildrencb();
};
