// SheetView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "SheetView.h"
#include "SheetDoc.h"
#include "StylePage.h"
#include "ColorPage.h"
#include "ShapePage.h"


// CPSheetView

IMPLEMENT_DYNCREATE(CPSheetView, CView)

CPSheetView::CPSheetView()
   : m_pdlgPropertySheet(NULL)
   , m_pstylePage(NULL)
   , m_pcolorPage(NULL)
   , m_pshapePage(NULL)
{

}

// <Snippet133>
// The code fragment below shows how to destroy the C++ objects for
// propertysheet and propertypage in the destructor of CView-derived
// class.
// NOTE:  DestroyWindow() is called in CPropertySheet::OnClose() so
// you do not need to call it here.  Property pages are children
// of the CPropertySheet, they will be destroyed by their parents.
CPSheetView::~CPSheetView()
{
   delete m_pshapePage;
   delete m_pstylePage;
   delete m_pcolorPage;
   delete m_pdlgPropertySheet;
}
// </Snippet133>

BEGIN_MESSAGE_MAP(CPSheetView, CView)
   ON_COMMAND(ID_CPROPERTYPAGE_CONSTRUCT, &CPSheetView::OnCpropertypageConstruct)
   ON_COMMAND(ID_CPROPERTYPAGE_CTOR32860, &CPSheetView::OnCpropertypageCtor)
   ON_COMMAND(ID_CPROPERTYPAGE_DOWIZARD, &CPSheetView::OnCpropertypageDowizard)
   ON_COMMAND(ID_CPROPERTYSHEET_ADDPAGE, &CPSheetView::OnCpropertysheetAddpage)
   ON_COMMAND(ID_CPROPERTYSHEET_CONSTRUCT, &CPSheetView::OnCpropertysheetConstruct)
   ON_COMMAND(ID_CPROPERTYSHEET_CTOR, &CPSheetView::OnCpropertysheetCtor)
   ON_COMMAND(ID_CPROPERTYSHEET_CREATE, &CPSheetView::OnModelessPropertySheet)
   ON_COMMAND(ID_CPROPERTYSHEET_CREATEMYPS, &CPSheetView::OnCpropertysheetCreatemyps)
   ON_COMMAND(ID_CPROPERTYSHEET_SETTITLE, &CPSheetView::OnCpropertysheetSettitle)
   ON_COMMAND(ID_CPROPERTYSHEET_SETWIZARDMODE, &CPSheetView::OnCpropertysheetSetwizardmode)
   ON_COMMAND(ID_CPROPERTYSHEET_M, &CPSheetView::OnCpropertysheetM_psh)
   ON_COMMAND(ID_CPROPERTYSHEET_GETTABCONTROL, &CPSheetView::OnCpropertysheetGettabcontrol)
END_MESSAGE_MAP()


// CPSheetView drawing

void CPSheetView::OnDraw(CDC* pDC)
{
	CPSheetDoc* pDoc = (CPSheetDoc*)GetDocument();

   CBrush brushDocColor(pDoc->m_Color);
   CBrush* pbrushOld = pDC->SelectObject(&brushDocColor);

   CPen penBlack(PS_SOLID, 3, RGB(0, 0, 0));
   CPen* ppenOld = pDC->SelectObject(&penBlack);

   CRect crectBound;
   GetClientRect(crectBound);
   crectBound.DeflateRect(10, 10); // for a border of 5 on all sides
   int iWidth = crectBound.Width();
   iWidth = iWidth / pDoc->m_NumObjects;
   crectBound.right = crectBound.left + iWidth; // so we can fit m_NumObjects
   for (UINT i = 0; i < pDoc->m_NumObjects; i++)
   {
      switch (pDoc->m_ShapeSelection)
      {
      case IDC_RECTANGLE:
         pDC->Rectangle(crectBound);
         break;

      case IDC_ROUND_RECTANGLE:
         pDC->RoundRect(crectBound, CPoint(10, 10));
         break;

      case IDC_ELLIPSE:
         pDC->Ellipse(crectBound);
         break;

      default:
         AfxMessageBox(_T("Dude, you are so screwed."));
         break;
      }

      crectBound.left += iWidth;
      crectBound.right += iWidth;
   }

   pDC->SelectObject(pbrushOld);
   pDC->SelectObject(ppenOld);
}


// CPSheetView diagnostics

#ifdef _DEBUG
void CPSheetView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CPSheetView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CPSheetView message handlers

