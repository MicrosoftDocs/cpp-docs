// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include <dlgs.h>

#include "MainFrm.h"
#include "HelloWnd.h"
#include "DrawFrame.h"
#include "MyDlg.h"
#include "PenWidthsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CColorMenu

// CColorMenu

CColorMenu::CColorMenu()
{
	VERIFY(CreateMenu());
}

CColorMenu::~CColorMenu()
{
	Detach();
	ASSERT(m_hMenu == NULL);    // defaul CMenu::~CMenu will destroy
}

void CColorMenu::AppendColorMenuItem(UINT nID, COLORREF color)
{
   UINT_PTR upColor = color;
	VERIFY(AppendMenu(MF_ENABLED | MF_OWNERDRAW, nID, (LPCTSTR)upColor));
}

// <Snippet31>
// Override MeasureItem() to return the size of the menu item.
// CColorMenu is a CMenu-derived class. 

#define COLOR_BOX_WIDTH     20
#define COLOR_BOX_HEIGHT    20


void CColorMenu::MeasureItem(LPMEASUREITEMSTRUCT lpMIS)
{
   // all items are of fixed size
   lpMIS->itemWidth = COLOR_BOX_WIDTH;
   lpMIS->itemHeight = COLOR_BOX_HEIGHT;
}
// </Snippet31>

// <Snippet24>
// Override DrawItem() to implement drawing for an owner-draw CMenu object.
// CColorMenu is a CMenu-derived class.
void CColorMenu::DrawItem(LPDRAWITEMSTRUCT lpDIS)
{
   CDC* pDC = CDC::FromHandle(lpDIS->hDC);
   COLORREF cr = (COLORREF)lpDIS->itemData; // RGB in item data

   if (lpDIS->itemAction & ODA_DRAWENTIRE)
   {
      // Paint the color item in the color requested
      CBrush br(cr);
      pDC->FillRect(&lpDIS->rcItem, &br);
   }

   if ((lpDIS->itemState & ODS_SELECTED) &&
      (lpDIS->itemAction & (ODA_SELECT | ODA_DRAWENTIRE)))
   {
      // item has been selected - hilite frame
      COLORREF crHilite = RGB(255-GetRValue(cr),
                  255-GetGValue(cr), 255-GetBValue(cr));
      CBrush br(crHilite);
      pDC->FrameRect(&lpDIS->rcItem, &br);
   }

   if (!(lpDIS->itemState & ODS_SELECTED) &&
      (lpDIS->itemAction & ODA_SELECT))
   {
      // Item has been de-selected -- remove frame
      CBrush br(cr);
      pDC->FrameRect(&lpDIS->rcItem, &br);
   }
}
// </Snippet24>

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	ON_WM_CREATE()
   ON_COMMAND(ID_FILE_NEWMDICHILD, &CMainFrame::OnFileNewMdiChildWnd)
   ON_COMMAND(ID_FILE_HELLO, &CMainFrame::OnHello)
   ON_COMMAND(ID_HELLO_CLOSE, &CMainFrame::OnCloseWindow)
   ON_COMMAND(ID_MDI_MAXIMIZE, &CMainFrame::OnMaximizeWindow)
   ON_COMMAND(ID_MDI_RESTORE, &CMainFrame::OnRestoreWindow)
   ON_COMMAND(ID_FRAME_NEWDRAW, &CMainFrame::OnNewDraw)
	ON_COMMAND_EX(ID_WINDOW_ARRANGE, &CMainFrame::OnWindowCommand)
	ON_COMMAND_EX(ID_WINDOW_CASCADE, &CMainFrame::OnWindowCommand)
	ON_COMMAND_EX(ID_WINDOW_TILE_HORZ, &CMainFrame::OnWindowCommand)
	ON_COMMAND_EX(ID_WINDOW_TILE_VERT, &CMainFrame::OnWindowCommand)
   ON_COMMAND(ID_FRAME_ACTIVATENEXTWINDOW, &CMainFrame::OnActivateNextWindow)
   ON_COMMAND(ID_TEST_ACTIVATEFIRSTMDICHILD, &CMainFrame::OnActivateFirstMDIChild)
   ON_COMMAND(ID_FRAME_SETUPCOLOR, &CMainFrame::OnMenuSetupcolor)
   ON_COMMAND(ID_MENU_DISABLEFILENEW, &CMainFrame::OnMenuDisablefilenew)
   ON_COMMAND(ID_MENU_ATTACH32799, &CMainFrame::OnMenuAttach)
   ON_COMMAND(ID_MENU_DELETETEMPMAP32800, &CMainFrame::OnMenuDeletetempmap)
   ON_COMMAND(ID_MENU_CREATEMENU, &CMainFrame::OnMenuCreatemenu)
   ON_COMMAND(ID_MENU_TOGGLEINFO, &CMainFrame::OnToggleTestMenuItemInfo)
   ON_COMMAND(ID_MENU_TOGGLESTATE, &CMainFrame::OnToggleTestMenuState)
   ON_COMMAND(ID_MENU_CHANGEFILEMENU, &CMainFrame::OnChangeFileMenu)
   ON_COMMAND(ID_MENU_REPLACEMENU, &CMainFrame::OnReplaceMenu)
   ON_COMMAND(ID_MENU_LOADMENUINDIRECT, &CMainFrame::OnLoadMenuIndirect)
   ON_UPDATE_COMMAND_UI(ID_MENU_BITMAP, &CMainFrame::OnUpdateMenuBitmap)
   ON_COMMAND(ID_WINAPP_ADDTORECENTFILELIST, &CMainFrame::OnWinappAddtorecentfilelist)
   ON_COMMAND(ID_WINAPP_WINHELP, &CMainFrame::OnWinappWinhelp)
   ON_COMMAND(ID_WINAPP_GETPROFILEBINARY, &CMainFrame::OnWinappGetprofilebinary)
   ON_COMMAND(ID_WINAPP_GETPROFILEINT, &CMainFrame::OnWinappGetprofileint)
   ON_COMMAND(ID_WINAPP_GETPROFILESTRING, &CMainFrame::OnWinappGetprofilestring)
   ON_COMMAND(ID_WINAPP_WRITEPROFILEBINARY, &CMainFrame::OnWinappWriteprofilebinary)
   ON_COMMAND(ID_CURSOR_DOCURSOR, &CMainFrame::OnCursorDocursor)
   ON_COMMAND(ID_CWND_MYDLG, &CMainFrame::OnCwndMydlg)
   ON_COMMAND(ID_CWND_MODELESS, &CMainFrame::OnCwndModeless)
   ON_COMMAND(ID_CWND_PENWIDTHSDLG, &CMainFrame::OnCwndPenwidthsdlg)
   ON_COMMAND(ID_CWND_MYFILEDIALOG, &CMainFrame::OnCwndMyfiledialog)
   ON_COMMAND(ID_CWND_DELETEFILEMENU, &CMainFrame::OnCwndDeletefilemenu)
   ON_COMMAND(ID_CWND_SHOWMODELESS, &CMainFrame::DisplayModeless)
   ON_COMMAND(ID_CWND_HIDEMODELESS, &CMainFrame::HideModeless)
   ON_COMMAND(ID_CWND_DISPLAYERRORMSG, &CMainFrame::OnDisplayErrorMessage)
   ON_COMMAND(ID_CWND_STARTTIMER, &CMainFrame::OnStartTimer)
   ON_COMMAND(ID_CWND_STOPTIMER, &CMainFrame::OnStopTimer)
   ON_WM_TIMER()
   ON_COMMAND(ID_GLOBALS_AFXGETAPP, &CMainFrame::OnGlobalsAfxgetapp)
   ON_COMMAND(ID_GLOBALS_CLOSEAPP, &CMainFrame::OnGlobalsCloseapp)
   ON_COMMAND(ID_GLOBALS_AFXGETRESOURCEHANDLE, &CMainFrame::OnGlobalsAfxgetresourcehandle)
   ON_COMMAND(ID_GLOBALS_AFXMESSAGEBOX, &CMainFrame::OnGlobalsAfxmessagebox)
   ON_COMMAND(ID_GLOBALS_AFXREGISTERWNDCLASS, &CMainFrame::OnGlobalsAfxregisterwndclass)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};


