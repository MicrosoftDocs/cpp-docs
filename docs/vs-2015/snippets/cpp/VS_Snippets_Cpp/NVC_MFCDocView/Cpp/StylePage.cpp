// StylePage.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "StylePage.h"
#include "SheetDoc.h"


// CStylePage dialog

IMPLEMENT_DYNAMIC(CStylePage, CPropertyPage)

CStylePage::CStylePage()
	: CMyPropertyPage(CStylePage::IDD)
   , m_NumObjects(0)
{

}

CStylePage::~CStylePage()
{
}

void CStylePage::DoDataExchange(CDataExchange* pDX)
{
   CPropertyPage::DoDataExchange(pDX);
   DDX_Text(pDX, IDC_NUMOBJECTS, m_NumObjects);
}


BEGIN_MESSAGE_MAP(CStylePage, CPropertyPage)
END_MESSAGE_MAP()


// CStylePage message handlers

// <Snippet115>
// Validate the value entered to the "Number" edit control. Its
// value must be at least one. If not, tell the user and set the
// focus to the "Number" edit control. CStylePage is a 
// CPropertyPage-derived class.
BOOL CStylePage::OnKillActive() 
{
   int num = GetDlgItemInt(IDC_NUMOBJECTS);
   if (num <= 0)
   {
      AfxMessageBox(_T("Number of objects must be at least 1."));
      CEdit* edit = (CEdit*) GetDlgItem(IDC_NUMOBJECTS);
      edit->SetFocus();
      edit->SetSel(0, -1);
      return 0;
   }

   return CPropertyPage::OnKillActive();
}
// </Snippet115>

// <Snippet120>
// An example of implementing the GetPageSelections() for CStylePage.
// CStylePage is a CMyPropertyPage-derived class, which in turn is a 
// CPropertyPage-derived class.
void CStylePage::GetPageSelections(CString &str)
{
   str.Format(_T("Number of objects to be created = %d"), m_NumObjects);
}
// </Snippet120>

// <Snippet123>
// The Next button is selected from the propertysheet. Show the 
// second page of the propertysheet ONLY if a non-zero value is 
// entered to the Number edit control of the CStylePage. Otherwise
// display a message to the user and stay on the current page.

LRESULT CStylePage::OnWizardNext() 
{
   // Get the number from the edit control
   int num = GetDlgItemInt(IDC_NUMOBJECTS);

   if (num == 0)
   {
      // Display a message to the user
      AfxMessageBox(_T("Supply a non-zero number on the edit control"), MB_OK);

      // Stay on the current page
      return -1;
   }

   // CPropertyPage::OnWizardNext returns zero and causes
   // the property sheet to display the next page
   return CPropertyPage::OnWizardNext();
}
// </Snippet123>

// <Snippet124>
// Validate the value entered in the Number edit control. If its 
// value is not a natural number, request CPropertySheet (i.e. parent
// window of the page) to send a PSM_QUERYSIBLINGS message to each
// LOADED page (a page won't be loaded in memory until it is shown).
// If one of the pages returns a nonzero value in response to the 
// PSM_QUERYSIBLINGS message, then inform the user and change the OK
// to Close and disable the Cancel button. CStylePage is a 
// CPropertyPage-derived class.
BOOL CStylePage::OnApply()
{
   int num = GetDlgItemInt(IDC_NUMOBJECTS);
   if (num <= 0)
   {
      if (QuerySiblings(num, 0L))
      {
         AfxMessageBox(_T("Invalid data is entered.  Choose Close ")
            _T("button to close the dialog."));
         CancelToClose();
      }
   }

   return CPropertyPage::OnApply();
}
// </Snippet124>

// <Snippet140>
// CStylePage is the first wizard property page.  Disable the Back 
// button but enable the Next button.
BOOL CStylePage::OnSetActive() 
{
   CPropertySheet* psheet = (CPropertySheet*) GetParent();   
   psheet->SetWizardButtons(PSWIZB_NEXT);
   
   return CPropertyPage::OnSetActive();
}
// </Snippet140>

void CStylePage::OnOK()
{
   CMDIFrameWnd* pframe = (CMDIFrameWnd*) AfxGetMainWnd();
   CMDIChildWnd* pchild = pframe->MDIGetActive();
   CPSheetDoc* pdoc = (CPSheetDoc*) pchild->GetActiveDocument();
   pdoc->m_NumObjects = m_NumObjects;

   // Tell the view to paint with the new selected color.
   CView* view = pchild->GetActiveView();
   view->Invalidate();

   CMyPropertyPage::OnOK();
}
