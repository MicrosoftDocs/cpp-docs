// MFCControlLadenDialogDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCControlLadenDialog.h"
#include "MFCControlLadenDialogDlg.h"
// <Snippet42>
#include "TestDialog.h"
// </Snippet42>
#include "AnimDlg.h"
#include "ExtraDlg.h"
#include "SimpleDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
   CAboutDlg();

// Dialog Data
   enum { IDD = IDD_ABOUTBOX };

   protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
   DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CMyDialog dialog




CMyDialog::CMyDialog(CWnd* pParent /*=NULL*/)
   : CDialog(CMyDialog::IDD, pParent)
   , m_pSimpleDlg(NULL)
{
   m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
// <Snippet46>
   m_pTestDlg = NULL;
// </Snippet46>
}

CMyDialog::~CMyDialog()
{
// <Snippet47>
   delete m_pTestDlg;
// </Snippet47>

   delete m_pSimpleDlg;
}


void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Control(pDX, IDC_DATETIMEPICKER1, m_DateTimeCtrl);
   DDX_Control(pDX, IDC_COMBOBOXEX1, m_ComboBoxEx);
   DDX_Control(pDX, IDC_LIST2, m_ListCtrl);
   DDX_Control(pDX, IDC_HOTKEY1, m_HotKeyCtrl);
   DDX_Control(pDX, IDC_LIST1, m_WorkAreaListCtrl);
   DDX_Control(pDX, IDC_LIST3, m_OwnerDrawListCtrl);
   DDX_Control(pDX, IDC_MONTHCALENDAR1, m_MonthCalCtrl);
   DDX_Control(pDX, IDC_TAB1, m_TabCtrl);
   DDX_Control(pDX, IDC_TREE1, m_TreeCtrl);
   DDX_Control(pDX, IDC_CHECKBOX, m_Checkbox);
}

BEGIN_MESSAGE_MAP(CMyDialog, CDialog)
   ON_WM_SYSCOMMAND()
   ON_WM_PAINT()
   ON_WM_QUERYDRAGICON()
   //}}AFX_MSG_MAP
   ON_NOTIFY(NM_RCLICK, IDC_TREE1, &CMyDialog::OnNMRclickTree1)
   ON_NOTIFY(DTN_DROPDOWN, IDC_DATETIMEPICKER1, &CMyDialog::OnDtnDropdownDatetimepicker1)
   ON_NOTIFY(DTN_FORMAT, IDC_DATETIMEPICKER1, &CMyDialog::OnDtnFormatDatetimepicker1)
   ON_NOTIFY(DTN_FORMATQUERY, IDC_DATETIMEPICKER1, &CMyDialog::OnDtnFormatqueryDatetimepicker1)
   ON_BN_CLICKED(IDC_HOTKEYASSIGN, &CMyDialog::OnBnClickedHotkeyassign)
// <Snippet23>
   ON_NOTIFY(LVN_GETDISPINFO, IDC_LIST3, &CMyDialog::OnLvnGetdispinfoList3)
// </Snippet23>
   ON_NOTIFY(LVN_ODCACHEHINT, IDC_LIST3, &CMyDialog::OnLvnOdcachehintList3)
   ON_NOTIFY(MCN_GETDAYSTATE, IDC_MONTHCALENDAR1, &CMyDialog::OnMcnGetdaystateMonthcalendar1)
   ON_NOTIFY(NM_CLICK, IDC_TAB1, &CMyDialog::OnNMClickTab1)
// <Snippet38>
   ON_NOTIFY(TBN_DROPDOWN, IDC_TOOLBAR1, &CMyDialog::OnTbnDropDownToolBar1)
// </Snippet38>
// <Snippet40>
   ON_NOTIFY_EX(TTN_NEEDTEXT, 0, &CMyDialog::OnTtnNeedText)