// CMainFrame construction/destruction

// <Snippet3>
CMainFrame::CMainFrame()
   : m_hDrawMenu(NULL)
   , m_hDrawAccel(NULL)
   , m_bCheck(false)
   , m_nWindowTimer(0)
   , m_nCallbackTimer(0)
{
   // Set to FALSE so no ON_UPDATE_COMMAND_UI 
   // or ON_COMMAND handlers are needed, and
   // CMenu::EnableMenuItem() will work as expected.
   m_bAutoMenuEnable = FALSE;
}
// </Snippet3>

CMainFrame::~CMainFrame()
{
   DestroyMenu(m_hDrawMenu);

// <Snippet33>
   // This code fragment is taken from CMainFrame::~CMainFrame

   // Destroy the bitmap objects if they are loaded successfully 
   // in OnCreate().
   if (m_CheckBitmap.m_hObject)
      m_CheckBitmap.DeleteObject();

   if (m_UnCheckBitmap.m_hObject)
      m_UnCheckBitmap.DeleteObject();
// </Snippet33>

// <Snippet68>
   // detach MDI client window in CMainFrame destructor
   m_wndMDIClient.Detach();
// </Snippet68>
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
// <Snippet69>
   // In CMainFrame::OnCreate, attach MDI client window

	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

   // attach MDI client window
   if (m_wndMDIClient.Attach(m_hWndMDIClient) == 0)
   {
      TRACE(_T("Failed to attach MDIClient.\n"));
      return -1;      // fail to create
   }
// </Snippet69>

// <Snippet86>
   // DeleteTempMap() is a static member and does not need 
   // to be called within the scope of an instantiated CWnd object.
   CWnd::DeleteTempMap();
// </Snippet86>

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

   m_hDrawMenu = ::LoadMenu(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_DRAW));
   m_hDrawAccel = ::LoadAccelerators(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_DRAW));

// <Snippet32>
   // The code fragment below is from CMainFrame::OnCreate and shows 
   // how to associate bitmaps with the "Bitmap" menu item. 
   // Whether the "Bitmap" menu item is checked or unchecked, Windows 
   // displays the appropriate bitmap next to the menu item. Both 
   // IDB_CHECKBITMAP and IDB_UNCHECKBITMAP bitmaps are loaded 
   // in OnCreate() and destroyed in the destructor of CMainFrame class. 
   // CMainFrame is a CFrameWnd-derived class.

   // Load bitmaps from resource. Both m_CheckBitmap and m_UnCheckBitmap
   // are member variables of CMainFrame class of type CBitmap.
   ASSERT(m_CheckBitmap.LoadBitmap(IDB_CHECKBITMAP));
   ASSERT(m_UnCheckBitmap.LoadBitmap(IDB_UNCHECKBITMAP));

   // Associate bitmaps with the "Bitmap" menu item. 
   CMenu* mmenu = GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(4);
   ASSERT(submenu->SetMenuItemBitmaps(ID_MENU_BITMAP, MF_BYCOMMAND, 
      &m_CheckBitmap, &m_UnCheckBitmap));
// </Snippet32>

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;

   WNDCLASS wc = {0};
   ::GetClassInfo(AfxGetInstanceHandle(), cs.lpszClass, &wc);
   wc.lpszClassName = _T("MyNewClass");
   AfxRegisterClass(&wc);

   cs.lpszClass = _T("MyNewClass");

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



// <Snippet7>
// CMainFrame::OnFileNewCMdiChildWnd() is a menu command handler for the 
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It shows the creation of a standard Windows MDI child window using 
// the registered CMDIChildWnd class.  
void CMainFrame::OnFileNewMdiChildWnd()
{
   CMDIChildWnd* pMDIChildWnd = new CMDIChildWnd;
   VERIFY(pMDIChildWnd->Create(
      NULL,                                        // standard CMDIChildWnd class
      _T("My MDIChildWnd"),                        // caption of MDI child window
      WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW, // window styles
      rectDefault,                                 // default rectangle size
      this));                                      // parent window; can be NULL

   // the default PostNcDestroy handler will delete this object when destroyed
}
// </Snippet7>

