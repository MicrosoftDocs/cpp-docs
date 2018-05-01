// ColorPage.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "ColorPage.h"
#include "SheetDoc.h"


// CColorPage dialog

IMPLEMENT_DYNAMIC(CColorPage, CPropertyPage)

CColorPage::CColorPage()
	: CMyPropertyPage(CColorPage::IDD)
   , m_InitialColor(RGB(0, 0xff, 0))
   , m_iBlue(0)
   , m_iGreen(0)
   , m_iRed(0)
   , m_radioColor(0)
   , m_Color(0)
{

}

CColorPage::~CColorPage()
{
}

void CColorPage::DoDataExchange(CDataExchange* pDX)
{
   CPropertyPage::DoDataExchange(pDX);

   if (!pDX->m_bSaveAndValidate)
   {
      m_iBlue = GetBValue(m_Color);
      m_iRed = GetRValue(m_Color);
      m_iGreen = GetGValue(m_Color);
   }

   DDX_Slider(pDX, IDC_BLUESLIDER, m_iBlue);
   DDV_MinMaxInt(pDX, m_iBlue, 0, 255);
   DDX_Slider(pDX, IDC_GREENSLIDER, m_iGreen);
   DDV_MinMaxInt(pDX, m_iGreen, 0, 255);
   DDX_Slider(pDX, IDC_REDSLIDER, m_iRed);
   DDV_MinMaxInt(pDX, m_iRed, 0, 255);

   if (pDX->m_bSaveAndValidate)
   {
      m_Color = RGB(m_iRed, m_iGreen, m_iBlue);
   }
   
   DDX_Radio(pDX, IDC_RADIOBLACK, m_radioColor);
	DDV_MinMaxInt(pDX, m_radioColor, 0, 3);
}


BEGIN_MESSAGE_MAP(CColorPage, CPropertyPage)
   ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIOBLACK, IDC_RADIOGREEN, 
      CColorPage::OnColorClicked)
// <Snippet125>
   // This is an example of trapping the PSM_QUERYSIBLINGS in one of
   // the pages. CColorPage is a CPropertyPage-derived class.  Upon 
   // receiving this message, wParam contains the value passed to 
   // QuerySiblings() call. CColorPage will check this value and return
   // FALSE only if the value is greater than 1.
   ON_MESSAGE(PSM_QUERYSIBLINGS, &CColorPage::OnQuerySiblings)
// </Snippet125>
END_MESSAGE_MAP()


// CColorPage message handlers

// <Snippet114>
// Discard any selection the user made to this page.  The object
// in the view will be painted with the initial color when the
// CPropertySheet dialog is first shown. CColorPage is a 
// CPropertyPage-derived class.
void CColorPage::OnCancel() 
{
   // Reset the color saved in the document class.  m_InitialColor
   // is a member variable of CColorPage and it is the color shown 
   // in the view before CPropertySheet is shown.
   // doc->m_Color is the color saved in the document class, and 
   // this is the color to be used by the view class.
   CMDIFrameWnd* pFrame = (CMDIFrameWnd*) AfxGetMainWnd();
   CMDIChildWnd* pChild = pFrame->MDIGetActive();
   CPSheetDoc* doc = (CPSheetDoc*) pChild->GetActiveDocument();
   doc->m_Color = m_InitialColor;

   // Tell the view to paint with the initial color.
   CView* view = pChild->GetActiveView();
   view->Invalidate();

   CPropertyPage::OnCancel();
}

// The default MFC implementation of OnReset() would call OnCancel().
void CColorPage::OnReset() 
{
   CPropertyPage::OnReset();
}
// </Snippet114>

// <Snippet116>
// Accept the new color selection and dismiss the CPropertySheet
// dialog. The view's object will be painted with the new selected
// color. CColorPage is a CPropertyPage-derived class.
void CColorPage::OnOK() 
{
   // Store the new selected color to a member variable of 
   // document class.  m_Color is a member varible of CColorPage 
   // and it stores the new selected color.  doc->m_Color is 
   // the color saved in the document class and it is the color 
   // used by the view class.
   CMDIFrameWnd* pframe = (CMDIFrameWnd*) AfxGetMainWnd();
   CMDIChildWnd* pchild = pframe->MDIGetActive();
   CPSheetDoc* doc = (CPSheetDoc*) pchild->GetActiveDocument();
   doc->m_Color = m_Color;

   // Tell the view to paint with the new selected color.
   CView* view = pchild->GetActiveView();
   view->Invalidate();
  
   CPropertyPage::OnOK();
}