// </Snippet40>
   ON_COMMAND(ID_MENU_SHOWDIALOG, &CMyDialog::OnMenuShowdialog)
   ON_COMMAND(ID_MENU_SHOWMODELESSDIALOG, &CMyDialog::OnMenuShowmodelessdialog)
   ON_COMMAND(ID_MENU_SHOWANIMDIALOG, &CMyDialog::OnMenuShowanimdialog)
   ON_COMMAND(ID_MENU_SHOWEXTRADIALOG, &CMyDialog::OnMenuShowextradialog)
   ON_COMMAND(ID_MENU_SHOWSIMPLEDIALOG, &CMyDialog::OnMenuShowSimpleDialog)
   ON_COMMAND(ID_MENU_SHOWABOUTDIALOG, &CMyDialog::OnMenuShowAboutDialog)
   ON_COMMAND(ID_MENU_SHOWSIMPLEMODAL, &CMyDialog::OnMenuShowSimpleModal)
END_MESSAGE_MAP()


// CMyDialog message handlers

BOOL CMyDialog::OnInitDialog()
{
   CDialog::OnInitDialog();

   // Add "About..." menu item to system menu.

   // IDM_ABOUTBOX must be in the system command range.
   ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
   ASSERT(IDM_ABOUTBOX < 0xF000);

   CMenu* pSysMenu = GetSystemMenu(FALSE);
   if (pSysMenu != NULL)
   {
      CString strAboutMenu;
      strAboutMenu.LoadString(IDS_ABOUTBOX);
      if (!strAboutMenu.IsEmpty())
      {
         pSysMenu->AppendMenu(MF_SEPARATOR);
         pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
      }
   }

   // Set the icon for this dialog.  The framework does this automatically
   //  when the application's main window is not a dialog
   SetIcon(m_hIcon, TRUE);			// Set big icon
   SetIcon(m_hIcon, FALSE);		// Set small icon

   // Set the font of the month cal control
   {
// <Snippet6>
      
      //create and initialize the font to be used
      LOGFONT logFont = {0};
      logFont.lfHeight = -12;
      logFont.lfWeight = FW_NORMAL;
      logFont.lfCharSet = DEFAULT_CHARSET;
       _tcscpy_s(logFont.lfFaceName, _countof(logFont.lfFaceName), 
                 _T("Verdana"));

      m_MonthCalFont.CreateFontIndirect(&logFont);
      m_DateTimeCtrl.SetMonthCalFont(m_MonthCalFont);
// </Snippet6>
   }

   {
// <Snippet7>
      CString formatStr = _T("'Today is: 'yy'/'MM'/'dd");
      m_DateTimeCtrl.SetFormat(formatStr);
// </Snippet7>

      // Append an 'X' value to trigger the format notifications
      formatStr.Append(_T("' (Day 'X')'"));
      m_DateTimeCtrl.SetFormat(formatStr);
   }

   {
// <Snippet10>
      m_ComboImageList.Create(16, 16, ILC_COLOR, 2, 2);
// </Snippet10>
// <Snippet11>
      m_ComboImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
      m_ComboImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));	
      m_ComboImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON3));
