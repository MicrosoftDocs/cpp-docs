// CTreeCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CTreeCtrl_s1.h"
#include "CTreeCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTreeCtrl_s1Dlg dialog




CCTreeCtrl_s1Dlg::CCTreeCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCTreeCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCTreeCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_treeCtrl);
	DDX_Control(pDX, IDC_SPLIT1, m_splitbutton);
}

BEGIN_MESSAGE_MAP(CCTreeCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_SPLIT1, &CCTreeCtrl_s1Dlg::OnBnClickedSplit1)
	ON_COMMAND(ID_X_SHOWINFOTIP, &CCTreeCtrl_s1Dlg::OnXShowinfotip)
	ON_COMMAND(ID_X_GETITEMPARTRECT, &CCTreeCtrl_s1Dlg::OnXGetitempartrect)
	ON_COMMAND(ID_X_GETLASTVISIBLEITEM, &CCTreeCtrl_s1Dlg::OnXGetlastvisibleitem)
	ON_COMMAND(ID_X_SETITEMEXPANDEDIMAGEINDEX, &CCTreeCtrl_s1Dlg::OnXSetitemexpandedimageindex)
	ON_NOTIFY(TVN_GETINFOTIP, IDC_TREE1, &CCTreeCtrl_s1Dlg::OnTvnGetInfoTipTree1)
	ON_COMMAND(ID_X_SETITEMSTATEEX, &CCTreeCtrl_s1Dlg::OnXSetitemstateex)
END_MESSAGE_MAP()


// CCTreeCtrl_s1Dlg message handlers

BOOL CCTreeCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.

	// Associate a menu with the splitbutton control.
	m_splitbutton.SetDropDownMenu(IDR_MENU1, 0);

	// Insert items in the tree. For more information, see
	// the example in the CTreeCtrl::InsertItem method topic.

	// Insert a root item using the structure. We must
	// initialize a TVINSERTSTRUCT structure and pass its
	// address to the call. 

	TVINSERTSTRUCT tvInsert;
	tvInsert.hParent = NULL;
	tvInsert.hInsertAfter = NULL;
	tvInsert.item.mask = TVIF_TEXT;
	tvInsert.item.pszText = _T("United States");

	hCountry = m_treeCtrl.InsertItem(&tvInsert);
	//<snippet2>
	// Map an accessibility identifier to the Pennsylvania node.
	accIdUS = m_treeCtrl.MapItemToAccId( hCountry );
	//</snippet2>

	// Insert subitems of the root, which are nodes for the 
	// states of Pennsylvania and Washington. The children of 
	// those nodes for a few cities in the corresponding state.

	// Insert the Pennsylvania item.
	hPA = m_treeCtrl.InsertItem(TVIF_TEXT,
		_T("Pennsylvania"), 0, 0, 0, 0, 0, hCountry, NULL);

	// Insert the Washington item after the Pennsylvania item. 
	hWA = m_treeCtrl.InsertItem(_T("Washington"),
		0, 0, hCountry, hPA);

	// Insert some cities under each of the states.
	m_treeCtrl.InsertItem(_T("Pittsburgh"), hPA, TVI_SORT);
	m_treeCtrl.InsertItem(_T("Harrisburg"), hPA, TVI_SORT);
	m_treeCtrl.InsertItem(_T("Altoona"), hPA, TVI_SORT);

	m_treeCtrl.InsertItem(_T("Seattle"), hWA, TVI_SORT);
	m_treeCtrl.InsertItem(_T("Kalaloch"), hWA, TVI_SORT);
	m_treeCtrl.InsertItem(_T("Yakima"), hWA, TVI_SORT);

	m_treeCtrl.ModifyStyle(0, 
		(TVS_HASLINES | TVS_LINESATROOT | TVS_HASBUTTONS | 
		TVS_EDITLABELS | TVS_INFOTIP | TTS_ALWAYSTIP ));

	//<snippet3>
	m_treeCtrl.SetExtendedStyle(TVS_EX_AUTOHSCROLL, TVS_EX_AUTOHSCROLL);
	//</snippet3>

	//<snippet4>
	// Scroll 30 pixels/sec and redraw every 5 seconds.
	m_treeCtrl.SetAutoscrollInfo( 30, 5 ); 
	//</snippet4>

	/* ---TEST---
	CBitmap m_bitmap;
	CImageList m_imageList;
	m_imageList.Create(48, 24, ILC_COLOR16, 0, 4);
	// IDB_BITMAP1 was deleted; the following won't work anymore.
	BOOL bRC = m_bitmap.LoadBitmapW(IDB_BITMAP1);
	m_imageList.Add( &m_bitmap, RGB(0, 0, 0) );
	m_treeCtrl.SetImageList( &m_imageList, TVSIL_NORMAL );

	 ---END TEST--- */


	// End of extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCTreeCtrl_s1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCTreeCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCTreeCtrl_s1Dlg::OnBnClickedSplit1()
{
	CString str = _T("Choose an action from the dropdown menu.");
	AfxMessageBox(str, MB_ICONEXCLAMATION);
}