void CPSheetView::OnCpropertypageConstruct()
{
// <Snippet112>
   // Declare a CPropertySheet object.
   CPropertySheet sheet(_T("Simple PropertySheet"));

   // Create three CPropertyPage objects whose template IDs are specified
   // in rgID array, and add each page to the CPropertySheet object. 
   const int c_cPages = 3;
   CPropertyPage   pages[c_cPages];
   UINT rgID[c_cPages] = {IDD_STYLE, IDD_COLOR, IDD_SHAPE};
   for (int i = 0; i < c_cPages; i++)    
   {
      pages[i].Construct(rgID[i]);
      sheet.AddPage(&pages[i]);
   }

   // Display a modal CPropertySheet dialog.
   sheet.DoModal();
// </Snippet112>
}

void CPSheetView::OnCpropertypageCtor()
{
// <Snippet113>
   // Declare a CStylePage object, which is a CPropertyPage-derived class.
   CStylePage stylePage;

   // Declare a CPropertyPage object with IDD_SHAPE, the ID of the 
   // template used for this page. 
   CPropertyPage shapePage(IDD_SHAPE);
// </Snippet113>
}

void CPSheetView::OnCpropertypageDowizard()
{
// <Snippet128>
   CPropertySheet sheet(_T("Simple PropertySheet"));

   // Change the settings of the three pages to enable property sheet's 
   // Help button when the page is active.  CStylePage, CShapePage, and 
   // CColorPage are CPropertyPage-derived classes.
   CStylePage pageStyle;
   pageStyle.m_psp.dwFlags |= PSP_HASHELP;

   CColorPage pageColor;
   pageColor.m_psp.dwFlags |= PSP_HASHELP;

   CShapePage pageShape;
   pageShape.m_psp.dwFlags |= PSP_HASHELP;

   sheet.AddPage(&pageStyle);
   sheet.AddPage(&pageColor);
   sheet.AddPage(&pageShape);

   sheet.SetWizardMode();

   sheet.DoModal();
// </Snippet128>
}

void CPSheetView::OnCpropertysheetAddpage()
{
// <Snippet129>
   // Add three pages to a CPropertySheet object, then show the 
   // CPropertySheet object as a modal dialog.  CStylePage, CShapePage,  
   // and CColorPage are CPropertyPage-derived classes created 
   // by the Add Class wizard.  

   CPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

   CStylePage     stylePage;
   CColorPage     colorPage;
   CShapePage     shapePage;
   dlgPropertySheet.AddPage(&stylePage);
   dlgPropertySheet.AddPage(&colorPage);
   dlgPropertySheet.AddPage(&shapePage);

   dlgPropertySheet.DoModal();
// </Snippet129>
}

void CPSheetView::OnCpropertysheetConstruct()
{
// <Snippet130>
   const int c_cSheets = 3;
   CPropertySheet   grpropsheet[c_cSheets];
   // no need to call Construct for this next one
   CPropertySheet   someSheet(_T("Some sheet"));

   LPTSTR rgszSheets[c_cSheets] = {
      _T("Sheet 1"),
      _T("Sheet 2"),
      _T("Sheet 3")
   };

   for (int i = 0; i < c_cSheets; i++)
       grpropsheet[i].Construct(rgszSheets[i]);
// </Snippet130>
}

void CPSheetView::OnCpropertysheetCtor()
{
// <Snippet131>
   // Declare a CPropertySheet object titled "Simple PropertySheet".
   CPropertySheet dlgPropertySheet1(_T("Simple PropertySheet"));

   // Declare a CPropertySheet object whose title is specified in the
   // IDS_PROPERTYSHEET_TITLE string resource, and the second page is
   // initially on top.  
   CPropertySheet dlgPropertySheet2(IDS_PROPERTYSHEET_TITLE, this, 1);
// </Snippet131>
}

// <Snippet132>
// This code fragment shows how to create a modeless property sheet 
// dialog in a command message handler (OnModelessPropertySheet()) 
// of a CView-derived class.
void CPSheetView::OnModelessPropertySheet()
{
   // Declare a CPropertySheet object.  m_pdlgPropertySheet is a data
   // member of type CPropertySheet in CView-derived class.
   m_pdlgPropertySheet = new CPropertySheet(_T("Simple PropertySheet"));
   ASSERT(m_pdlgPropertySheet);

   // Add three pages to the CPropertySheet object.  Both m_pstylePage, 
   // m_pcolorPage, and m_pshapePage are data members of type 
   // CPropertyPage-derived classes in CView-derived class.
   m_pstylePage = new CStylePage;
   m_pcolorPage = new CColorPage;
   m_pshapePage = new CShapePage;
   m_pdlgPropertySheet->AddPage(m_pstylePage);
   m_pdlgPropertySheet->AddPage(m_pcolorPage);
   m_pdlgPropertySheet->AddPage(m_pshapePage);

   // Create a modeless CPropertySheet dialog.
   m_pdlgPropertySheet->Create(); 
}
// </Snippet132>