// </Snippet11>

      m_ComboBoxEx.SetImageList(&m_ComboImageList);
   }

   {
// <Snippet12>
      COMBOBOXEXITEM     cbi = {0};
      CString            str;
      int                nItem;

      cbi.mask = CBEIF_IMAGE | CBEIF_INDENT | CBEIF_OVERLAY |
          CBEIF_SELECTEDIMAGE | CBEIF_TEXT;

      cbi.iItem = 0;
      cbi.pszText = _T("Item 0");
      cbi.iImage = 0;
      cbi.iSelectedImage = 1;
      cbi.iOverlay = 2;
      cbi.iIndent = (0 & 0x03);   //Set indentation according
                           //to item position

      nItem = m_ComboBoxEx.InsertItem(&cbi);
      ASSERT(nItem == 0);
// </Snippet12>

      cbi.iItem = 1;
      cbi.pszText = _T("Item 1");
      nItem = m_ComboBoxEx.InsertItem(&cbi);
      ASSERT(nItem == 1);
   }

   {
// <Snippet13>
      COMBOBOXEXITEM     cbi = {0};
      int				   iImageTemp;

      cbi.mask = CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
      cbi.iItem = 0;
      m_ComboBoxEx.GetItem(&cbi);

      iImageTemp = cbi.iImage;
      cbi.iImage = cbi.iSelectedImage;
      cbi.iSelectedImage = iImageTemp;
      VERIFY(m_ComboBoxEx.SetItem(&cbi));
// </Snippet13>
   }

   {
// <Snippet14>
      CHeaderCtrl* pHeaderCtrl = m_ListCtrl.GetHeaderCtrl();
      ASSERT(NULL != pHeaderCtrl);
      //perform any needed operations on the header using pHeader
// </Snippet14>

// <Snippet19>
// <Snippet15>
      m_ListImageList.Create(16, 16, ILC_COLOR, 2, 2);
// </Snippet15>
// <Snippet16>
      m_ListImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
      m_ListImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
// </Snippet16>
      m_ListCtrl.SetImageList(&m_ListImageList, LVSIL_SMALL);
// </Snippet19>

// <Snippet22>
      m_ListCtrl.SetExtendedStyle(LVS_EX_TRACKSELECT | LVS_EX_ONECLICKACTIVATE);
// </Snippet22>

      if (NULL != pHeaderCtrl)
      {
// <Snippet17>
         HDITEM curItem = {0};

         pHeaderCtrl->SetImageList(&m_ListImageList);

         curItem.mask = HDI_TEXT | HDI_FORMAT | HDI_WIDTH | HDI_IMAGE;
         curItem.pszText = _T("Column 1");
         curItem.cxy = 100;
         curItem.iImage = 0;
         curItem.fmt = HDF_LEFT | HDF_STRING | HDF_IMAGE;
         pHeaderCtrl->InsertItem(0, &curItem);
// </Snippet17>
      }
   }

   {
// <Snippet20>
      CSize size;
      size = m_WorkAreaListCtrl.ApproximateViewRect(); 
      size.cx += 100;
      size.cy += 100;

      CRect rcWorkAreas[4];
      rcWorkAreas[0].SetRect(0, 0, (size.cx/2) - 5, (size.cy/2) - 5);
      rcWorkAreas[1].SetRect((size.cx/2) + 5, 0, size.cx, (size.cy/2) - 5);
      rcWorkAreas[2].SetRect(0, (size.cy/2) + 5, (size.cx/2) - 5, size.cy);
      rcWorkAreas[3].SetRect((size.cx/2) + 5, (size.cy/2) + 5, size.cx, size.cy);

      //set work areas
      m_WorkAreaListCtrl.SetWorkAreas(4, rcWorkAreas);	
// </Snippet20>

      TCHAR szItemText[24];
      for (int i = 0; i < 20; i++)
      {
         _stprintf_s(szItemText, 24, _T("Item %d"), i);
         m_WorkAreaListCtrl.InsertItem(i, szItemText);
      }

// <Snippet21>
      // set insertion points for each work area
      CPoint rgptWork[4];
      for (int i = 0; i < 4; i++)
      {
          rgptWork[i].x = rcWorkAreas[i].left + 10;
          rgptWork[i].y = rcWorkAreas[i].top + 10;
      }
      // now move all the items to the different quadrants
      for (int i = 0; i < 20; i++)
      {
          m_WorkAreaListCtrl.SetItemPosition(i, rgptWork[i % 4]);
      }

      // force the control to rearrange the shuffled items
      m_WorkAreaListCtrl.Arrange(LVA_DEFAULT);
// </Snippet21>
   }

   {
      m_OwnerDrawImageList.Create(16, 16, ILC_COLOR, 2, 2);
      m_OwnerDrawImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
      m_OwnerDrawImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
      m_OwnerDrawListCtrl.SetImageList(&m_OwnerDrawImageList, LVSIL_SMALL);

      LVITEM lvi = {0};
      lvi.mask = LVIF_IMAGE | LVIF_TEXT;
      lvi.pszText = _T("Crap");
      
      m_Items.SetSize(4, 4);

      for (int i = 0; i < 4; i++)
      {
         m_OwnerDrawListCtrl.InsertItem(&lvi);
      }
   }

   m_Rebar.Create(this);

   {
// <Snippet27>
      //load bitmap for toolbar background
      m_RebarBitmap.LoadBitmap(IDB_BITMAP1);

      //create a toolbar band
      m_Toolbar1.Create(this, TBSTYLE_TRANSPARENT | TBSTYLE_FLAT);
      m_Toolbar1.LoadToolBar(IDR_MAINFRAME);

      REBARBANDINFO rbi = {0};
      rbi.cbSize = sizeof(REBARBANDINFO);
      rbi.fMask = RBBIM_BACKGROUND | RBBIM_CHILD | RBBIM_CHILDSIZE | 
         RBBIM_STYLE | RBBIM_TEXT;
      rbi.fStyle = RBBS_GRIPPERALWAYS;
      rbi.cxMinChild = 300;
      rbi.cyMinChild = 50;
      rbi.lpText = _T("Band #1");
      rbi.cch = 7;
      rbi.cx = 300;
      rbi.hbmBack = (HBITMAP)m_RebarBitmap;
      rbi.hwndChild = (HWND)m_Toolbar1;
      m_Rebar.GetReBarCtrl().InsertBand(0, &rbi);
// </Snippet27>
   }

   {
      m_RebarImageList.Create(16, 16, ILC_COLOR, 2, 2);
      m_RebarImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
      m_RebarImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
      m_Rebar.GetReBarCtrl().SetImageList(&m_RebarImageList);

      m_Toolbar2.Create(this, TBSTYLE_TRANSPARENT | TBSTYLE_FLAT);
      m_Toolbar2.LoadToolBar(IDR_MAINFRAME);

// <Snippet28>
      REBARBANDINFO rbi = {0};
      rbi.cbSize = sizeof(REBARBANDINFO);
      rbi.fMask = RBBIM_BACKGROUND | RBBIM_CHILD | RBBIM_IMAGE | 
         RBBIM_CHILDSIZE | RBBIM_STYLE | RBBIM_TEXT;
      rbi.fStyle = RBBS_GRIPPERALWAYS;
      rbi.cxMinChild = 200;
      rbi.cyMinChild = 50;
      rbi.lpText = _T("Band #2");
      rbi.cch = 7;
      rbi.cx = 300;
      rbi.hbmBack = (HBITMAP)m_RebarBitmap;
      rbi.iImage = 0;
      rbi.hwndChild = (HWND)m_Toolbar2;
      m_Rebar.GetReBarCtrl().InsertBand(1, &rbi);	
// </Snippet28>
   }

   {
      m_MyDlgBar.Create(this, IDD_DIALOGBAR, CBRS_BOTTOM, 0);

      REBARBANDINFO rbi = {0};
      rbi.cbSize = sizeof(REBARBANDINFO);
      rbi.fMask = RBBIM_BACKGROUND | RBBIM_CHILD | RBBIM_CHILDSIZE | 
         RBBIM_STYLE | RBBIM_TEXT;
      rbi.fStyle = RBBS_GRIPPERALWAYS;
      rbi.cxMinChild = 300;
      rbi.cyMinChild = 50;
      rbi.lpText = _T("Band #3");
      rbi.cch = 7;
      rbi.cx = 300;
      rbi.hbmBack = (HBITMAP)m_RebarBitmap;
      rbi.hwndChild = (HWND)m_MyDlgBar;
      m_Rebar.GetReBarCtrl().InsertBand(2, &rbi);
   }

   {
// <Snippet61>
      CControlBar& m_myControlBar	= m_Rebar;
      m_myControlBar.SetBorders(2, 5, 2, 5);
// </Snippet61>
   }

   {
      RECT rect;
      GetClientRect(&rect);
      m_Rebar.SetWindowPos(&wndTop, rect.right - 300, rect.bottom - 150, 
         300, 150, SWP_SHOWWINDOW);
   }

   {
      RECT rect = {0, 0, 100, 16};
      m_StatusBarCtrl.Create(WS_CHILD | WS_VISIBLE | CBRS_BOTTOM, rect,
         this, 0);
   }

   {
// <Snippet31>
      int strPartDim[4]= {80, 160, 240, -1};
      
      m_StatusBarIcon = AfxGetApp()->LoadIcon(IDI_ICON1);

      m_StatusBarCtrl.SetParts(4, strPartDim);
      m_StatusBarCtrl.SetIcon(1, m_StatusBarIcon);
      m_StatusBarCtrl.SetText(_T("Part 1"), 1, 0);
// </Snippet31>
   }

   {
      m_TabCtrl.InsertItem(0, _T("Tab 1"));
      m_TabCtrl.InsertItem(1, _T("Tab 2"));	
      m_TabCtrl.InsertItem(2, _T("Tab 3"));
   }

   {
// <Snippet32>
      //modify the third item to be highlighted
      TCITEM curItem = {0};

      m_TabCtrl.DeselectAll(FALSE); //reset all tab items
      curItem.mask = TCIF_STATE;
      m_TabCtrl.GetItem(2, &curItem);
      curItem.mask = TCIF_STATE;
      curItem.dwState = TCIS_HIGHLIGHTED;
      curItem.dwStateMask = TCIS_HIGHLIGHTED;
      m_TabCtrl.SetItem(2, &curItem);
// </Snippet32>
   }

   {
      RECT rect = {0, 0, 0, 0};
      m_ToolBarCtrl.Create(WS_CHILD | WS_VISIBLE | CCS_TOP, rect, this, 
         IDC_TOOLBAR1);

// <Snippet35>
      CWinApp* pApp= AfxGetApp();

      m_ToolBarImages.Create(16, 16, ILC_COLOR, 4, 4);
      m_ToolBarImages.Add(pApp->LoadIcon(IDI_BLK));
      m_ToolBarImages.Add(pApp->LoadIcon(IDI_RED));
      m_ToolBarImages.Add(pApp->LoadIcon(IDI_YELL));
      m_ToolBarImages.Add(pApp->LoadIcon(IDI_WHI));

      m_ToolBarDisabledImages.Create(16, 16, ILC_COLOR, 4, 4);
      m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_BLK));
      m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_RED));
      m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_YELL));
      m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_WHI));

      m_ToolBarCtrl.SetImageList(&m_ToolBarImages);
      m_ToolBarCtrl.SetDisabledImageList(&m_ToolBarDisabledImages);