// The default MFC implementation of OnApply() would call OnOK().
BOOL CColorPage::OnApply() 
{
   return CPropertyPage::OnApply();
}
// </Snippet116>

// <Snippet117>
// Query the user whether to abort the changes if the new selected
// color (m_Color) is different from the initial color 
// (m_InitialColor) when the CPropertySheet dialog is first shown.
// CColorPage is a CPropertyPage-derived class.
BOOL CColorPage::OnQueryCancel() 
{
   if (m_InitialColor != m_Color)
   {
      if (AfxMessageBox(_T("Abort the changes?"), MB_YESNO) == IDNO)
         return FALSE;  
   }

   return CPropertyPage::OnQueryCancel();
}
// </Snippet117>

// <Snippet127>
// OnColorClicked() is a member function of CColorPage (a
// CPropertyPage-derived class). It is called whenever a radio button
// is selected on the page. Call SetModified() to enable the Apply 
// button whenever a new selection is made. m_Color is a member
// variable of CColorPage and it is to store the selected RGB color.
// Its entry in the message map looks like this:
// ON_CONTROL_RANGE(BN_CLICKED, IDC_BLACK, IDC_GREEN, CColorPage::OnColorClicked)
void CColorPage::OnColorClicked(UINT nCmdID)
{
   COLORREF color = m_Color;
   switch (nCmdID)
   {
   case IDC_RADIOBLACK:
      color = RGB(0, 0, 0);
      m_radioColor = crBlack;
      break;

   case IDC_RADIORED:
      color = RGB(255, 0, 0);
      m_radioColor = crRed;
      break;

   case IDC_RADIOGREEN:
      color = RGB(0, 255, 0);
      m_radioColor = crGreen;
      break;

   case IDC_RADIOBLUE:
      color = RGB(0, 0, 255);
      m_radioColor = crBlue;
      break;
   }

   if (color != m_Color)
   {
      m_Color = color;
      SetModified();    // Enable Apply Now button.
   }

   UpdateData(FALSE);
}
// </Snippet127>

// <Snippet118>
// The Back button is selected from the propertysheet.  Get the selected 
// radio button of the page by looping through all buttons on the 
// pages.  m_radioColor is a member variable of 
// CColorPage (a CPropertyPage-derived class).  Its initial value 
// is initialized in OnInitDialog().
LRESULT CColorPage::OnWizardBack() 
{
   for (int id = IDC_RADIOBLACK; id <= IDC_RADIOGREEN; id++) 
   {
      CButton* button = (CButton*) GetDlgItem(id);
      if (button->GetCheck() == 1)
      {
         m_radioColor = id - IDC_RADIOBLACK;
         break;
      }
   }

   return CPropertyPage::OnWizardBack();
}
// </Snippet118>

// <Snippet121>
// An example of implementing the GetPageSelections() for CColorPage.
// CColorPage is a CMyPropertyPage-derived class, which in turn is a 
// CPropertyPage-derived class.
void CColorPage::GetPageSelections(CString &str)
{
   str = _T("Color selected is ");   
   switch (m_Color)
   {
   case RGB(0, 0, 0):
      str += _T("Black");
      break;

   case RGB(255, 0, 0):
      str += _T("Red");
      break;

   case RGB(0, 255, 0):
      str += _T("Green");
      break;

   case RGB(0, 0, 255):
      str += _T("Blue");
      break;

   default:
      str += _T("Custom");
      break;
   }
}
// </Snippet121>

// <Snippet126>
LRESULT CColorPage::OnQuerySiblings(WPARAM wParam, LPARAM lParam)
{
   UNREFERENCED_PARAMETER(lParam);
   return (wParam <= 0);
}
// </Snippet126>

// <Snippet141>
// CColorPage is the second wizard property page. Enable both the 
// Back button and the Next button.
BOOL CColorPage::OnSetActive() 
{
   CPropertySheet* psheet = (CPropertySheet*) GetParent();   
   psheet->SetWizardButtons(PSWIZB_BACK | PSWIZB_NEXT);

   return CPropertyPage::OnSetActive();
}
// </Snippet141>

BOOL CColorPage::OnInitDialog()
{
   CMyPropertyPage::OnInitDialog();

   CSliderCtrl* psc;
   psc = (CSliderCtrl*)GetDlgItem(IDC_REDSLIDER);
   psc->SetRange(0, 0xff);
   psc = (CSliderCtrl*)GetDlgItem(IDC_BLUESLIDER);
   psc->SetRange(0, 0xff);
   psc = (CSliderCtrl*)GetDlgItem(IDC_GREENSLIDER);
   psc->SetRange(0, 0xff);

   return TRUE;  // return TRUE unless you set the focus to a control
}
