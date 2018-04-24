// MyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "MyDlg.h"


// CMyDlg dialog

IMPLEMENT_DYNAMIC(CMyDlg, CDialog)

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
   , m_pWndStatic(NULL)
   , m_pWndStaticEx(NULL)
   , m_pBitmapCaret(NULL)
   , m_hIcon(NULL)
{

}

CMyDlg::~CMyDlg()
{
   delete m_pWndStatic;
   delete m_pWndStaticEx;
   delete m_pBitmapCaret;
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Control(pDX, IDC_MYEDIT, m_MyEdit);
   DDX_Control(pDX, IDC_DIRLIST, m_List);
   DDX_Control(pDX, IDC_DIRCOMBO, m_SuperCombo);
}


BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
   ON_BN_CLICKED(IDC_BUTTON1, &CMyDlg::OnMarkButtons)
   ON_BN_CLICKED(IDC_BUTTON2, &CMyDlg::OnMarkRadio)
   ON_BN_CLICKED(IDC_BUTTON3, &CMyDlg::OnFindCenterChild)
   ON_BN_CLICKED(IDC_BUTTON4, &CMyDlg::OnSizeToClient)
   ON_BN_CLICKED(IDC_BUTTON5, &CMyDlg::OnCreateStatic)
   ON_BN_CLICKED(IDC_BUTTON6, &CMyDlg::OnChangeCaret)
   ON_BN_CLICKED(IDC_BUTTON7, &CMyDlg::OnCreateExtendedControl)
   ON_BN_CLICKED(IDC_BUTTON8, &CMyDlg::OnCreateGrayCaret)
   ON_BN_CLICKED(IDC_BUTTON9, &CMyDlg::OnCreateSolidCaret)
   ON_WM_LBUTTONDOWN()
   ON_NOTIFY_EX(TTN_NEEDTEXT, 0, &CMyDlg::OnToolTipNotify)
   ON_WM_CTLCOLOR()
   ON_BN_CLICKED(IDC_BUTTON10, &CMyDlg::OnBnClickedButton10)
   ON_BN_CLICKED(IDC_BUTTON11, &CMyDlg::SetSpinRange)
   ON_BN_CLICKED(IDC_BUTTON12, &CMyDlg::OnBnClickedButton12)
   ON_BN_CLICKED(IDC_BUTTON14, &CMyDlg::OnSetName)
END_MESSAGE_MAP()


// CMyDlg message handlers


// CMyEdit

IMPLEMENT_DYNAMIC(CMyEdit, CEdit)

CMyEdit::CMyEdit()
{
}

CMyEdit::~CMyEdit()
{
}


BEGIN_MESSAGE_MAP(CMyEdit, CEdit)
   ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()



// CMyEdit message handlers


// <Snippet73>
// In this example, tool tips were set up to
// pop up when the user moves the mouse
// over this edit control.
// If the mouse is moved to the upper left-hand
// corner, the tool tip would disappear because of
// calling CancelToolTips.
void CMyEdit::OnMouseMove(UINT nFlags, CPoint point) 
{
   CRect corner(0, 0, 10, 10);
   if (corner.PtInRect(point))
      CancelToolTips();
   CEdit::OnMouseMove(nFlags, point);
}
// </Snippet73>

// <Snippet75>
// Sets 3 check buttons in various ways.  Note BST_INDETERMINATE
// requires BS_3STATE or BS_AUTO3STATE in the button's style.
void CMyDlg::OnMarkButtons() 
{
   CheckDlgButton(IDC_CHECK1, BST_UNCHECKED);   // 0
   CheckDlgButton(IDC_CHECK2, BST_CHECKED);   // 1
   CheckDlgButton(IDC_CHECK3, BST_INDETERMINATE);   // 2
}
// </Snippet75>

// <Snippet76>
// Of the 4 radio buttons, selects radio button 3.
void CMyDlg::OnMarkRadio() 
{
   CheckRadioButton(IDC_RADIO1, IDC_RADIO4, IDC_RADIO3);   
}
// </Snippet76>

// <Snippet77>
void CMyDlg::OnFindCenterChild() 
{
   CRect rect;
   GetClientRect(&rect);
   CWnd* pWnd = ChildWindowFromPoint(
      CPoint(rect.Width()/2, rect.Height()/2), 
      // Top left is always 0, 0.
      CWP_SKIPINVISIBLE);
   TRACE(_T("Center window is 0x%08x\n"), pWnd->m_hWnd);
}
// </Snippet77>