// CMyPropertySheet

IMPLEMENT_DYNAMIC(CMyPropertySheet, CPropertySheet)

CMyPropertySheet::CMyPropertySheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{

}

CMyPropertySheet::CMyPropertySheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{

}

CMyPropertySheet::~CMyPropertySheet()
{
}


BEGIN_MESSAGE_MAP(CMyPropertySheet, CPropertySheet)
   ON_WM_CREATE()
END_MESSAGE_MAP()


// CMyPropertySheet message handlers

// <Snippet134>
int CMyPropertySheet::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
      // Set for Scrolling Tabs style
      EnableStackedTabs(FALSE);
      // Call the base class
      if (CPropertySheet::OnCreate(lpCreateStruct) == -1)
            return -1;

      return 0;
}
// </Snippet134>

void CPSheetView::OnCpropertysheetCreatemyps()
{
   CMyPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

   CStylePage     stylePage;
   CColorPage     colorPage;
   CShapePage     shapePage;
   dlgPropertySheet.AddPage(&stylePage);
   dlgPropertySheet.AddPage(&colorPage);
   dlgPropertySheet.AddPage(&shapePage);

   dlgPropertySheet.DoModal();
}

// <Snippet135>
// The code fragment below sets the last active page (i.e. the 
// active page when the propertysheet was closed) to be the first 
// visible page when the propertysheet is shown. The last active 
// page was saved in m_LastActivePage, (a member variable of 
// CDocument-derived class) when OK was selected from the 
// propertysheet. CMyPropertySheet is a CPropertySheet-derived class.
BOOL CMyPropertySheet::OnInitDialog()
{
   BOOL bResult = CPropertySheet::OnInitDialog();

   CMDIFrameWnd* pframe = (CMDIFrameWnd*) AfxGetMainWnd();
   CMDIChildWnd* pchild = pframe->MDIGetActive();
   CPSheetDoc* doc = (CPSheetDoc*) pchild->GetActiveDocument();
   SetActivePage(doc->m_LastActivePage);

   return bResult;
}

BOOL CMyPropertySheet::OnCommand(WPARAM wParam, LPARAM lParam)
{
   if (LOWORD(wParam) == IDOK)
   {
      CMDIFrameWnd* pframe = (CMDIFrameWnd*) AfxGetMainWnd();
      CMDIChildWnd* pchild = pframe->MDIGetActive();
      CPSheetDoc* doc = (CPSheetDoc*) pchild->GetActiveDocument();
      doc->m_LastActivePage = GetPageIndex(GetActivePage()); // or GetActiveIndex()
   }

   return CPropertySheet::OnCommand(wParam, lParam);
}
// </Snippet135>

// CMyTTPropertySheet

IMPLEMENT_DYNAMIC(CMyTTPropertySheet, CPropertySheet)

CMyTTPropertySheet::CMyTTPropertySheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
   , m_pToolTipCtrl(NULL)
{

}

CMyTTPropertySheet::CMyTTPropertySheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
   , m_pToolTipCtrl(NULL)
{

}

CMyTTPropertySheet::~CMyTTPropertySheet()
{
   delete m_pToolTipCtrl;
}


BEGIN_MESSAGE_MAP(CMyTTPropertySheet, CPropertySheet)
END_MESSAGE_MAP()


// CMyTTPropertySheet message handlers

// <Snippet136>
// Create and associate a tooltip control to the tab control of 
// CMyTTPropertySheet.  CMyTTPropertySheet is a CPropertySheet-derived
// class.
BOOL CMyTTPropertySheet::OnInitDialog()
{
   BOOL bResult = CPropertySheet::OnInitDialog();

   // Create a tooltip control.  m_pToolTipCtrl is a member variable
   // of type CToolTipCtrl* in CMyTTPropertySheet class.  It is 
   // initialized to NULL in the constructor, and destroyed in the 
   // destructor of CMyTTPropertySheet class.
   m_pToolTipCtrl = new CToolTipCtrl;
   if (!m_pToolTipCtrl->Create(this))
   {
      TRACE(_T("Unable To create ToolTip\n"));
      return bResult;
   }

   // Associate the tooltip control to the tab control
   // of CMyPropertySheet.
   CTabCtrl* ptab = GetTabControl();
   ptab->SetToolTips(m_pToolTipCtrl);

   // Get the bounding rectangle of each tab in the tab control of the
   // property sheet. Use this rectangle when registering a tool with 
   // the tool tip control.  IDS_FIRST_TOOLTIP is the first ID string 
   // resource that contains the text for the tool.
   int count = ptab->GetItemCount();
   int id = IDS_FIRST_TOOLTIP;
   for (int i = 0; i < count; i++)
   {
      CRect r;
      ptab->GetItemRect(i, &r);
      VERIFY(m_pToolTipCtrl->AddTool(ptab, id, &r, id));
      id++;
   }

   // Activate the tooltip control.
   m_pToolTipCtrl->Activate(TRUE);

   return bResult;
}

