// NVC_MFC_CHeaderCtrl_s4Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CHeaderCtrl_s4.h"
#include "NVC_MFC_CHeaderCtrl_s4Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNVC_MFC_CHeaderCtrl_s4Dlg dialog




CNVC_MFC_CHeaderCtrl_s4Dlg::CNVC_MFC_CHeaderCtrl_s4Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNVC_MFC_CHeaderCtrl_s4Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CNVC_MFC_CHeaderCtrl_s4Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SPLIT1, m_splitButton);
}

BEGIN_MESSAGE_MAP(CNVC_MFC_CHeaderCtrl_s4Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_SPLIT1, &CNVC_MFC_CHeaderCtrl_s4Dlg::OnBnClickedSplit1)
	ON_NOTIFY(BCN_DROPDOWN, IDC_SPLIT1, &CNVC_MFC_CHeaderCtrl_s4Dlg::OnBnDropDownSplit1)
	ON_COMMAND(ID_X_CREATECONTROL, &CNVC_MFC_CHeaderCtrl_s4Dlg::OnXCreatecontrol)
	ON_COMMAND(ID_X_HITTEST, &CNVC_MFC_CHeaderCtrl_s4Dlg::OnXHittest)
	ON_COMMAND(ID_X_GETITEMDROPDOWNRECT, &CNVC_MFC_CHeaderCtrl_s4Dlg::OnXGetitemdropdownrect)
	ON_COMMAND(ID_X_GETOVERFLOWRECT, &CNVC_MFC_CHeaderCtrl_s4Dlg::OnXGetoverflowrect)
	ON_COMMAND(ID_X_SETFOCUSEDITEM, &CNVC_MFC_CHeaderCtrl_s4Dlg::OnXSetfocuseditem)
END_MESSAGE_MAP()


// CNVC_MFC_CHeaderCtrl_s4Dlg message handlers

BOOL CNVC_MFC_CHeaderCtrl_s4Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

//
    m_splitButton.SetDropDownMenu(IDR_MENU1, 0);
	controlCreated = FALSE;
//
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CNVC_MFC_CHeaderCtrl_s4Dlg::OnPaint()
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
HCURSOR CNVC_MFC_CHeaderCtrl_s4Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CNVC_MFC_CHeaderCtrl_s4Dlg::OnBnClickedSplit1()
{
	// Add a default action. 
	MessageBox(_T("Choose an item from the splitbutton dropdown list."));
	return;

}

void CNVC_MFC_CHeaderCtrl_s4Dlg::OnBnDropDownSplit1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMBCDROPDOWN pDropDown = reinterpret_cast<LPNMBCDROPDOWN>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}

// <snippet5>
void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXCreatecontrol()
{
	if (controlCreated == TRUE) {
		MessageBox(_T("Header control has already been created."));
		return;
	}
	// Create the header control.
	CRect   rect;
	GetClientRect(&rect);
	m_headerCtrl.Create(WS_CHILD | WS_VISIBLE | HDS_HORZ | HDS_OVERFLOW,
		CRect(0, 0, rect.Width(), 50), this, IDC_HEADER1);
	
	// Create the header items. Insert five columns and make each 
	// column one fifth the width of the client rectangle.
	CString str;
	HDITEM  hdi;
	hdi.mask = HDI_TEXT | HDI_WIDTH | HDI_FORMAT;
	hdi.cxy = (rect.Width()) / 5;
	hdi.fmt = HDF_STRING | HDF_CENTER | HDF_SPLITBUTTON;
	
	for (int i=0; i < 5; i++)
	{
		str.Format(_T("column %d"), i);
		hdi.pszText = str.GetBuffer(0);
		m_headerCtrl.InsertItem(i, &hdi);
	}

	controlCreated = TRUE;
}
// </snippet5>
// <snippet1>
void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXHittest()
{
	if (controlCreated == FALSE) {
		MessageBox(_T("Header control has not been created yet."));
		return;
	}
	// Initialize HDHITTESTINFO structure.
	HDHITTESTINFO hdHitIfo;
	memset(&hdHitIfo, 0, sizeof(HDHITTESTINFO));

	CString str;
	CRect rect;
	int iRetVal = -1;
	for(int i = 0; i < m_headerCtrl.GetItemCount(); i++)
	{
		m_headerCtrl.GetItemRect(i, &rect);
		hdHitIfo.pt = rect.CenterPoint();
		// The hit test depends on whether the header item is visible.
		iRetVal = m_headerCtrl.HitTest(&hdHitIfo);
		str.AppendFormat(_T("Item = %d, Hit item = %d\n"), i, iRetVal);
	}
	MessageBox(str, _T("Hit test results"));
}
// </snippet1>
// <snippet2>
void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXGetitemdropdownrect()
{
	if (controlCreated == FALSE) {
		MessageBox(_T("Header control has not been created yet."));
		return;
	}

// Get the dropdown rect for the first column.
	CRect rect;
	BOOL bRetVal = m_headerCtrl.GetItemDropDownRect(0, &rect);
	if (bRetVal == TRUE) {
	// Draw around the dropdown rect a rectangle that has red 
	// left and top sides, and blue right and bottom sides.
		CDC* pDC = m_headerCtrl.GetDC();
		pDC->Draw3dRect(rect, RGB(255, 0, 0), RGB(0, 0, 255));
	}
}
// </snippet2>
// <snippet3>
void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXGetoverflowrect()
{
	if (controlCreated == FALSE) {
		MessageBox(_T("Header control has not been created yet."));
		return;
	}
	CRect rect;
	// Get the overflow rectangle.
	BOOL bRetVal = m_headerCtrl.GetOverflowRect(&rect);
	// Get the device context.
	CDC* pDC = m_headerCtrl.GetDC();
	// Draw around the overflow rect a rectangle that has red 
	// left and top sides, and green right and bottom sides.
	pDC->Draw3dRect(rect, RGB(255, 0, 0), RGB(0, 255, 0));
}

// </snippet3>
// <snippet4>
void CNVC_MFC_CHeaderCtrl_s4Dlg::OnXSetfocuseditem()
{
	if (controlCreated == FALSE) {
		MessageBox(_T("Header control has not been created yet."));
		return;
	}

	// Check that we get the value we set.
	int item = m_headerCtrl.GetItemCount() - 1;
	m_headerCtrl.SetFocusedItem(item);
	int itemGet = m_headerCtrl.GetFocusedItem();
	CString str = _T("Set: focused item = %d\nGet: focused item = %d");
	str.Format(str, item, itemGet);
	MessageBox(str, _T("Set/GetFocused Item"));
}
// </snippet4>