// <Snippet78>
// resize dialog to client's size
void CMyDlg::OnSizeToClient()
{
   CRect myRect;
   GetClientRect(&myRect);

   ClientToScreen(myRect);
   MoveWindow(myRect.left, myRect.top,
      myRect.Width(), myRect.Height());
}
// </Snippet78>

// <Snippet79>
// Dynamically create static control using CWnd::Create,
// instead of with CStatic::Create, which doesn't
// need the "STATIC" class name.
void CMyDlg::OnCreateStatic() 
{
   // m_pWndStatic is a CWnd* member of CMyDlg
   m_pWndStatic = new CWnd;
   m_pWndStatic->Create(_T("STATIC"), _T("Hi"), WS_CHILD | WS_VISIBLE,
       CRect(0, 0, 20, 20), this, 1234);
}
// </Snippet79>

// <Snippet80>
// Changes the caret of the edit control in this dialog box
void CMyDlg::OnChangeCaret() 
{
   m_pBitmapCaret = new CBitmap;
   m_pBitmapCaret->LoadBitmap(IDB_HAPPY_BITMAP);
   m_MyEdit.CreateCaret(m_pBitmapCaret);
   m_MyEdit.ShowCaret();
}
// </Snippet80>

// <Snippet82>
void CMyDlg::OnCreateExtendedControl() 
{
   // m_pWndStaticEx is a CWnd* member of CMyDlg
   m_pWndStaticEx = new CStatic;
   m_pWndStaticEx->CreateEx(WS_EX_CLIENTEDGE, // Make a client edge label.
      _T("STATIC"), _T("Hi"),
      WS_CHILD | WS_TABSTOP | WS_VISIBLE,
      5, 5, 30, 30, m_hWnd, (HMENU)2345);
}
// </Snippet82>

// <Snippet83>
// Create a 5x10 gray caret in the edit control.
void CMyDlg::OnCreateGrayCaret()
{
   m_MyEdit.CreateGrayCaret(5, 10);
   m_MyEdit.ShowCaret();
}
// </Snippet83>

// <Snippet84>
// Create a 5x10 solid caret in the edit control.
void CMyDlg::OnCreateSolidCaret()
{
   m_MyEdit.CreateSolidCaret(5, 10);
   m_MyEdit.ShowCaret();
}
// </Snippet84>

// <Snippet85>
// This sample shows how to avoid any button handling in base class,
// if any, and call the default window procedure directly.
void CMyDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   CWnd::Default();
}
// </Snippet85>

BOOL CMyDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CWnd* pDialog = this;

   {
// <Snippet88>
   // If pDialog points to a CDialog object with a list box
   // with the identifier IDC_DIRLIST, this call will populate
   // the box with only the non-hidden subdirectories in the root
   // directory of the C:\ drive.
   TCHAR path[MAX_PATH];
   _tcscpy_s(path, MAX_PATH, _T("C:\\"));

   pDialog->DlgDirList(path, IDC_DIRLIST, 0, DDL_EXCLUSIVE | DDL_DIRECTORY);
// </Snippet88>
   }

   {
// <Snippet89>
   // If pDialog points to a CDialog object with a combo box
   // with the identifier IDC_DIRCOMBO, this call will populate
   // the box with only the non-hidden subdirectories in the root
   // directory of the C:\ drive. 

   TCHAR szPath[MAX_PATH];
   _tcsncpy_s(szPath, MAX_PATH, _T("C:\\"), MAX_PATH);
   pDialog->DlgDirListComboBox(szPath, IDC_DIRCOMBO, 0, DDL_EXCLUSIVE | 
      DDL_DIRECTORY);

   // Note that the first argument is a string and not a string 
   // literal. This is necessary because DlgDirListComboBox 
   // modifies the supplied string. Passing a string literal 
   // will result in an access violation.   
// </Snippet89>
   }

   {
// <Snippet96>
   // The following code fragment is taken from CMyDlg::OnInitDialog
   // CMyDlg is a CDialog-derived class.

   // IDC_MSACALCTRL1 is the ID of the Calendar control OCX embedded 
   // on this dialog
   CWnd *pWndCal = GetDlgItem(IDC_MSACALCTRL1);

   // Use the IUnknown of the control
   LPUNKNOWN pUnk = pWndCal->GetControlUnknown();

   // From there get the IDispatch interface of control
   LPDISPATCH pDisp = NULL;
   pUnk->QueryInterface(IID_IDispatch, (LPVOID*)&pDisp);

   // use IDispatch method to invoke the control's functionality
// </Snippet96>
   }

   EnableToolTips(TRUE);

   m_hIcon = ::LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_HELLO));

