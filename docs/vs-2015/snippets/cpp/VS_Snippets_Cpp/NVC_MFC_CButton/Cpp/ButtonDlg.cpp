// ButtonDlg.cpp : implementation file
//
// Topic                                                          Snippet
// CButton::CButton													         1
// CButton::Create													         2
// CButton::DrawItem												            3
// CButton::GetBitmap												         4
// CButton::GetButtonStyle											         5
// CButton::GetCheck												            6
// CButton::GetCursor												         7
// CButton::GetIcon													         8
// CButton::GetState												            9
// CButton::SetBitmap												         4
// CButton::SetButtonStyle											         5
// CButton::SetCheck												            6
// CButton::SetCursor												         7
// CButton::SetIcon													         8
// CButton::SetState												            9

#include "stdafx.h"
#include "NVC_MFC_CButton.h"
#include "ButtonDlg.h"


// <Snippet3>
// NOTE: CMyButton is a class derived from CButton. The CMyButton
// object was created as follows:
//
// CMyButton myButton;
// myButton.Create(_T("My button"), 
//      WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON|BS_OWNERDRAW, 
//      CRect(10,10,100,30), pParentWnd, 1);
//

// This example implements the DrawItem method for a CButton-derived 
// class that draws the button's text using the color red.
void CMyButton::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
   UINT uStyle = DFCS_BUTTONPUSH;

   // This code only works with buttons.
   ASSERT(lpDrawItemStruct->CtlType == ODT_BUTTON);

   // If drawing selected, add the pushed style to DrawFrameControl.
   if (lpDrawItemStruct->itemState & ODS_SELECTED)
      uStyle |= DFCS_PUSHED;

   // Draw the button frame.
   ::DrawFrameControl(lpDrawItemStruct->hDC, &lpDrawItemStruct->rcItem, 
      DFC_BUTTON, uStyle);

   // Get the button's text.
   CString strText;
   GetWindowText(strText);

   // Draw the button text using the text color red.
   COLORREF crOldColor = ::SetTextColor(lpDrawItemStruct->hDC, RGB(255,0,0));
   ::DrawText(lpDrawItemStruct->hDC, strText, strText.GetLength(), 
      &lpDrawItemStruct->rcItem, DT_SINGLELINE|DT_VCENTER|DT_CENTER);
   ::SetTextColor(lpDrawItemStruct->hDC, crOldColor);
}
// </Snippet3>


// CButtonDlg dialog

IMPLEMENT_DYNAMIC(CButtonDlg, CDialog)

CButtonDlg::CButtonDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CButtonDlg::IDD, pParent)
{

}

CButtonDlg::~CButtonDlg()
{
}

void CButtonDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CButtonDlg, CDialog)
END_MESSAGE_MAP()


// CButtonDlg message handlers

BOOL CButtonDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CWnd* pParentWnd = this;

// <Snippet1>
   // Declare a button object.
   CButton myButton;
// </Snippet1>

// <Snippet2>
   CButton myButton1, myButton2, myButton3, myButton4;

   // Create a push button.
   myButton1.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON, 
      CRect(10,10,100,30), pParentWnd, 1);

   // Create a radio button.
   myButton2.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_RADIOBUTTON, 
      CRect(10,40,100,70), pParentWnd, 2);

   // Create an auto 3-state button.
   myButton3.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_AUTO3STATE, 
      CRect(10,70,100,100), pParentWnd, 3);

   // Create an auto check box.
   myButton4.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_AUTOCHECKBOX, 
      CRect(10,100,100,130), pParentWnd, 4);
// </Snippet2>

   m_mybutton.Create(_T("My button"), 
      WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON|BS_OWNERDRAW, 
      CRect(10,10,100,30), pParentWnd, 1);

// <Snippet4>
   CButton myBitmapButton;

   // Create a bitmap button.
   myBitmapButton.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_BITMAP, 
      CRect(10,10,60,50), pParentWnd, 1);

   // If no bitmap is defined for the button, define the bitmap to the
   // system close bitmap.
   if (myBitmapButton.GetBitmap() == NULL)
      myBitmapButton.SetBitmap(::LoadBitmap(NULL, MAKEINTRESOURCE(OBM_CLOSE)));
// </Snippet4>

// <Snippet5>
   CButton myRadioButton;

   // Create a radio button.
   myRadioButton.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_RADIOBUTTON, 
      CRect(10,10,100,30), pParentWnd, 1);

   // Change the button style to use one of the "auto" styles; for
   // push button, change to def push button.
   UINT uStyle = myRadioButton.GetButtonStyle();
   if (uStyle == BS_PUSHBUTTON)
      uStyle = BS_DEFPUSHBUTTON;
   else if (uStyle == BS_RADIOBUTTON)
      uStyle = BS_AUTORADIOBUTTON;
   else if (uStyle == BS_CHECKBOX)
      uStyle = BS_AUTOCHECKBOX;
   else if (uStyle == BS_3STATE)
      uStyle = BS_AUTO3STATE;

   // Change the button style to the one wanted.
   myRadioButton.SetButtonStyle(uStyle);
// </Snippet5>

// <Snippet6>
   CButton myA3Button;

   // Create an auto 3-state button.
   myA3Button.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_AUTO3STATE, 
      CRect(10,10,100,30), pParentWnd, 1);

   // Set the check state to the next state 
   // (i.e. BST_UNCHECKED changes to BST_CHECKED
   // BST_CHECKED changes to BST_INDETERMINATE
   // BST_INDETERMINATE changes to BST_UNCHECKED).
   myA3Button.SetCheck(((myA3Button.GetCheck() + 1 ) % 3));
// </Snippet6>

// <Snippet7>
   CButton myIconButton;

   // Create an icon button.
   myIconButton.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_ICON, 
      CRect(10,10,60,50), pParentWnd, 1);

   // If no image is defined for the button, define the image to the
   // system arrow and question mark cursor.
   if (myIconButton.GetCursor() == NULL)
      myIconButton.SetCursor(::LoadCursor(NULL, IDC_HELP));
// </Snippet7>

// <Snippet8>
   CButton myIconButton2;

   // Create an icon button.
   myIconButton2.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_ICON, 
      CRect(10,10,60,50), pParentWnd, 1);

   // If no icon is defined for the button, define the icon to the
   // system error icon.
   if (myIconButton2.GetIcon() == NULL)
      myIconButton2.SetIcon(::LoadIcon(NULL, IDI_ERROR));
// </Snippet8>

// <Snippet9>
   CButton myPushButton;

   // Create a push button.
   myPushButton.Create(_T("My button"), WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON, 
      CRect(10,10,100,30), pParentWnd, 1);

   // Invert the highlight state of the button.
   myPushButton.SetState(!(myPushButton.GetState() & 0x0004));
// </Snippet9>

   return TRUE;  // return TRUE unless you set the focus to a control
}