// <Snippet8>
// CMainFrame::OnHello() is a menu command handler for the CMainFrame
// class, which in turn is a CMDIFrameWnd-derived class.
// It shows the creation of a Windows MDI child window using a custom
// window class. The custom window class is registered in 
// CHelloWnd::Create(). CHelloWnd is a CMDIChildWnd-derived class.
void CMainFrame::OnHello()
{
   CHelloWnd *pHelloWnd = new CHelloWnd;
   if (!pHelloWnd->Create(_T("Hello"),
      WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW,
      rectDefault, this))
      return;

   // the default PostNcDestroy handler will delete this object when destroyed
}
// </Snippet8>

// <Snippet10>
// CMainFrame::OnCloseWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived 
// class. It closes and destroys the current active MDI child window. 
void CMainFrame::OnCloseWindow() 
{
   CMDIChildWnd* child = MDIGetActive();
   if (child)
      child->MDIDestroy();
}
// </Snippet10>

// <Snippet11>
// CMainFrame::OnMaximizeWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived 
// class. It maximizes the current active MDI child window.
void CMainFrame::OnMaximizeWindow() 
{
   BOOL maximized;
   CMDIChildWnd* child = MDIGetActive(&maximized);
   if (child && (!maximized))
      child->MDIMaximize();   // or MDIMaximize(child); 
}
// </Snippet11>

// <Snippet12>
// CMainFrame::OnRestoreWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It restores the current active MDI child window from maximized 
// or minimized size.
void CMainFrame::OnRestoreWindow() 
{
   BOOL maximized;
   CMDIChildWnd* child = MDIGetActive(&maximized);
   if (child && (maximized || child->IsIconic()))
     child->MDIRestore();     // or MDIRestore(child);
}
// </Snippet12>

// <Snippet14>
// The code below is from winmdi.cpp. It shows how to 
// call CMDIFrameWnd::CreateClient(). CMainFrame is a 
// CMDIFrameWnd-derived class.
BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* /*pContext*/)
{
   CMenu* pMenu = NULL;
	if (m_hMenuDefault == NULL)
	{
		// default implementation for MFC V1 backward compatibility
		pMenu = GetMenu();
		ASSERT(pMenu != NULL);
		// This is attempting to guess which sub-menu is the Window menu.
		// The Windows user interface guidelines say that the right-most
		// menu on the menu bar should be Help and Window should be one
		// to the left of that.
		int iMenu = pMenu->GetMenuItemCount() - 2;

		// If this assertion fails, your menu bar does not follow the guidelines
		// so you will have to override this function and call CreateClient
		// appropriately or use the MFC V2 MDI functionality.
		ASSERT(iMenu >= 0);
		pMenu = pMenu->GetSubMenu(iMenu);
		ASSERT(pMenu != NULL);
	}

	return CreateClient(lpcs, pMenu);
}
// </Snippet14>

// <Snippet15>
// CMainFrame is a CMDIFrameWnd-derived class,
// OnNewDraw is a menu command handler,
// CDrawFrame is a CMDIChildWnd-derived class.
void CMainFrame::OnNewDraw()
{
   CreateNewChild(RUNTIME_CLASS(CDrawFrame), IDR_DRAW, m_hDrawMenu, 
      m_hDrawAccel);
}
// </Snippet15>

// <Snippet16>
// CMainFrame::OnActivateFirstMDIChild() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It looks for the caption of the first created MDI child window from
// the Window popup menu, and then activate the child window.
void CMainFrame::OnActivateFirstMDIChild() 
{
   // Get handle to the Window pop-up menu.
   CMenu* menubar = GetMenu();
   CMenu* wmenu = CMenu::FromHandle(GetWindowMenuPopup(menubar->GetSafeHmenu()));
   if (wmenu == NULL)
      return;
 
   // Get the caption of the first created MDI child window.
   CString caption;
   if (!wmenu->GetMenuString(AFX_IDM_FIRST_MDICHILD, caption, MF_BYCOMMAND))
      return;

   // Get the actual name of the first created MDI child window by 
   // getting rid of the number and space, e.g. "&1 MDI 1".
   int pos = caption.FindOneOf(_T(" "));
   if (pos == -1)
      return;

   caption = caption.Right(caption.GetLength() - (pos + 1));

   // Get the CWnd* of the first created MDI child window by comparing
   // the caption of each MDI child window in the MDI application. 
   // Activate the first created MDI child window if found.
   CMDIChildWnd* child = MDIGetActive();
   do
   {
      CString str;
      child->GetWindowText(str);
      if (str == caption)
      {
         child->MDIActivate();        // or MDIActivate(child);
         break;
      }

      child = (CMDIChildWnd*) child->GetWindow(GW_HWNDNEXT);
   }
   while (child);
}
// </Snippet16>

// <Snippet17>
// CMainFrame::OnWindowCommand() is a menu command handler for
// CMainFrame class, which is a CMDIFrameWnd-derived
// class. It handles menu commands for the Windows pop-up menu.
// Its entries in the message map are of the following form:
// 	ON_COMMAND_EX(ID_WINDOW_ARRANGE, &CMainFrame::OnWindowCommand)
BOOL CMainFrame::OnWindowCommand(UINT nID)
{   
   switch (nID)
   {
   case ID_WINDOW_ARRANGE:   // For Window\Arrange Icons menu item, arrange
      MDIIconArrange();     // all minimized document child windows.
      break;

   case ID_WINDOW_CASCADE:  // For Window\Cascade menu item, arrange
      MDICascade();         // all the MDI child windows in a cascade format.
      break;

   case ID_WINDOW_TILE_HORZ:       // For Window\Tile Horizontal menu item, 
      MDITile(MDITILE_HORIZONTAL); // tile MDI child windows so that
      break;                       // one window appears above another.

   case ID_WINDOW_TILE_VERT:       // For Window\Tile Vertical menu item, 
      MDITile(MDITILE_VERTICAL);   // tile MDI child windows so that
      break;                       // one window appears beside another.
      
   }

   return TRUE;
}
// </Snippet17>

// <Snippet18>
// CMainFrame::OnActivateNextWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It activates the child window immediately behind the currently 
// active child window and places the currently active child window 
// behind all other child windows. 
void CMainFrame::OnActivateNextWindow() 
{
   MDINext();
}
// </Snippet18>

