// TabDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CTabCtrl.h"
#include "TabDlg.h"


// CTabDlg dialog

IMPLEMENT_DYNAMIC(CTabDlg, CDialog)

CTabDlg::CTabDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTabDlg::IDD, pParent)
{

}

CTabDlg::~CTabDlg()
{
}

void CTabDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTabDlg, CDialog)
   ON_WM_SIZE()
   ON_BN_CLICKED(IDC_BUTTON1, &CTabDlg::OnDeleteItem)
   ON_BN_CLICKED(IDC_BUTTON2, &CTabDlg::OnChangeItem)
   ON_BN_CLICKED(IDC_BUTTON3, &CTabDlg::OnChangeSize)
END_MESSAGE_MAP()


// CTabDlg message handlers

// <Snippet1>
void CTabDlg::OnSize(UINT nType, int cx, int cy)
{
   CDialog::OnSize(nType, cx, cy);

   if(m_TabCtrl.m_hWnd == NULL)
      return;      // Return if window is not created yet.
   
   RECT rect;

   // Get size of dialog window.
   GetClientRect(&rect);
   
   // Adjust the rectangle to fit the tab control into the 
   // dialog's client rectangle.
   m_TabCtrl.AdjustRect(FALSE, &rect);

   // Move the tab control to the new position and size.
   m_TabCtrl.MoveWindow(&rect, TRUE);   
}
// </Snippet1>

BOOL CTabDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CRect rect(10, 10, 100, 100);

// <Snippet2>
   // Assuming you have a member variable m_TabCtrl, that is a CTabCtrl
   // object, you can use the following to create a tab control.

   m_TabCtrl.Create(TCS_TABS | TCS_FIXEDWIDTH | WS_CHILD | WS_VISIBLE,
      rect, this, IDC_MYTAB);

   // This creates a tab control with the given styles, and with
   // an ID of IDC_MYTAB.
// </Snippet2>

// <Snippet5>
   TCITEM tcItem;
   tcItem.mask = TCIF_TEXT;
   tcItem.pszText = _T("Tab #1");

   m_TabCtrl.InsertItem(0, &tcItem);
// </Snippet5>

   return TRUE;  // return TRUE unless you set the focus to a control
}

// <Snippet3>
// This example assumes that there is a CTabCtrl member of the
// CTabDlg class named m_TabCtrl.  On a button handler
// called OnDeleteItem of the dialog box the tab control will
// delete the 0 indexed item.

void CTabDlg::OnDeleteItem()
{
   // Delete the first item in the tab control.
   m_TabCtrl.DeleteItem(0);   
}
// </Snippet3>

// <Snippet4>
// In this example a CTabCtrl data member, m_TabCtrl, changes the
// text of the tabs in the tab control.  A call to GetItem is used
// to get the current text, and then the text is changed.  A call 
// to SetItem is used to update the tab with the new text.

void CTabDlg::OnChangeItem()
{
   TCITEM tcItem;
   CString pszString;

   //  Get text for the tab item.
   GetDlgItemText(IDC_ITEM_TEXT, pszString);
   
   //  Get the current tab item text.
   TCHAR buffer[256] = {0};
   tcItem.pszText = buffer;
   tcItem.cchTextMax = 256;
   tcItem.mask = TCIF_TEXT;
   m_TabCtrl.GetItem(0, &tcItem);
   TRACE(_T("Changing item text from %s to %s..."), tcItem.pszText, pszString);
   
   //  Set the new text for the item.
   tcItem.pszText = pszString.LockBuffer();

   //  Set the item in the tab control.
   m_TabCtrl.SetItem(0, &tcItem);

   pszString.UnlockBuffer();
}
// </Snippet4>

void CTabDlg::OnChangeSize()
{
   CRect rect;
   GetWindowRect(&rect);
   rect.DeflateRect(10, 10);
   MoveWindow(&rect);
}