// <Snippet99>
   // The following code fragment is taken from CMyDlg::OnInitDialog
   // CMyDlg is derived from CDialog

   // Add "About..." menu item to system menu.

   // IDM_ABOUTBOX must be in the system command range.
   ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
   ASSERT(IDM_ABOUTBOX < 0xF000);

   CMenu* pSysMenu = GetSystemMenu(FALSE);
   if (pSysMenu != NULL)
   {
      CString strAboutMenu;
      strAboutMenu.LoadString(IDS_ABOUT);
      if (!strAboutMenu.IsEmpty())
      {
         pSysMenu->AppendMenu(MF_SEPARATOR);
         pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
      }
   }

   // Set the icon for this dialog. The framework does this automatically
   // when the application's main window is not a dialog
   SetIcon(m_hIcon, TRUE);   // Set big icon
   SetIcon(m_hIcon, FALSE);  // Set small icon
// </Snippet99>

   m_RedBrush.CreateSolidBrush(RGB(0xff, 0, 0));
   m_BlueBrush.CreateSolidBrush(RGB(0, 0, 0xff));

// <Snippet97>
   // uses GetDlgItem to return a pointer to a user interface control
   CEdit* pBoxOne;
   pBoxOne = (CEdit*)GetDlgItem(IDC_MYEDIT);
   GotoDlgCtrl(pBoxOne);
// </Snippet97>

   {
// <Snippet114>
   // The following code fragment is from CMyDlg::OnInitDialog
   // CMyDlg is derived from CDialog.

   // change font of child controls of a dialog
   LOGFONT lf = {0};  
   // redraw of child controls not needed in OnInitDialog 
   // since controls aren't drawn yet.
   short int fRedraw = FALSE; 

   lf.lfHeight = 15;                 // Request a 15-pixel-high font

   // with face name "Arial".
   wcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"));   

   m_font.CreateFontIndirect(&lf);   // Create the font. 

   SendMessageToDescendants(WM_SETFONT,
      (WPARAM)m_font.m_hObject,  //handle to font
      MAKELONG ((WORD) fRedraw, 0), 
      FALSE);  // send to all descendants(TRUE) or 
               // just children of *this (FALSE)
// </Snippet114>
   }

   {
// <Snippet116>
   // The following code fragment is from CMyDlg::OnInitDialog
   // CMyDlg is derived from CDialog.

   // Initialize dialog controls
   SetDlgItemText(IDC_EDITNAME, _T("Type in text")); 
   SetDlgItemInt(IDC_EDITNUM, 100);
// </Snippet116>
   }

   {
// <Snippet119>
   // The following code fragment is from CMyDlg::OnInitDialog
   // CMyDlg is derived from CDialog.

   // Associate a help context id with the control.
   // IDC_TESTHELP_CONTROL is the id of the control
   // and HIDC_TESTHELP_CONTROL is its help context
   // id associated with the control.
   CWnd* pWnd = GetDlgItem(IDC_TESTHELP_CONTROL);
   pWnd->SetWindowContextHelpId(HIDC_TESTHELP_CONTROL);
// </Snippet119>
   }

// <Snippet122>
   // The following code fragment is from CMyDlg::OnInitDialog
   // CMyDlg is derived from CDialog.

   // IDC_BUTTON1 is the ID for a button on the 
   // dialog template used for CMyDlg.
   m_MyButton.SubclassDlgItem(IDC_BUTTON1, this);   
// </Snippet122>

   return FALSE;  // return TRUE unless you set the focus to a control
}

BOOL CMyDlg::OnToolTipNotify(UINT id, NMHDR* pNMHDR, LRESULT* pResult)
{
   UNREFERENCED_PARAMETER(id);
   UNREFERENCED_PARAMETER(pResult);

    TOOLTIPTEXT *pTTT = (TOOLTIPTEXT *)pNMHDR;
    UINT_PTR nID = pNMHDR->idFrom;
    if (pTTT->uFlags & TTF_IDISHWND)
    {
        // idFrom is actually the HWND of the tool
        nID = ::GetDlgCtrlID((HWND)nID);
        if(IDC_MYEDIT == nID)
        {
            pTTT->lpszText = _T("This is my edit.");
            return(TRUE);
        }
    }
    return(FALSE);
}

