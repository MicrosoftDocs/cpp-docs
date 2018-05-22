// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "CToolBarCtrl_s1.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};


// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	// Begin snippets. 

	// Although the snippets compile, they should not 
	// necessarily be in this routine.

	//<snippet1>
	{
		// Change the bitmap for the File Save button, whose 
		// command ID is ID_FILE_SAVE, to the bitmap for the 
		// About button, whose index is 7. 
		CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
		BOOL bRet = m_toolBarCtrl.ChangeBitmap( ID_FILE_SAVE, 7 );
	}
	//</snippet1>

	//<snippet2>
	{
		// Replace one toolbar bitmap with another.
		TBREPLACEBITMAP tbrb;
		tbrb.hInstOld = ::AfxGetInstanceHandle(); 
		tbrb.nIDOld = IDR_MAINFRAME;
		tbrb.hInstNew = ::AfxGetInstanceHandle();
		tbrb.nIDNew = IDR_MAINFRAME1; 
		tbrb.nButtons = 8;
		CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
		BOOL bRet = m_toolBarCtrl.ReplaceBitmap( &tbrb );
	}
	//</snippet2>

	//<snippet3>
	//Set color scheme for the current toolbar control. 
	//Make the left and top edges of the tool button red, 
	//and the right and bottom edges blue. The colors 
	//reverse when a button is pressed.
	//This method has no effect if the Vista visual theme 
	//is set.
	{
	COLORSCHEME cs;
	cs.dwSize = sizeof(COLORSCHEME);
	cs.clrBtnHighlight = RGB( 255, 0, 0 );
	cs.clrBtnShadow    = RGB( 0, 0, 255 );
	CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
	m_toolBarCtrl.SetColorScheme( &cs );
	}
	//</snippet3>

	//<snippet4>
	{
		// Set the horizontal and vertical padding of the current 
		// toolbar control. 
		CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
		m_toolBarCtrl.SetPadding( 50, 50 );
	}
	//</snippet4>

	//<snippet5>
	{
		// SetPressedImageList
		// Set the pressed image list to be the same as the 
		// normal image list.
		CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
		CImageList* pNormalCil =  m_toolBarCtrl.GetImageList();
		CImageList* pPressedCil = m_toolBarCtrl.GetPressedImageList();
		m_toolBarCtrl.SetPressedImageList( 0, pNormalCil );
	}
	//</snippet5>

	//<snippet6>
	{
		//Get information about the current tooltip. 
		TOOLINFO tInfo = {0};
		tInfo.cbSize = sizeof(TOOLINFO);
		CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
		CToolTipCtrl* m_toolTip = m_toolBarCtrl.GetToolTips();
		BOOL bRet = m_toolTip->GetCurrentTool( &tInfo );
	}
	//</snippet6>

	//<snippet7>
	{
		// Display the most recent tooltip.
		CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
		CToolTipCtrl* m_toolTip = m_toolBarCtrl.GetToolTips();
		m_toolTip->Popup();
	}
	//</snippet7>

	// End of snippets.

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}


// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG


// CMainFrame message handlers