// Override PreTranslateMessage() so RelayEvent() can be 
// called to pass a mouse message to CMyTTPropertySheet's 
// tooltip control for processing.
BOOL CMyTTPropertySheet::PreTranslateMessage(MSG* pMsg)
{
   if (NULL != m_pToolTipCtrl)            
      m_pToolTipCtrl->RelayEvent(pMsg);

   return CPropertySheet::PreTranslateMessage(pMsg);
}
// </Snippet136>

// <Snippet137>
// Simulate the selection of OK and Cancel buttons when Alt+K and
// Alt+C are pressed.  CMyPropertySheet is a CPropertySheet-derived 
// class.
BOOL CMyPropertySheet::PreTranslateMessage(MSG* pMsg) 
{
   if (pMsg->message >= WM_KEYFIRST && pMsg->message <= WM_KEYLAST)
   {
      BOOL altkey = GetKeyState(VK_MENU) < 0;
      if (altkey)
      {
         BOOL handled = TRUE;
         switch(toupper((int)pMsg->wParam))
         {
         case 'C':                     // for Alt+C - Cancel button
            PressButton(PSBTN_CANCEL);   // or EndDialog(IDCANCEL);
            break;

         case 'K':                     // for Alt+K - OK button
            PressButton(PSBTN_OK);      // or EndDialog(IDOK);
            break;

         default:
            handled = FALSE;
         }

         if (handled)
            return TRUE;
      }
   }

   return CPropertySheet::PreTranslateMessage(pMsg);
}
// </Snippet137>

void CPSheetView::OnCpropertysheetSettitle()
{
// <Snippet139>
   // Declare a CPropertySheet object with a caption "Simple PropertySheet".
   CPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

   // Add three pages to the CPropertySheet object. CStylePage, CColorPage,
   // and CShapePage are CPropertyPage-derived classes created
   // by the Add Class wizard.
   CStylePage     stylePage;
   CColorPage     colorPage;
   CShapePage     shapePage;
   dlgPropertySheet.AddPage(&stylePage);
   dlgPropertySheet.AddPage(&colorPage);
   dlgPropertySheet.AddPage(&shapePage);

   // Change the caption of the CPropertySheet object 
   // from "Simple PropertySheet" to "Simple Properties".
   dlgPropertySheet.SetTitle(_T("Simple"), PSH_PROPTITLE);

   // Show the CPropertySheet object as MODAL.
   dlgPropertySheet.DoModal();
// </Snippet139>
}

void CPSheetView::OnCpropertysheetSetwizardmode()
{
// <Snippet142>
   CPropertySheet sheet(_T("Simple PropertySheet"));

   CStylePage pageStyle;
   CColorPage pageColor;
   CShapePage pageShape;

   sheet.AddPage(&pageStyle);
   sheet.AddPage(&pageColor);
   sheet.AddPage(&pageShape);

   sheet.SetWizardMode();

   sheet.DoModal();
// </Snippet142>
}

void CPSheetView::OnCpropertysheetM_psh()
{
// <Snippet143>
   // This code fragment shows how to change CPropertySheet's settings 
   // before it is shown.  After the changes, CPropertySheet has the 
   // caption "Simple Properties", no "Apply" button, and the 
   // second page (CColorPage) initially on top.  

   CPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

   CStylePage stylePage;
   CColorPage colorPage;
   CShapePage shapePage;
   dlgPropertySheet.AddPage(&stylePage);
   dlgPropertySheet.AddPage(&colorPage);
   dlgPropertySheet.AddPage(&shapePage);

   dlgPropertySheet.m_psh.dwFlags |= PSH_NOAPPLYNOW | PSH_PROPTITLE;
   dlgPropertySheet.m_psh.pszCaption = _T("Simple");
   dlgPropertySheet.m_psh.nStartPage = 1;

   dlgPropertySheet.DoModal();
// </Snippet143>
}

void CPSheetView::OnCpropertysheetGettabcontrol()
{
   CMyTTPropertySheet dlgPropertySheet(_T("Simple PropertySheet"));

   CStylePage     stylePage;
   CColorPage     colorPage;
   CShapePage     shapePage;
   dlgPropertySheet.AddPage(&stylePage);
   dlgPropertySheet.AddPage(&colorPage);
   dlgPropertySheet.AddPage(&shapePage);

   dlgPropertySheet.DoModal();
}