// <Snippet102>
//change the background color of an edit control on the dialog
HBRUSH CMyDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
   HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

   if (pWnd->GetDlgCtrlID() == IDC_MYEDIT)
   {
      if (pWnd->IsWindowEnabled())
      {
         // Red brush for the background...
         pDC->SetBkColor(RGB(255, 0, 0));
         // m_pRedBrush is the CBrush object initialized with a red brush 
         // using CreateSolidBrush
         return(HBRUSH)m_RedBrush.GetSafeHandle();
      }
      else
      {
         // Blue brush for the background...
         pDC->SetBkColor(RGB(0, 0, 255));
         // m_pBlueBrush is the CBrush object initialized with a blue 
         // brush using CreateSolidBrush
         return (HBRUSH)m_BlueBrush.GetSafeHandle();
      }
   }

   return hbr;
}
// </Snippet102>

void CMyDlg::OnBnClickedButton10()
{
   static bool bEnabled = TRUE;
   bEnabled = !bEnabled;
   m_MyEdit.EnableWindow(bEnabled);
}

// <Snippet113>
void CMyDlg::SetSpinRange()
{
   //set the min and max range of the up/down or spin control
   SendDlgItemMessage(IDC_SPIN1, UDM_SETRANGE, 0, (LPARAM) MAKELONG (8, 1));
}
// </Snippet113>

void CMyDlg::OnBnClickedButton12()
{
// <Snippet117>
   // Updating a control or window with large amounts of data may cause 
   // flicker. In such cases it may be better to turn off drawing

   //m_list is a member of type CListCtrl
   m_List.SetRedraw(FALSE);  // turn drawing off regardless of list mode

   //
   // Update control
   //

   m_List.SetRedraw(TRUE);  // turn drawing back on and update the window

   // invalidate the entire control, force painting
   m_List.Invalidate();
   m_List.UpdateWindow();
// </Snippet117>
}

void CMyDlg::OnSetName()
{
// <Snippet121>
   // set the text in IDC_EDITNAME
   CWnd* pWnd = GetDlgItem(IDC_EDITNAME);
   pWnd->SetWindowText(_T("Gerald Samper"));

   // Get the text back. CString is convenient, because MFC
   // will automatically allocate enough memory to hold the
   // text--no matter how large it is.

   CString str;
   pWnd->GetWindowText(str);
   ASSERT(str == _T("Gerald Samper"));

   // The LPTSTR override works, too, but it might be too short.
   // If we supply a buffer that's too small, we'll only get those
   // characters that fit.

   TCHAR sz[10];
   int nRet = pWnd->GetWindowText(sz, 10);

   // Nine characters, plus terminating null
   ASSERT(_tcscmp(sz, _T("Gerald Sa")) == 0);
   ASSERT(nRet == 9);

   // You can query the length of the text without the length of
   // the string using CWnd::GetWindowTextLength()
   nRet = pWnd->GetWindowTextLength();
   ASSERT(nRet == 13);
// </Snippet121>
}


// CSuperComboBox

IMPLEMENT_DYNAMIC(CSuperComboBox, CComboBox)

CSuperComboBox::CSuperComboBox()
{

}

CSuperComboBox::~CSuperComboBox()
{
}


BEGIN_MESSAGE_MAP(CSuperComboBox, CComboBox)
   ON_WM_CTLCOLOR()
   ON_WM_DESTROY()
END_MESSAGE_MAP()



// CSuperComboBox message handlers

// <Snippet123>
// The following code shows how to subclass the edit control and list box
// controls inside a combo box. It uses WM_CTLCOLOR for subclassing.
// CSuperComboBox represents the combo box
HBRUSH CSuperComboBox::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
   if (nCtlColor == CTLCOLOR_EDIT)
   {
      //Edit control
      if (m_edit.GetSafeHwnd() == NULL)
         m_edit.SubclassWindow(pWnd->GetSafeHwnd());
   }
   else if (nCtlColor == CTLCOLOR_LISTBOX)
   {
      //ListBox control
      if (m_listbox.GetSafeHwnd() == NULL)
         m_listbox.SubclassWindow(pWnd->GetSafeHwnd());
   }

   HBRUSH hbr = CComboBox::OnCtlColor(pDC, pWnd, nCtlColor);
   return hbr;
}

void CSuperComboBox::OnDestroy()
{
   //unsubclass edit and list box before destruction
   if (m_edit.GetSafeHwnd() != NULL)
      m_edit.UnsubclassWindow();
   if (m_listbox.GetSafeHwnd() != NULL)
      m_listbox.UnsubclassWindow();
   CComboBox::OnDestroy();
}
// </Snippet123>