void CMainFrame::OnMenuCreatemenu()
{
// <Snippet22>
   // The code fragment below shows how to create a new menu for the
   // application window using CreateMenu() and CreatePopupMenu().
   // Then, the created menu will replace the current menu of the
   // application. The old menu will be destroyed with DestroyMenu().
   // NOTE: The code fragment below is done in a CFrameWnd-derived class.

   // Create a new menu for the application window.
   VERIFY(m_NewMenu.CreateMenu());

   // Create a "File" popup menu and insert this popup menu to the
   // new menu of the application window. The "File" menu has only
   // one menu item, i.e. "Exit".
   VERIFY(m_FileMenu.CreatePopupMenu());
   m_FileMenu.AppendMenu(MF_STRING, ID_APP_EXIT, _T("E&xit"));
   m_NewMenu.AppendMenu(MF_POPUP, (UINT_PTR)m_FileMenu.m_hMenu, _T("&File"));

   // Remove and destroy old menu
   SetMenu(NULL);
   CMenu* old_menu = CMenu::FromHandle(m_hMenuDefault);
   old_menu->DestroyMenu();

   // Add new menu.
   SetMenu(&m_NewMenu);

   // Assign default menu
   m_hMenuDefault = m_NewMenu.m_hMenu;
// </Snippet22>
}

static COLORREF colors[] = {
	0x00000000,     // black
	0x00FF0000,     // blue
	0x0000FF00,     // green
	0x00FFFF00,     // cyan
	0x000000FF,     // red
	0x00FF00FF,     // magenta
	0x0000FFFF,     // yellow
	0x00FFFFFF      // white
};
const int nColors = sizeof(colors)/sizeof(colors[0]);

void CMainFrame::OnMenuSetupcolor()
{
	for (int iColor = 0; iColor < nColors; iColor++)
		m_ColorMenu.AppendColorMenuItem(IDS_COLOR_NAME_FIRST + iColor, colors[iColor]);

	// Replace the specified menu item with a color popup
	//  (note: will only work once)
	CMenu* pMenuBar = GetMenu();
	ENSURE(pMenuBar != NULL);
	TCHAR szString[256];     // don't change the string

	pMenuBar->GetMenuString(IDM_COLOR_MENU, szString, sizeof(szString) / sizeof(szString[0]),
		MF_BYCOMMAND);
	VERIFY(pMenuBar->ModifyMenu(IDM_COLOR_MENU, MF_BYCOMMAND | MF_POPUP,
		(UINT_PTR)m_ColorMenu.m_hMenu, szString));
}

void CMainFrame::OnMenuDisablefilenew()
{
// <Snippet25>
   // The code fragment below shows how to disable (and gray out) the 
   // File\New menu item.
   // NOTE: m_bAutoMenuEnable is set to FALSE in the constructor of 
   // CMainFrame so no ON_UPDATE_COMMAND_UI or ON_COMMAND handlers are 
   // needed, and CMenu::EnableMenuItem() will work as expected.

   CMenu* mmenu = GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(0);
   submenu->EnableMenuItem(ID_FILE_NEW, MF_BYCOMMAND | MF_DISABLED | MF_GRAYED);
// </Snippet25>
}

void CMainFrame::OnMenuAttach()
{
// <Snippet21>
   CMenu mnu;
   HMENU hmnu = AfxGetMainWnd()->GetMenu()->GetSafeHmenu();
   mnu.Attach(hmnu);

   // Now you can manipulate the window's menu as a CMenu
   // object...

   mnu.Detach();
// </Snippet21>
}

void CMainFrame::OnMenuDeletetempmap()
{
// <Snippet23>
   // DeleteTempMap() is a static member and does not need
   // an instantiated CMenu object.
   CMenu::DeleteTempMap();
// </Snippet23>
}

// <Snippet26>
// CMainFrame::OnToggleTestMenuInfo() is a menu command handler for 
// "Toggle Info" menu item (whose resource id is ID_MENU_TOGGLEINFO). It 
// toggles the checked or unchecked state of the "Toggle Info" menu item.
// CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnToggleTestMenuItemInfo()
{
   // Get the popup menu which contains the "Toggle Info" menu item.
   CMenu* mmenu = GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(4);

   // Check the state of the "Toggle Info" menu item. Check the menu item
   // if it is currently unchecked. Otherwise, uncheck the menu item
   // if it is not currently checked.
   MENUITEMINFO info;
   info.cbSize = sizeof (MENUITEMINFO); // must fill up this field
   info.fMask = MIIM_STATE;             // get the state of the menu item
   VERIFY(submenu->GetMenuItemInfo(ID_MENU_TOGGLEINFO, &info));

   if (info.fState & MF_CHECKED)
      submenu->CheckMenuItem(ID_MENU_TOGGLEINFO, MF_UNCHECKED | MF_BYCOMMAND);
   else
      submenu->CheckMenuItem(ID_MENU_TOGGLEINFO, MF_CHECKED | MF_BYCOMMAND);
}
// </Snippet26>

// <Snippet27>
// CMainFrame::OnToggleTestMenuState() is a menu command handler for 
// "Toggle State" menu item (whose resource id is ID_MENU_TOGGLESTATE). 
// It toggles the checked or unchecked state of the "Toggle State" menu item.
// CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnToggleTestMenuState() 
{
   // Get the popup menu which contains the "Toggle State" menu item.
   CMenu* mmenu = GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(4);

   // Check the state of the "Toggle State" menu item. Check the menu item
   // if it is currently unchecked. Otherwise, uncheck the menu item
   // if it is not currently checked.
   UINT state = submenu->GetMenuState(ID_MENU_TOGGLESTATE, MF_BYCOMMAND);
   ASSERT(state != 0xFFFFFFFF);

   if (state & MF_CHECKED)
      submenu->CheckMenuItem(ID_MENU_TOGGLESTATE, MF_UNCHECKED | MF_BYCOMMAND);
   else
      submenu->CheckMenuItem(ID_MENU_TOGGLESTATE, MF_CHECKED | MF_BYCOMMAND);
}
// </Snippet27>

int FindMenuItem(CMenu* Menu, LPCTSTR MenuString);