// </Snippet35>

      TBBUTTON aButt[4];
      for (int i = 0; i < 4; i++)
      {
         aButt[i].iBitmap = i;
         aButt[i].idCommand = 0;
         aButt[i].fsState = TBSTATE_ENABLED;
         aButt[i].fsStyle = TBSTYLE_BUTTON;
         aButt[i].iString = -1;
      }
      m_ToolBarCtrl.AddButtons(4, aButt);

// <Snippet36>
      m_ToolBarCtrl.SetExtendedStyle(TBSTYLE_EX_DRAWDDARROWS);
// </Snippet36>

// <Snippet37>
      TBBUTTONINFO tbi;

      tbi.dwMask = TBIF_STYLE;
      tbi.cbSize = sizeof(TBBUTTONINFO);
      m_ToolBarCtrl.GetButtonInfo(0, &tbi);
      tbi.fsStyle |= TBSTYLE_DROPDOWN;
      m_ToolBarCtrl.SetButtonInfo(0, &tbi);
// </Snippet37>

      DWORD dwTBStyle = m_ToolBarCtrl.GetStyle();
      m_ToolBarCtrl.SetStyle(dwTBStyle | TBSTYLE_TOOLTIPS);
   }

   {
      m_ToolTipCtrl.Create(this, TTS_ALWAYSTIP);
      m_ToolTipCtrl.AddTool(&m_MonthCalCtrl, _T("I'm a tooltip!"));
   }

   {
      HTREEITEM hItem;
      hItem = m_TreeCtrl.InsertItem(_T("Thing 1"));
      m_TreeCtrl.InsertItem(TVIF_TEXT, _T("Subthing"),
         0, 0, 0, 0, 0, hItem, NULL);
      hItem = m_TreeCtrl.InsertItem(_T("Thing 2"));
      m_TreeCtrl.InsertItem(TVIF_TEXT, _T("Subthing"),
         0, 0, 0, 0, 0, hItem, NULL);
   }

   {
// <Snippet51>
      GetMyCheckbox()->SetCheck(BST_CHECKED);
// </Snippet51>
   }

