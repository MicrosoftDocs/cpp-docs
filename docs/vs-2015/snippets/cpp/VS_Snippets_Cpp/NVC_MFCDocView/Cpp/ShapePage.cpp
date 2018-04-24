// ShapePage.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "ShapePage.h"
#include "SheetDoc.h"


// CShapePage dialog

IMPLEMENT_DYNAMIC(CShapePage, CPropertyPage)

CShapePage::CShapePage()
	: CMyPropertyPage(CShapePage::IDD)
   , m_Selection(IDC_RECTANGLE)
{

}

CShapePage::~CShapePage()
{
}

void CShapePage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CShapePage, CPropertyPage)
   ON_BN_CLICKED(IDC_RECTANGLE, &CShapePage::OnBnClickedRectangle)
   ON_BN_CLICKED(IDC_ROUND_RECTANGLE, &CShapePage::OnBnClickedRoundRectangle)
   ON_BN_CLICKED(IDC_ELLIPSE, &CShapePage::OnBnClickedEllipse)
END_MESSAGE_MAP()


// CShapePage message handlers

// <Snippet122>
// An example of implementing the GetPageSelections() for CShapePage.
// CShapePage is a CMyPropertyPage-derived class, which in turn is a 
// CPropertyPage-derived class.
void CShapePage::GetPageSelections(CString &str)
{
   CString shapename;
   switch (m_Selection)
   {
   case IDC_RECTANGLE:
      shapename = _T("Rectangle");
      break;

   case IDC_ROUND_RECTANGLE:
      shapename = _T("Round Rectangle");
      break;

   case IDC_ELLIPSE:
      shapename = _T("Ellipse");
      break;
   }

   str.Format(_T("Shape to be created is %s"), shapename);
}
// </Snippet122>
BOOL CShapePage::OnInitDialog()
{
   CPropertyPage::OnInitDialog();

   CButton* pButt = (CButton*)GetDlgItem(m_Selection);
   pButt->SetCheck(TRUE);

   return TRUE;  // return TRUE unless you set the focus to a control
}

void CShapePage::OnBnClickedRectangle()
{
   m_Selection = IDC_RECTANGLE;
}

void CShapePage::OnBnClickedRoundRectangle()
{
   m_Selection = IDC_ROUND_RECTANGLE;
}

void CShapePage::OnBnClickedEllipse()
{
   m_Selection = IDC_ELLIPSE;
}

// <Snippet138>
// CShapePage is the last wizard property page. Enable the Back 
// button and change the Next button to Finish. The "Finish" button 
// will have "Done" as its caption.
BOOL CShapePage::OnSetActive() 
{
   CPropertySheet* psheet = (CPropertySheet*) GetParent();   
   psheet->SetWizardButtons(PSWIZB_BACK | PSWIZB_FINISH);
   psheet->SetFinishText(_T("Done"));

   return CPropertyPage::OnSetActive();
}
// </Snippet138>

// <Snippet119>
// Inform users regarding the selections they have made by 
// navigating the pages in propertysheet.
BOOL CShapePage::OnWizardFinish()
{
   CString report = _T("You have selected the following options:\n");

   // Get the number of property pages from CPropertySheet.
   CPropertySheet* sheet = (CPropertySheet*) GetParent();
   int count = sheet->GetPageCount();   

   // Get the formatted string from each page. This formatted string 
   // will be shown in a message box. Each page knows about the 
   // string to be displayed. For simplicity, we derive a class 
   // from CPropertyPage called CMyPropertyPage. CMyPropertyPage 
   // has a pure virtual member function called GetPageSelections().
   // All pages in the property sheet must be derived from 
   // CMyPropertyPage so we loop through each page to get the 
   // formatted string by calling the GetPageSelections() function.
   for (int i = 0; i < count; i++)
   {
      CMyPropertyPage* page = (CMyPropertyPage*) sheet->GetPage(i);

      CString str;
      page->GetPageSelections(str);
      report += _T("\n") + str;
   }

   AfxMessageBox(report);
   
   return CPropertyPage::OnWizardFinish();
}
// </Snippet119>

void CShapePage::OnOK()
{
   CMDIFrameWnd* pframe = (CMDIFrameWnd*) AfxGetMainWnd();
   CMDIChildWnd* pchild = pframe->MDIGetActive();
   CPSheetDoc* pdoc = (CPSheetDoc*) pchild->GetActiveDocument();
   pdoc->m_ShapeSelection = m_Selection;

   // Tell the view to paint with the new selected color.
   CView* view = pchild->GetActiveView();
   view->Invalidate();

   CMyPropertyPage::OnOK();
}