// <Snippet28>
// CMainFrame::OnChangeFileMenu() is a menu command handler for 
// CMainFrame class, which in turn is a CFrameWnd-derived class. 
// It modifies the File menu by inserting, removing and renaming 
// some menu items. Other operations include associating a context 
// help id and setting default menu item to the File menu. 
// CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnChangeFileMenu() 
{
   // Get the menu from the application window.
   CMenu* mmenu = GetMenu();

   // Look for "File" menu.
   int pos = FindMenuItem(mmenu, _T("&File"));
   if (pos == -1)
      return;

   // Remove "New" menu item from the File menu.
   CMenu* submenu = mmenu->GetSubMenu(pos);
   pos = FindMenuItem(submenu, _T("&New\tCtrl+N"));
   if (pos > -1)
      submenu->RemoveMenu(pos, MF_BYPOSITION);

   // Look for "Open" menu item from the File menu. Insert a new
   // menu item called "Close" right after the "Open" menu item.
   // ID_CLOSEFILE is the command id for the "Close" menu item.
   pos = FindMenuItem(submenu, _T("&Open...\tCtrl+O"));
   if (pos > -1)
      submenu->InsertMenu(pos + 1, MF_BYPOSITION, ID_CLOSEFILE, _T("&Close"));

   // Rename menu item "Exit" to "Exit Application".
   pos = FindMenuItem(submenu, _T("E&xit"));
   if (pos > -1)
   {
      UINT id = submenu->GetMenuItemID(pos);
      submenu->ModifyMenu(id, MF_BYCOMMAND, id, _T("E&xit Application"));
   }

   // Associate a context help ID with File menu, if one is not found.
   // ID_FILE_CONTEXT_HELPID is the context help ID for the File menu
   // that is defined in resource file. 
   if (submenu->GetMenuContextHelpId() == 0)
      submenu->SetMenuContextHelpId(ID_FILE_CONTEXT_HELPID);

   // Set "Open" menu item as the default menu item for the File menu, 
   // if one is not found. So, when a user double-clicks the File
   // menu, the system sends a command message to the menu's owner 
   // window and closes the menu as if the File\Open command item had 
   // been chosen. 
   if (submenu->GetDefaultItem(GMDI_GOINTOPOPUPS, TRUE) == -1)
   {
      pos = FindMenuItem(submenu, _T("&Open...\tCtrl+O"));
      submenu->SetDefaultItem(pos, TRUE);
   }
}

// FindMenuItem() will find a menu item string from the specified
// popup menu and returns its position (0-based) in the specified 
// popup menu. It returns -1 if no such menu item string is found.
int FindMenuItem(CMenu* Menu, LPCTSTR MenuString)
{
   ASSERT(Menu);
   ASSERT(::IsMenu(Menu->GetSafeHmenu()));

   int count = Menu->GetMenuItemCount();
   for (int i = 0; i < count; i++)
   {
      CString str;
      if (Menu->GetMenuString(i, str, MF_BYPOSITION) &&
         str.Compare(MenuString) == 0)
         return i;
   }

   return -1;
}
// </Snippet28>

// <Snippet29>
// CMainFrame::OnReplaceMenu() is a menu command handler for CMainFrame
// class, which in turn is a CFrameWnd-derived class. It loads a new
// menu resource and replaces the SDI application window's menu bar with
// this new menu. CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnReplaceMenu() 
{
   // Load the new menu.
   m_ShortMenu.LoadMenu(IDR_SHORT_MENU);
   ASSERT(m_ShortMenu);

   // Remove and destroy the old menu
   SetMenu(NULL);
   ::DestroyMenu(m_hMenuDefault);

   // Add the new menu
   SetMenu(&m_ShortMenu);

   // Assign default menu
   m_hMenuDefault = m_ShortMenu.GetSafeHmenu();  // or m_ShortMenu.m_hMenu;
}
// </Snippet29>

UINT AddMenuItem(LPVOID MenuTemplate, int TemplateBytes, WCHAR* MenuString, WORD MenuID, BOOL IsPopup, BOOL LastItem);

// <Snippet30>
// CMainFrame::OnLoadMenuIndirect() is a menu command handler for 
// CMainFrame class, which in turn is a CFrameWnd-derived class. It 
// shows how to use LoadMenuIndirect() to load a resource from a 
// menu template in memory.
void CMainFrame::OnLoadMenuIndirect() 
{
   // For simplicity, allocate 500 bytes from stack. May use 
   // GlobalAlloc() to allocate memory bytes from heap.
   BYTE milist[500];
   memset(milist, 0, 500);
   int bytes_left = sizeof(milist);

   // Fill up the MENUITEMTEMPLATEHEADER structure.
   MENUITEMTEMPLATEHEADER* mheader = (MENUITEMTEMPLATEHEADER*) milist;
   mheader->versionNumber = 0;
   mheader->offset = 0;

   int bytes_used = sizeof(MENUITEMTEMPLATEHEADER);
   bytes_left -= bytes_used;

   // Add the following menu items to menu bar:
   // File     Edit
   //   Exit     Copy
   //            Paste
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&File", 0, 
      TRUE, FALSE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"E&xit", 
      ID_APP_EXIT, FALSE, TRUE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&Edit", 0, 
      TRUE, TRUE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&Copy", 
      ID_EDIT_COPY, FALSE, FALSE);
   bytes_left -= bytes_used;
   bytes_used += AddMenuItem(milist + bytes_used, bytes_left, L"&Paste", 
      ID_EDIT_PASTE, FALSE, TRUE);
   bytes_left -= bytes_used;
   
   // Load resource from a menu template in memory.
   ASSERT(m_IndiMenu.LoadMenuIndirect(milist));

   // Remove and destroy old menu
   SetMenu(NULL);
   ::DestroyMenu(m_hMenuDefault);

   // Add new menu.
   SetMenu(&m_IndiMenu);

   // Assign default menu
   m_hMenuDefault = m_IndiMenu.m_hMenu;
}