// <Snippet55>
   EnableToolTips(TRUE);
// </Snippet55>

// <Snippet60>
   CCheckListBox myCheckListBox;
   myCheckListBox.Create(LBS_HASSTRINGS | LBS_OWNERDRAWFIXED, 
      CRect(10, 10, 100, 100), this, IDC_MYCHECKLISTBOX);
// </Snippet60>

   {
// <Snippet69>   
      CString str;

      str = CHotKeyCtrl::GetKeyName(VK_CONTROL, FALSE);

      // str is now "Ctrl", or the localized equivalent.
// </Snippet69>
   }

   {
      TCHAR* lpszStrings;
// <Snippet72>
      // one null added automatically
      lpszStrings = _T("Only one string to add\0");   
// </Snippet72>
   }

   {
      TCHAR* lpszStrings;
// <Snippet73>
      // adds three strings with one call
      lpszStrings = _T("String 1\0String 2\0String 3\0");   
// </Snippet73>
   }

   return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyDialog::OnSysCommand(UINT nID, LPARAM lParam)
{
   if ((nID & 0xFFF0) == IDM_ABOUTBOX)
   {
      CAboutDlg dlgAbout;
      dlgAbout.DoModal();
   }
   else
   {
      CDialog::OnSysCommand(nID, lParam);
   }
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDialog::OnPaint()
{
   if (IsIconic())
   {
      CPaintDC dc(this); // device context for painting

      SendMessage(WM_ICONERASEBKGND, 
         reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
HCURSOR CMyDialog::OnQueryDragIcon()
{
   return static_cast<HCURSOR>(m_hIcon);
}


void CMyDialog::OnNMRclickTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(pNMHDR);
// <Snippet4>
   CPoint cursorPos;
   cursorPos.x = GetCurrentMessage()->pt.x;
   cursorPos.y = GetCurrentMessage()->pt.y;
// </Snippet4>

// <Snippet71>
   TVITEM curItem;
   HTREEITEM hParentItem;

   hParentItem = m_TreeCtrl.GetSelectedItem();

   //modify the parent item to keep the '+' sign
   curItem.mask = TVIF_STATE | TVIF_HANDLE;
   curItem.hItem = hParentItem;
   curItem.state = TVIS_EXPANDPARTIAL;
   curItem.stateMask = TVIS_EXPANDPARTIAL;
   m_TreeCtrl.SetItem(&curItem);
// </Snippet71>

   *pResult = 0;
}

// <Snippet5>
void CMyDialog::OnDtnDropdownDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(pNMHDR);

   //set the background color of the month to gray
   COLORREF clr= RGB(100, 100, 100);

   m_DateTimeCtrl.SetMonthCalColor(MCSC_MONTHBK, clr);

   *pResult = 0;
}
// </Snippet5>

// <Snippet9>
void CMyDialog::OnDtnFormatDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult)
{
   LPNMDATETIMEFORMAT pDTFormat = reinterpret_cast<LPNMDATETIMEFORMAT>(pNMHDR);

   COleDateTime oCurTime;

   m_DateTimeCtrl.GetTime(oCurTime);

   _itot_s(oCurTime.GetDayOfYear(), pDTFormat->szDisplay, 
      sizeof(pDTFormat->szDisplay) / sizeof(TCHAR), 10);

   *pResult = 0;
}
// </Snippet9>

// <Snippet8>
void CMyDialog::OnDtnFormatqueryDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult)
{
   LPNMDATETIMEFORMATQUERY pDTFormatQuery = 
      reinterpret_cast<LPNMDATETIMEFORMATQUERY>(pNMHDR);
   CDC* pDC = NULL;
   CFont* pFont = NULL;
   CFont* pOrigFont = NULL;

   //  Prepare the device context for the GetTextExtentPoint32 call.
   pDC = GetDC();
   if (NULL == pDC)
   {
      return;
   }

   pFont = GetFont();
   if(NULL == pFont)
   {
      pFont = new CFont();
      VERIFY(pFont->CreateStockObject(DEFAULT_GUI_FONT));
   }

   pOrigFont = pDC->SelectObject(pFont);

   // Check to see if this is the callback segment desired. If so,
   // use the longest text segment to determine the maximum 
   // width of the callback field, and then place the information into 
   // the NMDATETIMEFORMATQUERY structure.
   if(!_tcscmp(_T("X"), pDTFormatQuery->pszFormat))
   {
      ::GetTextExtentPoint32(pDC->m_hDC, _T("366"), 3, &pDTFormatQuery->szMax);
   }

   // Reset the font in the device context then release the context.
   pDC->SelectObject(pOrigFont);
   ReleaseDC(pDC);

   *pResult = 0;
}
// </Snippet8>

