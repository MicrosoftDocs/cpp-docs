// CListCtrl_s2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CListCtrl_s2.h"
#include "CListCtrl_s2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCListCtrl_s2Dlg dialog


CCListCtrl_s2Dlg::CCListCtrl_s2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCListCtrl_s2Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCListCtrl_s2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listCtrl);
}

BEGIN_MESSAGE_MAP(CCListCtrl_s2Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CCListCtrl_s2Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON5, &CCListCtrl_s2Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON3, &CCListCtrl_s2Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCListCtrl_s2Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &CCListCtrl_s2Dlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CCListCtrl_s2Dlg message handlers

BOOL CCListCtrl_s2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.

	// Set extended styles to each column.
	m_listCtrl.SetExtendedStyle(LVS_EX_HEADERDRAGDROP);

	// Insert two headers into the list control.
	TCHAR* szColumn[] = {_T("ClientID"), _T("Grade")};
	int widths[] = {60, 60}; 
	LV_COLUMN lvc;
	lvc.mask = LVCF_FMT | LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM;
	lvc.fmt = LVCFMT_LEFT;
	for(int i = 0; i < _countof(szColumn); i++) 
	{
		lvc.pszText = szColumn[i];
		lvc.cx = widths[i];
		lvc.iSubItem = i;
		m_listCtrl.InsertColumn(i,&lvc);
	}

	// Add items to the list control.
	CString strData[2];
	LV_ITEM lvi;
	lvi.mask = LVIF_TEXT | LVIF_IMAGE;

	srand((unsigned) time(NULL));

	for ( int id = 0; id < 10; id++)
	{
		lvi.iSubItem = 0;
		lvi.pszText = _T("");
		lvi.iImage = 0;
		lvi.iItem = id;
		m_listCtrl.InsertItem(&lvi);

		strData[0].Format(_T("%d"), id);
		int iGrade = rand() % 100;
		strData[1].Format(_T("%d"), iGrade);

		for (int j = 0; j < _countof(strData); j++)
		{
			m_listCtrl.SetItemText(id, j, strData[j].GetBuffer());
		}
	}

	// End of extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCListCtrl_s2Dlg::OnPaint()
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
HCURSOR CCListCtrl_s2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
//<snippet1>
// The ListCompareFunc() method is a global function used by SortItemEx().
int CALLBACK ListCompareFunc(
							 LPARAM lParam1, 
							 LPARAM lParam2, 
							 LPARAM lParamSort)
{
	CListCtrl* pListCtrl = (CListCtrl*) lParamSort;
	CString    strItem1 = pListCtrl->GetItemText(static_cast<int>(lParam1), 1);
	CString    strItem2 = pListCtrl->GetItemText(static_cast<int>(lParam2), 1);

	int x1 = _tstoi(strItem1.GetBuffer());
	int x2 = _tstoi(strItem2.GetBuffer());
	int result = 0;
	if ((x1 - x2) < 0)
		result = -1;
	else if ((x1 - x2) == 0)
		result = 0;
	else
		result = 1;

	return result;
}

void CCListCtrl_s2Dlg::OnBnClickedButton1()
{
	// SortItemsEx
	m_listCtrl.SortItemsEx( ListCompareFunc, (LPARAM)&m_listCtrl );
}
//</snippet1>
void CCListCtrl_s2Dlg::OnBnClickedButton5()
{
//<snippet3>
	// MapIndexToID
	int iCount = m_listCtrl.GetItemCount();
	UINT nId = 0;
	UINT nIndex = 0;
	for (int iIndexOriginal = 0; iIndexOriginal < iCount; iIndexOriginal++)
	{
		// Map index to ID.
		nId = m_listCtrl.MapIndexToID((UINT)iIndexOriginal);

		// Map ID to index.
		nIndex = m_listCtrl.MapIDToIndex(nId);

		if (nIndex != (UINT)(iIndexOriginal))
		{
			CString str;
			str.Format(_T("Mapped index (%d) is not equal to original index (%d)"),
				nIndex, (UINT)(iIndexOriginal));
			AfxMessageBox(str);
			return;
		}
	}
	AfxMessageBox(_T("The mapped indexes and original indexes are equal."), 
		MB_ICONINFORMATION);
//</snippet3>
}
void CCListCtrl_s2Dlg::OnBnClickedButton3()
{
	//<snippet4>
	// GetItemIndexRect
	// Get the rectangle that bounds the second item in the first group.
	LVITEMINDEX lvItemIndex;
	lvItemIndex.iGroup = 0;
	lvItemIndex.iItem = 1;
	CRect rect;
	BOOL bRet = m_listCtrl.GetItemIndexRect(
		&lvItemIndex, 0, LVIR_BOUNDS, &rect);

	// Draw a red rectangle around the item.
	m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(255, 0, 0), RGB(255, 0, 0) );
	//</snippet4>
}

void CCListCtrl_s2Dlg::OnBnClickedButton4()
{
	//<snippet5>
	// GetGroupRect

	// Get the graphics rectangle that surrounds group 0.
	CRect rect;
	BOOL bRet = m_listCtrl.GetGroupRect( 0, &rect, LVGGR_GROUP); 
	// Draw a blue rectangle around group 0.
	if (bRet == TRUE) {
		m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(0, 0, 255), RGB(0, 0, 255));
	}
	else {
		AfxMessageBox(_T("No group information was retrieved."), MB_ICONINFORMATION);
	}
	//</snippet5>
}

void CCListCtrl_s2Dlg::OnBnClickedButton2()
{
	//<snippet2>
	// GetGroupInfoByIndex
	const int GROUP_HEADER_BUFFER_SIZE = 40;

// Initialize the structure 
	LVGROUP gInfo = {0};
	gInfo.cbSize = sizeof(LVGROUP);
	wchar_t wstrHeadGet[GROUP_HEADER_BUFFER_SIZE] = {0};
	gInfo.cchHeader = GROUP_HEADER_BUFFER_SIZE;
	gInfo.pszHeader = wstrHeadGet;
	gInfo.mask = (LVGF_ALIGN | LVGF_STATE | LVGF_HEADER | LVGF_GROUPID);
	gInfo.state = LVGS_NORMAL;
	gInfo.uAlign  = LVGA_HEADER_LEFT;

	BOOL bRet = m_listCtrl.GetGroupInfoByIndex( 0, &gInfo );
	if (bRet == TRUE) {
		CString strHeader = CString( gInfo.pszHeader );
		CString str;
		str.Format(_T("Header: '%s'"), strHeader);
		AfxMessageBox(str, MB_ICONINFORMATION);
	}
	else
	{
		AfxMessageBox(_T("No group information was retrieved."));
	}
	//</snippet2>
}