// This is a helper function for adding a menu item (either a popup 
// or command item) to the specified menu template.
//
//    MenuTemplate  - pointer to a menu template
//    TemplateBytes - space remaining in MenuTemplate
//    MenuString    - string for the menu item to be added
//    MenuID        - id for the command item. Its value is ignored if 
//                    IsPopup is TRUE.
//    IsPopup       - TRUE for popup menu (or submenu); FALSE for command 
//                    item
//    LastItem      - TRUE if MenuString is the last item for the popup; 
//                    FALSE otherwise.
UINT AddMenuItem(LPVOID MenuTemplate, int TemplateBytes, WCHAR* MenuString, 
   WORD MenuID, BOOL IsPopup, BOOL LastItem)
{
   MENUITEMTEMPLATE* mitem = (MENUITEMTEMPLATE*) MenuTemplate;

   UINT  bytes_used = 0;
   if (IsPopup)         // for popup menu
   {      
      if (LastItem)
         mitem->mtOption = MF_POPUP | MF_END;
      else
         mitem->mtOption = MF_POPUP;
      bytes_used += sizeof (mitem->mtOption);  
      
      mitem = (MENUITEMTEMPLATE*) ((BYTE*) MenuTemplate + bytes_used);
      // a popup doesn't have mtID!!!
      
      TemplateBytes -= bytes_used;
      wcscpy_s((WCHAR*) mitem, TemplateBytes / sizeof(WCHAR), MenuString);
      bytes_used += (UINT)(sizeof (WCHAR) * (wcslen(MenuString) + 1)); // include '\0'   
   }
   else      // for command item
   {
      mitem->mtOption = LastItem ? MF_END : 0;
      mitem->mtID = MenuID; 
      TemplateBytes -= bytes_used;
      wcscpy_s(mitem->mtString, TemplateBytes / sizeof(WCHAR), MenuString);  
      bytes_used += (UINT)(sizeof (mitem->mtOption ) + sizeof (mitem->mtID) + 
         sizeof (WCHAR) * (wcslen(MenuString) + 1));   // include '\0'
   }

   return bytes_used;
}
// </Snippet30>
void CMainFrame::OnUpdateMenuBitmap(CCmdUI *pCmdUI)
{
   m_bCheck = !m_bCheck;
   pCmdUI->SetCheck(m_bCheck);
}


void CMainFrame::OnWinappAddtorecentfilelist()
{
// <Snippet36>
   // This adds the pathname c:\temp\test.doc to the top of
   // the most recently used (MRU) list in the File menu.
   AfxGetApp()->AddToRecentFileList(_T("c:\\temp\\test.doc"));
// </Snippet36>
}



void CMainFrame::OnWinappWinhelp()
{
// <Snippet53>
   // Header File: HELPIDS.H
   //
   // This example header file is #include'd twice:
   // (1) It is #include'd by the .CPP file that passes the DWORD
   //     context i.d. to CWinApp::WinHelp.
   // (2) It is #include'd in the [MAP] section of the .HPJ file,
   //     to associate the help context string "HID_MYTOPIC" with
   //     the help context numeric i.d., 101.
   // The help context string "HID_MYTOPIC" is what identifies the
   // help topic in the help .RTF source file, in the "#" footnote:
   //     # HID_MYTOPIC
   //
   // Note, it is not necessary to manage help context id's this way
   // for help topics associated with command id's and user interface
   // id's defined in your RESOURCE.H file; you should use the MAKEHM
   // tool via the custom build rule on your resource.h file to produce 
   // a help map (.HM) file for these id's.  It is necessary to manage 
   // help context id's as illustrated here only for help topics not 
   // associated with command id's or user interface id's. 

   #define HID_MYTOPIC 101
  
   // Show the custom help topic that has the context string
   // "HID_MYTOPIC" in the help .RTF file, and which is mapped
   // to the DWORD i.d. HID_MYTOPIC in the above HELPIDS.H file.
   AfxGetApp()->WinHelp(HID_MYTOPIC);


   // The following is one line of code in the help map (.HM)
   // file produced by the MAKEHM tool, which is called by the custom
   // build rule on the resource.h file.  The MAKEHM tool reads the 
   // following #define in the application's RESOURCE.H file:
   #define ID_MYCOMMAND 0x08004
   // and adds a help id offset value of 0x10000 to create the
   // help context DWORD value 0x18004:
   // HID_MYCOMMAND                           0x18004
   // See MFC Tech Note 28 for more information on help id offset values.

   // Rarely will you need to directly call WinHelp yourself
   // with the help context i.d. for a command or user interface
   // object. The framework will call WinHelp automatically when
   // the user, for example, hits F1 when the focus is on a
   // My Command menu item. However, if you do want to directly
   // call WinHelp for the help topic associated with the command,
   // here is how you would do it:

   AfxGetApp()->WinHelp(0x10000 + ID_MYCOMMAND);
// </Snippet53>
}

void CMainFrame::OnWinappGetprofilebinary()
{
// <Snippet41>
   CWinApp* pApp = AfxGetApp();

   const TCHAR* pszKey = _T("My Section");
   struct complex {
     double re, im;
   } myData = { 1.4142, -0.5 };

   // Write the information to the registry.

   pApp->WriteProfileBinary(pszKey, _T("ComplexData"), (LPBYTE)&myData, 
      sizeof(myData));

   // Read the information from the registry.

   complex* pData;
   UINT n;
   BOOL ret = pApp->GetProfileBinary(pszKey, _T("ComplexData"), (LPBYTE*)&pData, 
      &n);

   ASSERT(ret);
   ASSERT(n == sizeof(complex));
   ASSERT(myData.re == pData->re);
   ASSERT(myData.im == pData->im);
   delete [] pData; // free the buffer
// </Snippet41>
}

void CMainFrame::OnWinappGetprofileint()
{
// <Snippet42>
   CWinApp* pApp = AfxGetApp();

   const TCHAR* pszKey = _T("My Section"); 
   const TCHAR* pszName = _T("Julian");
   int iAge = 26;

   // Write the information to the registry.

   pApp->WriteProfileString(pszKey, _T("Name"), pszName);
   pApp->WriteProfileInt(pszKey, _T("Age"), iAge);

   // Read the information from the registry.

   CString strName = pApp->GetProfileString(pszKey, _T("Name"));
   int iAge2 = pApp->GetProfileInt(pszKey, _T("Age"), 0);

   ASSERT(strName == pszName);
   ASSERT(iAge2 == iAge);
// </Snippet42>
}