void CMyDialog::OnBnClickedHotkeyassign()
{
// <Snippet18>
   WORD wKeyAndShift = static_cast<WORD>(m_HotKeyCtrl.GetHotKey());
   this->SendMessage(WM_SETHOTKEY, wKeyAndShift);	
// </Snippet18>

// <Snippet52>
   m_Checkbox.SetCheck(BST_CHECKED);
// </Snippet52>
}

void CMyDialog::OnLvnGetdispinfoList3(NMHDR *pNMHDR, LRESULT *pResult)
{
// <Snippet24>
   NMLVDISPINFO *pDispInfo = reinterpret_cast<NMLVDISPINFO*>(pNMHDR);
   LV_ITEM* pItem = &(pDispInfo)->item;

   int iItem = pItem->iItem;

   if (pItem->mask & LVIF_TEXT) //valid text buffer?
   {
      switch(pItem->iSubItem)
      {
         case 0: //fill in main text
            _tcscpy_s(pItem->pszText, pItem->cchTextMax,
               m_Items[iItem].m_strItemText);
            break;
         case 1: //fill in sub item 1 text
            _tcscpy_s(pItem->pszText, pItem->cchTextMax,
               m_Items[iItem].m_strSubItem1Text);
            break;
         case 2: //fill in sub item 2 text
            _tcscpy_s(pItem->pszText, pItem->cchTextMax,
               m_Items[iItem].m_strSubItem2Text);
            break;
      }
   }

   if (pItem->mask & LVIF_IMAGE) //valid image?
   {
      pItem->iImage = m_Items[iItem].m_iImage;
   }
// </Snippet24>

   *pResult = 0;
}

