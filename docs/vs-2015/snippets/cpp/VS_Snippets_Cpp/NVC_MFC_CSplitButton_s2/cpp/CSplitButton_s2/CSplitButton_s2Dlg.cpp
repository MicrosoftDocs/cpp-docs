// CSplitButton_s2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CSplitButton_s2.h"
#include "CSplitButton_s2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCSplitButton_s2Dlg dialog

CCSplitButton_s2Dlg::CCSplitButton_s2Dlg(CWnd* pParent /*=NULL*/)
: CDialog(CCSplitButton_s2Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCSplitButton_s2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SPLIT1, m_splitButton);
}

BEGIN_MESSAGE_MAP(CCSplitButton_s2Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_SPLIT1, &CCSplitButton_s2Dlg::OnBnClickedSplit1)
	ON_COMMAND(ID_X_RECALCSIZE, &CCSplitButton_s2Dlg::OnXRecalcsize)
	ON_COMMAND(ID_X_COLOR, &CCSplitButton_s2Dlg::OnXColor)
	ON_COMMAND(ID_X_BORDER, &CCSplitButton_s2Dlg::OnXBorder)
	ON_COMMAND(ID_X_ISBUTTONINVISIBLE, &CCSplitButton_s2Dlg::OnXIsbuttoninvisible)
	ON_COMMAND(ID_X_SCROLLPOSITION, &CCSplitButton_s2Dlg::OnXScrollposition)
END_MESSAGE_MAP()


// CCSplitButton_s2Dlg message handlers

BOOL CCSplitButton_s2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
// <snippet1>
	// Initialize the dropdown menu of the splitbutton control.
	m_splitButton.SetDropDownMenu(IDR_MENU1, 0);

	// Create the pager control.
	BOOL nRet;
	CRect rect;
	GetClientRect(&rect);
	nRet = m_pager.Create(
		(WS_VISIBLE | WS_CHILD | PGS_HORZ),
		CRect(rect.Width()/4, 5, (rect.Width() * 3)/4, 55),
		this,
		IDC_PAGER1); 

	m_pager.GetClientRect( &rect );
	nRet = m_button.Create(
		_T("This is a very, very long button. 012345678901234567890"), 
		(WS_VISIBLE | WS_CHILD), // Do not use CCS_NORESIZE.
		CRect(0,0,rect.Width(),30), 
		&m_pager, IDC_BUTTON1);

	m_pager.SetChild(m_button.m_hWnd);
	m_pager.SetButtonSize( 20 );
	m_pager.SetBorder( 1 );
// </snippet1>
	//
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCSplitButton_s2Dlg::OnPaint()
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
HCURSOR CCSplitButton_s2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


// <snippet2>
void CCSplitButton_s2Dlg::OnBnClickedSplit1()
{
	MessageBox(_T("Choose an action from the split button dropdown menu."));
}

// </snippet2>
// <snippet3>
void CCSplitButton_s2Dlg::OnXRecalcsize()
{
	// If the child control changes size, call RecalcSize() to change
	// the size of the pager control accordingly.
	m_pager.RecalcSize(); 
	MessageBox(_T("The pager control size has been recalculated."));
}

// </snippet3>
// <snippet4>
void CCSplitButton_s2Dlg::OnXColor()
{
	COLORREF originalColor;
	//  Set color to red.
	originalColor = m_pager.SetBkColor(RGB(255,0,0));
	if (m_pager.GetBkColor() != RGB(255,0,0))
	{
		MessageBox(_T("Control did not return RED as the previous color."));
	}
	// The following statement is one way to restore the color.
	// m_pager.SetBkColor( originalColor );
}

// </snippet4>
// <snippet5>
void CCSplitButton_s2Dlg::OnXBorder()
{
	int borderSize = m_pager.GetBorder();
	CString str;
	str.Format(_T("The border is %d pixel(s) thick."), borderSize);
	MessageBox(str);
}
// </snippet5>
// <snippet6>

void CCSplitButton_s2Dlg::OnXIsbuttoninvisible()
{
	BOOL bLeft  = m_pager.IsButtonInvisible(PGB_TOPORLEFT);
	BOOL bRight = m_pager.IsButtonInvisible(PGB_BOTTOMORRIGHT);
	CString str;
	str.Format(_T("The left button is%s visible; the right button is%s visible."), 
		(bLeft   ? _T(" not"):_T("")), 
		(bRight  ? _T(" not"):_T("")));
	MessageBox(str);
}
// </snippet6>
// <snippet7>
void CCSplitButton_s2Dlg::OnXScrollposition()
{
	int pos;
	CString str;
	pos = m_pager.GetScrollPos();
	if (pos != 0) 
		m_pager.SetScrollPos(0);
	str.Format(_T("Old position = %d; new position = 0"), pos);
	MessageBox(str);
}
// </snippet7>