void CMainFrame::OnWinappGetprofilestring()
{
// <Snippet43>
   CWinApp* pApp = AfxGetApp();

   CString strSection       = _T("My Section");
   CString strStringItem    = _T("My String Item");
   CString strIntItem       = _T("My Int Item");

   pApp->WriteProfileString(strSection, strStringItem, _T("test"));

   CString strValue;
   strValue = pApp->GetProfileString(strSection, strStringItem);
   ASSERT(strValue == _T("test"));

   pApp->WriteProfileInt(strSection, strIntItem, 1234);

   int nValue;
   nValue = pApp->GetProfileInt(strSection, strIntItem, 0);
   ASSERT(nValue == 1234);
// </Snippet43>
}

void CMainFrame::OnWinappWriteprofilebinary()
{
// <Snippet54>
   CWinApp* pApp = AfxGetApp();

   CString strSection = _T("My Section");
   CString strItem = _T("My Binary Item");
   double myData = 123.456e12;

   pApp->WriteProfileBinary(strSection, strItem, (LPBYTE)&myData, sizeof(myData));
   double *pData;
   UINT n;
   pApp->GetProfileBinary(strSection, strItem, (LPBYTE*)&pData, &n);
   ASSERT(n == sizeof(myData));
   ASSERT(myData = *pData);
   delete [] pData;  // free the buffer
// </Snippet54>
}

// <Snippet62>
BOOL SomeLengthyProcess()
{
   CWaitCursor wait;
   //Do the lengthy processing.
   Sleep(1000);

   AfxMessageBox(_T("Some result")); //This changes the cursor.
   wait.Restore(); //Restore the Wait cursor.
   //Continue Processing.
   Sleep(1000);

   //The destructor changes the cursor back to Regular cursor.
   return TRUE;         

}
// </Snippet62>

static bool SomeCondition = true;

// <Snippet63>
// The following example illustrates the most common case
// of displaying the wait cursor during some lengthy
// processing.
void LengthyFunction()
{
   // perhaps you display a dialog box before displaying a
   // wait cursor

   CWaitCursor wait;   // display wait cursor

   // do some lengthy processing
   Sleep(1000);

}  // destructor automatically removes the wait cursor

// This example shows using a CWaitCursor object inside a block
// so the wait cursor is displayed only while the program is
// performing a lengthy operation.
void ConditionalFunction()
{
   if (SomeCondition)
   {
      CWaitCursor wait;   // display wait cursor in this block only

      // do some lengthy processing
      Sleep(1000);

   }  // at this point, the destructor removes the wait cursor
   else
   {
      // no wait cursor--only quick processing
   }
}
// </Snippet63>

// <Snippet64>
// This example illustrates performing an operation 
// which changes the wait cursor. You should call 
// CWaitCursor::Restore to restore the wait 
// cursor after an operation which changes the cursor.
void AnotherLengthyFunction( )
{
   CWaitCursor wait;   // display wait cursor

   // do some lengthy processing
   Sleep(1000);

   // The dialog box will normally change the cursor to
   // the standard arrow cursor.
   CFileDialog dlg(TRUE);
   dlg.DoModal();

   // It is necessary to call Restore here in order
   // to change the cursor back to the wait cursor.
   wait.Restore();

   // do some more lengthy processing
   Sleep(1000);

   // destructor automatically removes the wait cursor
}

// If the wait cursor is changed by a function called by
// the function which created the wait cursor, you 
// can call CCmdTarget::RestoreWaitCursor to restore 
// the wait cursor.
void CalledFunction()
{
   CFileDialog dlg(TRUE);
   dlg.DoModal();

   // Since CWinApp is derived from CCmdTarget, we can use a 
   // pointer to our application object to make the call to
   // CCmdTarget::RestoreWaitCursor.
   AfxGetApp()->RestoreWaitCursor();

   // Yet more lengthy processing...
   Sleep(1000);
}
// </Snippet64>

void CMainFrame::OnCursorDocursor()
{
   SomeLengthyProcess();
   TRACE(_T("SomeLengthyProcess\n"));

   Sleep(1000);

   LengthyFunction();
   TRACE(_T("LengthyFunction\n"));

   Sleep(1000);

   ConditionalFunction();
   TRACE(_T("ConditionalFunction\n"));

   Sleep(1000);

   AnotherLengthyFunction();
   TRACE(_T("AnotherLengthyFunction\n"));

   Sleep(1000);

   CWaitCursor wait;

   CalledFunction();
   TRACE(_T("CalledFunction\n"));
}

void CMainFrame::OnCwndMydlg()
{
   CMyDlg dlg;
   dlg.DoModal();
}

void CMainFrame::OnCwndModeless()
{
   m_Modeless.Create(IDD_MODELESS, this);
   m_Modeless.ShowWindow(SW_SHOW);
}

// CMyFileDialog

IMPLEMENT_DYNAMIC(CMyFileDialog, CFileDialog)

CMyFileDialog::CMyFileDialog(BOOL bOpenFileDialog, LPCTSTR lpszDefExt, LPCTSTR lpszFileName,
		DWORD dwFlags, LPCTSTR lpszFilter, CWnd* pParentWnd) :
		CFileDialog(bOpenFileDialog, lpszDefExt, lpszFileName, dwFlags, lpszFilter, pParentWnd)
{

}

CMyFileDialog::~CMyFileDialog()
{
}


BEGIN_MESSAGE_MAP(CMyFileDialog, CFileDialog)
END_MESSAGE_MAP()



// CMyFileDialog message handlers


// <Snippet93>
//CMyFileDialog is a CFileDialog-derived class
//OnInitDialog is the handler for WM_INITDIALOG
BOOL CMyFileDialog::OnInitDialog() 
{
   CFileDialog::OnInitDialog();

   CWnd* pWndParent = GetParent();

   //make sure you add #include <dlgs.h> for IDs 'edt1' & 'stc3'

   //disables the 'file name' edit and static control
   //of the standard file open dialog

   //get handle of 'file name' combobox control & disable it
   CWnd* pWnd = pWndParent->GetDlgItem(cmb13);
   pWnd->EnableWindow(FALSE);

   //get handle of 'file name' static control & disable it
   pWnd = pWndParent->GetDlgItem(stc3);
   pWnd->EnableWindow(FALSE);
   
   return TRUE;
}
// </Snippet93>

void CMainFrame::OnCwndPenwidthsdlg()
{
   CPenWidthsDlg pwdlg;
   pwdlg.DoModal();
}