// <Snippet25>
void CMyDialog::OnLvnOdcachehintList3(NMHDR *pNMHDR, LRESULT *pResult)
{
   LPNMLVCACHEHINT pCacheHint = reinterpret_cast<LPNMLVCACHEHINT>(pNMHDR);

   // Update the cache with the recommended range.
   for (int i = pCacheHint->iFrom; i <= pCacheHint->iTo; i++)
   {
      m_Items[i].m_iImage = i % 2;
      m_Items[i].m_strItemText.Format(_T("Item %d"), i);
      m_Items[i].m_strSubItem1Text = _T("Sub 1");
      m_Items[i].m_strSubItem2Text = _T("Sub 2");
   }

   *pResult = 0;
}
// </Snippet25>

void CMyDialog::OnMcnGetdaystateMonthcalendar1(NMHDR *pNMHDR, LRESULT *pResult)
{
// <Snippet26>
   LPNMDAYSTATE pDayState = reinterpret_cast<LPNMDAYSTATE>(pNMHDR);

   int iMax = pDayState->cDayState;

   for(int i = 0; i < iMax; i++)
   {
      pDayState->prgDayState[i] = (MONTHDAYSTATE)0; // init to 0
      pDayState->prgDayState[i] |= 0x01 << 14; // set 15th bit to 1
   }
// </Snippet26>

   *pResult = 0;
}

void CMyDialog::OnNMClickTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(pNMHDR);

   DWORD dwStyle = m_TabCtrl.GetExtendedStyle();

   if (TCS_EX_FLATSEPARATORS & dwStyle)
   {
// <Snippet34>
      DWORD dwExStyle= m_TabCtrl.GetExtendedStyle();
      m_TabCtrl.SetExtendedStyle(dwExStyle & ~TCS_EX_FLATSEPARATORS);	
// </Snippet34>
   }
   else
   {
// <Snippet33>
      DWORD dwExStyle= m_TabCtrl.GetExtendedStyle();
      m_TabCtrl.SetExtendedStyle(dwExStyle | TCS_EX_FLATSEPARATORS);
// </Snippet33>
   }

   *pResult = 0;
}

// <Snippet39>
void CMyDialog::OnTbnDropDownToolBar1(NMHDR* pNMHDR, LRESULT* pResult)
{
   LPNMTOOLBAR pToolBar = reinterpret_cast<LPNMTOOLBAR>(pNMHDR);
   ClientToScreen(&(pToolBar->rcButton)); // TrackPopupMenu uses screen coords

   CMenu menu;
   VERIFY(menu.LoadMenu(IDR_MENU1));
   CMenu* pPopup = menu.GetSubMenu(0);
   if (NULL != pPopup)
   {
      pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, 
         pToolBar->rcButton.left, pToolBar->rcButton.bottom, this);
   }

   *pResult = 0;
}
// </Snippet39>