void CCTreeCtrl_s1Dlg::OnXShowinfotip()
{
	m_treeCtrl.ShowInfoTip( hCountry );
}

void CCTreeCtrl_s1Dlg::OnXGetitempartrect()
{
	//<snippet5>
	CRect rect;
	HTREEITEM hUS = m_treeCtrl.MapAccIdToItem( accIdUS );
	m_treeCtrl.GetItemPartRect( hUS, TVGIPR_BUTTON, &rect );
	m_treeCtrl.GetDC()->Draw3dRect( &rect, RGB(255, 0, 0), RGB(0, 0, 255));
	//</snippet5>
}

void CCTreeCtrl_s1Dlg::OnXGetlastvisibleitem()
{
	//<snippet6>
	CRect rect;
	HTREEITEM hLast = m_treeCtrl.GetLastVisibleItem();
	m_treeCtrl.GetItemPartRect( hLast, TVGIPR_BUTTON, &rect );
	m_treeCtrl.GetDC()->Draw3dRect( &rect, RGB(255, 0, 0), RGB(0, 0, 255));
	//</snippet6>
}

void CCTreeCtrl_s1Dlg::OnXSetitemexpandedimageindex()
{
	//<snippet8>
	CString str;
	CString msg = _T("The set and retrieved item expanded image ")
		          _T("indexes are%s equal.");
	int nSetItem = 0;
	m_treeCtrl.SetItemExpandedImageIndex( hCountry, nSetItem );
	int nItem = m_treeCtrl.GetItemExpandedImageIndex( hCountry );
	if (nItem == nSetItem)
		str.Format(msg, _T(""));
	else
		str.Format(msg, _T(" not"));
	AfxMessageBox(str, MB_ICONINFORMATION);
	//</snippet8>
	}

void CCTreeCtrl_s1Dlg::OnTvnGetInfoTipTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// When the mouse hovers over a tree item, set the text of the infotip 
	// to the text of the tree item. For more information, see the example 
	// in the "Using Tree-View Infotips" subtopic of the "Tree-View Controls" 
	// topic in the MSDN Library.
	LPNMTVGETINFOTIP pGetInfoTip = reinterpret_cast<LPNMTVGETINFOTIP>(pNMHDR);
	TVITEM tvItem;
	TCHAR szText[512];

	tvItem.hItem = pGetInfoTip->hItem;
	tvItem.mask = TVIF_TEXT;
	tvItem.pszText = szText;
	tvItem.cchTextMax = _countof(szText);
	BOOL bRC = m_treeCtrl.GetItem(&tvItem);
	if (bRC == TRUE) 
		wcscpy_s(pGetInfoTip->pszText, pGetInfoTip->cchTextMax, tvItem.pszText);
}

void CCTreeCtrl_s1Dlg::OnXSetitemstateex()
{
	//<snippet7>
	// Disable the Pennsylvania node.
	m_treeCtrl.SetItemStateEx( hPA, TVIS_EX_DISABLED );
	//</snippet7>
}
