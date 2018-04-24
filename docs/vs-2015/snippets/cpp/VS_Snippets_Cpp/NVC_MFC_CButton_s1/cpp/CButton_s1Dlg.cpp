// CButton_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CButton_s1.h"
#include "CButton_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCButton_s1Dlg dialog

CCButton_s1Dlg::CCButton_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCButton_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCButton_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCButton_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CCButton_s1Dlg message handlers

BOOL CCButton_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.

	//<snippet2>
	BOOL bRC; // Store return codes for debugging.
	CRect rect;
	DWORD dwStyles = 
		(WS_VISIBLE | WS_TABSTOP | WS_CHILD | 
		WS_BORDER | BS_PUSHBUTTON | BS_ICON);

	// Create a split button control.

	GetClientRect( &rect );
	bRC = m_splitButton.Create(
		_T("Split button control"),
		(dwStyles | BS_SPLITBUTTON),
		CRect( rect.left+5, rect.top+5, (rect.Width()/2)-5, rect.top+40),
		this, IDC_SPLITBUTTON1);
	//</snippet2>
	//<snippet3>
	/* 
	Set the style of the split button drop-down arrow: Display the 
	arrow on the left and retain the arrow's proportions when resizing 
	the control.
	*/
	bRC = m_splitButton.SetSplitStyle( BCSS_ALIGNLEFT | BCSS_STRETCH );
	//</snippet3>
	//<snippet4>
	/* 
	The drop-down arrow glyph is a function of the specified character. 
	The default "down" drop-down arrow glyph is specified by a 
	character '6'. Set the "up" arrow glyph, which is a character '5'.
	See the convenience method, SetSplitGlyph(), for comparison.
	*/
	BUTTON_SPLITINFO bsInfo = {0};
	bsInfo.mask = BCSIF_GLYPH;
	TCHAR chGlyph = _T('5'); // "up" arrow glyph 
	bsInfo.himlGlyph = (HIMAGELIST)chGlyph;
	bRC = m_splitButton.SetSplitInfo( &bsInfo );
	//</snippet4>
	//<snippet5>
	// Double the size of the split button drop-down arrow.
	SIZE sz;
	bRC = m_splitButton.GetSplitSize( &sz ); // current size
	sz.cx = sz.cx * 2;
	sz.cy = sz.cy * 2;
	bRC = m_splitButton.SetSplitSize( &sz );
	//</snippet5>
	//<snippet6>
	/* Set the state of the split button control to indicate that 
	the drop-down arrow is pushed. The arrow is drawn shaded to 
	indicate the state.
	*/
	m_splitButton.SetDropDownState( TRUE );
	//</snippet6>

	// Create a command link button beneath the split button control.
	m_splitButton.GetWindowRect( &rect ); 
	bRC = m_cmdLink.Create(
		_T("Command link text"),
		(dwStyles | BS_COMMANDLINK ),
		CRect( rect.left, rect.bottom+8, rect.right, rect.bottom+60),
		this, IDC_COMMANDLINK1);

	//<snippet7>
	// Set the command link text.
	m_cmdLink.SetNote(_T("This is the command link note."));
	//</snippet7>

	// End of extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCButton_s1Dlg::OnPaint()
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
HCURSOR CCButton_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