// <Snippet54>
BOOL CMyDialog::OnTtnNeedText(UINT id, NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(id);

   NMTTDISPINFO *pTTT = (NMTTDISPINFO *) pNMHDR;
   UINT_PTR nID = pNMHDR->idFrom;
   BOOL bRet = FALSE;

   if (pTTT->uFlags & TTF_IDISHWND)
   {
      // idFrom is actually the HWND of the tool
      nID = ::GetDlgCtrlID((HWND)nID);
      if(nID)
      {
         _stprintf_s(pTTT->szText, sizeof(pTTT->szText) / sizeof(TCHAR), 
            _T("Control ID = %d"), nID);
         pTTT->hinst = AfxGetResourceHandle();
         bRet = TRUE;
      }
   }

   *pResult = 0;

   return bRet;
}
// </Snippet54>

// <Snippet41>
BOOL CMyDialog::PreTranslateMessage(MSG* pMsg)
{
   if(pMsg->message== WM_LBUTTONDOWN ||
      pMsg->message== WM_LBUTTONUP ||
      pMsg->message== WM_MOUSEMOVE)
   {
      m_ToolTipCtrl.RelayEvent(pMsg);
   }

   return CDialog::PreTranslateMessage(pMsg);
}
// </Snippet41>

void CMyDialog::OnMenuShowdialog()
{
// <Snippet43>
   CTestDialog testdlg;
   testdlg.DoModal();	
// </Snippet43>
}

void CMyDialog::OnMenuShowmodelessdialog()
{
// <Snippet48>
   if (NULL == m_pTestDlg)
   {
      m_pTestDlg = new CTestDialog(this);
      m_pTestDlg->Create(CTestDialog::IDD, this);
   }
   m_pTestDlg->ShowWindow(SW_SHOW);	
// </Snippet48>
}

// <Snippet50>
CButton* CMyDialog::GetMyCheckbox()
{
   return (CButton*)GetDlgItem(IDC_CHECKBOX);
}
// </Snippet50>

void CMyDialog::OnMenuShowanimdialog()
{
   CAnimDlg animDlg;
   animDlg.DoModal();
}

void CMyDialog::OnMenuShowextradialog()
{
   CExtraDlg extraDlg;
   extraDlg.DoModal();
}

// <Snippet62>
void CMyDialog::OnMenuShowSimpleDialog()
{
   //m_pSimpleDialog initialized to NULL in the constructor of CMyDialog class
   m_pSimpleDlg = new CSimpleDlg();
   //Check if new succeeded and we got a valid pointer to a dialog object
   if(m_pSimpleDlg != NULL)
   {
      BOOL ret = m_pSimpleDlg->Create(IDD_SIMPLEDIALOG, this);

      if(!ret)   //Create failed.
         AfxMessageBox(_T("Error creating Dialog"));

      m_pSimpleDlg->ShowWindow(SW_SHOW);
   }
   else
   {
      AfxMessageBox(_T("Error Creating Dialog Object"));
   }
}
// </Snippet62>

// <Snippet63>
void CMyDialog::OnMenuShowAboutDialog()
{
   // Construct the dialog box passing the 
   // ID of the dialog template resource
   CDialog aboutDlg(IDD_ABOUTBOX);

   // Create and show the dialog box
   INT_PTR nRet = -1;
   nRet = aboutDlg.DoModal();

   // Handle the return value from DoModal
   switch (nRet)
   {
      case -1: 
         AfxMessageBox(_T("Dialog box could not be created!"));
         break;
      case IDABORT:
         // Do something
         break;
      case IDOK:
         // Do something
         break;
      case IDCANCEL:
         // Do something
         break;
      default:
         // Do something
         break;
   };
}
// </Snippet63>

// <Snippet64>
void CMyDialog::OnMenuShowSimpleModal()
{
   CSimpleDlg myDlg;
   INT_PTR nRet = myDlg.DoModal();

   if (nRet == IDOK || nRet == 5)
      AfxMessageBox(_T("Dialog closed successfully"));
}
// </Snippet64>