void CMainFrame::OnCwndMyfiledialog()
{
   CMyFileDialog mfd(FALSE);
   mfd.DoModal();
}

// <Snippet98>
void CMainFrame::OnCwndDeletefilemenu()
{
   // This example deletes the leftmost popup menu or leftmost
   // popup menu item from the application's main window.
   CWnd* pMain = AfxGetMainWnd();

   // The main window _can_ be NULL, so this code
   // doesn't ASSERT and actually tests.
   if (pMain != NULL)
   {
      // Get the main window's menu
      CMenu* pMenu = pMain->GetMenu();

      // If there is a menu and it has items, we'll
      // delete the first one.
      if (pMenu != NULL && pMenu->GetMenuItemCount() > 0)
      {
         pMenu->DeleteMenu(0, MF_BYPOSITION);
         // force a redraw of the menu bar
         pMain->DrawMenuBar();
      }

      // No need to delete pMenu because it is an MFC
      // temporary object.
   }
}
// </Snippet98>

// <Snippet103>
// This example uses the CWnd::IsWindowVisible() function to
// determine if a dialog box is visible. If it is not, it calls
// CWnd::ShowWindow with the SW_SHOWNORMAL command.
void CMainFrame::DisplayModeless()
{
   if(!m_Modeless.IsWindowVisible())
   {
      m_Modeless.ShowWindow(SW_SHOWNORMAL);
   }
}

// This example uses the CWnd::IsWindowVisible() function to
// determine if a dialog box is visible. If it is, it calls
// CWnd::ShowWindow with the SW_HIDE command.
void CMainFrame::HideModeless()
{
   if(m_Modeless.IsWindowVisible())
   {
      m_Modeless.ShowWindow(SW_HIDE);
   }
}
// </Snippet103>

// <Snippet104>
void CMainFrame::OnDisplayErrorMessage()
{
   // This displays a message box with the title "Error"
   // and the message "Help, Something went wrong."
   // The error icon is displayed in the message box, along with
   // an OK button.
   MessageBox(_T("Help, Something went wrong."), _T("Error"), 
      MB_ICONERROR | MB_OK);
}
// </Snippet104>

// <Snippet118>
void CMainFrame::OnStartTimer() 
{
	// This timer uses a WM_TIMER message, not a callback.
	// Therefore, the timer is specific to this window.
	// m_nWindowTimer is a UINT_PTR field.
    m_nWindowTimer = SetTimer(1, 2000, NULL);
	
	// For this demo, we specify an interval that won't overlap
	// with the window timer.
	m_nCallbackTimer = SetTimer(2, 3750, &CMainFrame::MyTimerProc);
	
	// See whether we got the ID we requested in the first parameter.
#ifdef _DEBUG
	CString str;
	str.Format(_T("m_ncallbackTImer ID = %d"), m_nCallbackTimer);
	TRACE(str);
#endif

}

 void CALLBACK CMainFrame::MyTimerProc(
   HWND hWnd,      // handle of CWnd that called SetTimer
   UINT nMsg,      // WM_TIMER
   UINT_PTR nIDEvent,   // timer identification
   DWORD dwTime    // system time
)
{
	 MessageBeep(0x00000030L);   // Windows question sound.
}

void CMainFrame::OnStopTimer() 
{
   KillTimer(m_nWindowTimer);   
   KillTimer(m_nCallbackTimer);   
}

void CMainFrame::OnTimer(UINT nIDEvent) 
{
   MessageBeep(0xFFFFFFFF);   // Beep

   
   // Call base class handler.
   CMDIFrameWnd::OnTimer(nIDEvent);
}
// </Snippet118>

void CMainFrame::OnGlobalsAfxgetapp()
{
// <Snippet126>
   // Print the application's executable filename.
   TRACE(_T("Executable filename = %s\n"), AfxGetApp()->m_pszExeName);
// </Snippet126>

// <Snippet127>
   // Print the application name to the debugger output window.
   TRACE(_T("Application name is %s\n"), AfxGetAppName());
// </Snippet127>

// <Snippet128>
   // Print the application instance handle to the debugger output window.
   TRACE(_T("Application instance handle is 0x%0X\n"), AfxGetInstanceHandle());
// </Snippet128>

// <Snippet131>
   AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
// </Snippet131>

// <Snippet132>
   //Print the current thread ID in the Debug Window
   TRACE(_T("Current Thread ID = 0x%X\n"), AfxGetThread()->m_nThreadID);
// </Snippet132>
}

void CMainFrame::OnGlobalsCloseapp()
{
// <Snippet129>
   //The following line send a WM_CLOSE message 
   //   to the Application's main window. This will cause the
   //   Application to exit.
   AfxGetMainWnd()->PostMessage(WM_CLOSE, 0, 0);
// </Snippet129>
}

void CMainFrame::OnGlobalsAfxgetresourcehandle()
{
// <Snippet130>
   //Load the menu specifying the module handle where resource is to be 
   //found & resource ID
   HMENU hMenu = ::LoadMenu(AfxGetResourceHandle(), MAKEINTRESOURCE(IDR_MAINFRAME));
// </Snippet130>
   hMenu;
}

void CMainFrame::OnGlobalsAfxmessagebox()
{
   int nStringID = IDR_MAINFRAME;
// <Snippet133>
   // A simple message box, with only the OK button.
   AfxMessageBox(_T("Simple message box."));

   // A message box that uses a string from a string table
   // with yes and no buttons and the stop icon.
   // NOTE: nStringID is an integer that contains a valid id of
   // a string in the current resource.
   AfxMessageBox(nStringID, MB_YESNO|MB_ICONSTOP);
// </Snippet133>
}

void CMainFrame::OnGlobalsAfxregisterwndclass()
{
// <Snippet134>
   CString strMyClass;

   // load stock cursor, brush, and icon for
   // my own window class

   try
   {
      strMyClass = AfxRegisterWndClass(
         CS_VREDRAW | CS_HREDRAW,
         ::LoadCursor(NULL, IDC_ARROW),
         (HBRUSH) ::GetStockObject(WHITE_BRUSH),
         ::LoadIcon(NULL, IDI_APPLICATION));
   }
   catch (CResourceException* pEx)
   {
      AfxMessageBox(_T("Couldn't register class! (Already registered?)"));
      pEx->Delete();
   }
// </Snippet134>
}
