// CMyView.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"

#include "MyDoc.h"
#include "MyView.h"
#include "MyFirstPage.h"
#include "MySecondPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

class CMyObject : public CObject
{
public:
   static void OnDlgDoWait();
};


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

BEGIN_MESSAGE_MAP(CMyView, CView)
   // Standard printing commands
   ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
   ON_COMMAND(ID_EDIT_PROPERTIES, &CMyView::OnEditProperties)
   ON_COMMAND(ID_EDIT_WIZARD, &CMyView::OnWizard)
   ON_COMMAND(ID_EDIT_IDLEPROCESSING, &CMyView::OnEditIdleprocessing)
   ON_COMMAND(ID_CURSOR_BEGINSLEEPEND, &CMyView::OnBeginSleepEnd)
   ON_COMMAND(ID_CURSOR_BEGINDLGRESTORE, &CMyView::OnBeginDlgRestore)
   ON_COMMAND(ID_CURSOR_DLGRESTORE, &CMyView::OnDlgRestore)
   ON_COMMAND(ID_CURSOR_DLGDOWAIT, &CMyView::OnDlgDoWait)
   ON_COMMAND(ID_SHAPE_NEWSHAPE, &CMyView::OnShapeNewshape)
   ON_COMMAND(ID_SHAPE_DELETESHAPE, &CMyView::OnShapeDeleteshape)
   ON_COMMAND(ID_COLORDIALOG_DOMODAL, &CMyView::OnColordialogDomodal)
   ON_COMMAND(ID_COLORDIALOG_GETCOLOR, &CMyView::OnColordialogGetcolor)
   ON_COMMAND(ID_COLORDIALOG_GETSAVEDCUSTOMCOLORS, &CMyView::OnColordialogGetsavedcustomcolors)
   ON_COMMAND(ID_COLORDIALOG_ONCOLOROK, &CMyView::OnColordialogOncolorok)
   ON_COMMAND(ID_COLORDIALOG_M, &CMyView::OnColordialogM)
   ON_COMMAND(ID_EDIT_CWINDOWDC, &CMyView::OnEditCwindowdc)
END_MESSAGE_MAP()

// CMyView construction/destruction

CMyView::CMyView()
   : m_nMember1(10)
   , m_nMember2(350)
   , m_strMember3(_T("Hi."))
   , m_strMember4(_T("Bye."))
   , m_pActiveShape(NULL)
{
   // TODO: add construction code here

}

CMyView::~CMyView()
{
   delete m_pActiveShape;
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return CView::PreCreateWindow(cs);
}

// CMyView drawing

// <Snippet1>
void CMyView::OnDraw(CDC* pDC)
{
   CMyDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);
   if (!pDoc)
      return;

   CString s = pDoc->GetData();   // Returns a CString
   CRect rect;
   GetClientRect(&rect);

   pDC->SetTextAlign(TA_BASELINE | TA_CENTER);
   pDC->TextOut(rect.right / 2, rect.bottom / 2, s, s.GetLength());
}
// </Snippet1>


// CMyView printing

BOOL CMyView::OnPreparePrinting(CPrintInfo* pInfo)
{
   DoPreparePrinting(pInfo);

// <Snippet56>
	if (!CView::OnPreparePrinting(pInfo))
		return FALSE;
	
	if (!COleDocObjectItem::OnPreparePrinting(this, pInfo))
		return FALSE;

	return TRUE;
// </Snippet56>
}

void CMyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add extra initialization before printing
}

void CMyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add cleanup after printing
}


// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
   CView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}

CMyDoc* CMyView::GetDocument() const // non-debug version is inline
{
   ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
   return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyView message handlers

void CMyView::OnEditProperties()
{
   DoModalPropertySheet();
}

// <Snippet4>
void CMyView::DoModalPropertySheet()
{
   CPropertySheet propsheet;
   CMyFirstPage pageFirst; // derived from CPropertyPage
   CMySecondPage pageSecond; // derived from CPropertyPage

   // Move member data from the view (or from the currently
   // selected object in the view, for example).
   pageFirst.m_nMember1 = m_nMember1; 
   pageFirst.m_nMember2 = m_nMember2;

   pageSecond.m_strMember3 = m_strMember3;
   pageSecond.m_strMember4 = m_strMember4;

   propsheet.AddPage(&pageFirst);
   propsheet.AddPage(&pageSecond);

   if (propsheet.DoModal() == IDOK)
   {
      m_nMember1 = pageFirst.m_nMember1;
      m_nMember2 = pageFirst.m_nMember2;
      m_strMember3 = pageSecond.m_strMember3;
      m_strMember4 = pageSecond.m_strMember4;  
      GetDocument()->SetModifiedFlag();
      GetDocument()->UpdateAllViews(NULL);
   }
}
// </Snippet4>

// <Snippet5>
void CMyView::OnWizard()
{
   CPropertySheet sheet;
   // CMyFirstPage and CMySecondPage are derived from CPropertyPage
   CMyFirstPage page1;
   CMySecondPage page2;

   sheet.AddPage(&page1);
   sheet.AddPage(&page2);
   sheet.SetWizardMode();
   sheet.DoModal();
}
// </Snippet5>

void CMyView::OnEditIdleprocessing()
{
// <Snippet8>
   BOOL bDoingBackgroundProcessing = TRUE;
   while (bDoingBackgroundProcessing) 
   { 
      MSG msg;
      while (::PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE)) 
      { 
         if (!AfxGetApp()->PumpMessage()) 
         { 
            bDoingBackgroundProcessing = FALSE; 
            ::PostQuitMessage(0); 
            break; 
         } 
      } 
      // let MFC do its idle processing
      LONG lIdle = 0;
      while (AfxGetApp()->OnIdle(lIdle++ ))
         ;  
      // Perform some background processing here 
      // using another call to OnIdle
   }
// </Snippet8>
}

// <Snippet43>
// The following example illustrates the most common case
// of displaying the hourglass cursor during some lengthy
// processing of a command handler implemented in some
// CCmdTarget-derived class, such as a document or view.
void CMyView::OnBeginSleepEnd()
{
   BeginWaitCursor(); // display the hourglass cursor
   // do some lengthy processing
   Sleep(3000);
   EndWaitCursor(); // remove the hourglass cursor
}

// The next example illustrates RestoreWaitCursor.
void CMyView::OnBeginDlgRestore()
{
   BeginWaitCursor(); // display the hourglass cursor
   // do some lengthy processing
   // The dialog box will normally change the cursor to
   // the standard arrow cursor, and leave the cursor in
   // as the standard arrow cursor when the dialog box is
   // closed.
   CFileDialog dlg(TRUE);
   dlg.DoModal();

   // It is necessary to call RestoreWaitCursor here in order
   // to change the cursor back to the hourglass cursor.
   RestoreWaitCursor();
   // do some more lengthy processing
   Sleep(3000);
   EndWaitCursor(); // remove the hourglass cursor
}

// In the above example, the dialog was clearly invoked between
// the pair of calls to BeginWaitCursor and EndWaitCursor.
// Sometimes it may not be clear whether the dialog is invoked 
// in between a pair of calls to BeginWaitCursor and EndWaitCursor.
// It is permissable to call RestoreWaitCursor, even if 
// BeginWaitCursor was not previously called.  This case is 
// illustrated below, where CMyView::AnotherFunction does not
// need to know whether it was called in the context of an
// hourglass cursor.
void CMyView::OnDlgRestore()
{
   // some processing ...
   CFileDialog dlg(TRUE);
   dlg.DoModal();
   RestoreWaitCursor();

   // some more processing ...
}

// If the dialog is invoked from a member function of
// some non-CCmdTarget, then you can call CWinApp::DoWaitCursor
// with a 0 parameter value to restore the hourglass cursor.
void CMyObject::OnDlgDoWait()
{
   CFileDialog dlg(TRUE);
   dlg.DoModal();
   AfxGetApp()->DoWaitCursor(0); // same as CCmdTarget::RestoreWaitCursor   
}
// </Snippet43>

void CMyView::OnDlgDoWait()
{
   CMyObject::OnDlgDoWait();
}

// CMyShape

IMPLEMENT_DYNAMIC(CMyShape, CCmdTarget)


CMyShape::CMyShape()
{
}

CMyShape::~CMyShape()
{
}

// <Snippet45>
// The command handler for ID_SHAPE_COLOR (menu command to change
// the color of the currently selected shape) was added to the message
// map of CMyShape (note, not CMyView) using the Properties window.  
// The menu item will be automatically enabled or disabled, depending 
// on whether a CMyShape is currently selected in the view, that is, 
// depending on whether CMyView::m_pActiveView is NULL.  It is not 
// necessary to implement an ON_UPDATE_COMMAND_UI handler to enable 
// or disable the menu item.  
BEGIN_MESSAGE_MAP(CMyShape, CCmdTarget)
   ON_COMMAND(ID_SHAPE_COLOR, &CMyShape::OnShapeColor)
END_MESSAGE_MAP()
// </Snippet45>


// CMyShape message handlers

// <Snippet44>
// This example illustrates extending the framework's standard command 
// route from the view to objects managed by the view.  This example
// is from an object-oriented drawing application, similar to the
// DRAWCLI sample application, which draws and edits "shapes".
BOOL CMyView::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
   // Extend the framework's command route from the view to
   // the application-specific CMyShape that is currently selected
   // in the view. m_pActiveShape is NULL if no shape object
   // is currently selected in the view.
   if ((m_pActiveShape != NULL)
      && m_pActiveShape->OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
      return TRUE;

   // If the object(s) in the extended command route don't handle
   // the command, then let the base class OnCmdMsg handle it.
   return CView::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}
// </Snippet44>

void CMyShape::OnShapeColor()
{
   CString str(_T("CMyShape::OnShapeColor called.\n"));
   AFXDUMP(str);
}

BOOL CMyShape::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
   CString str(_T("CMyShape::OnCmdMsg called.\n"));
   AFXDUMP(str);

   return CCmdTarget::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}

void CMyView::OnShapeNewshape()
{
   delete m_pActiveShape;
   m_pActiveShape = new CMyShape();
}

void CMyView::OnShapeDeleteshape()
{
   delete m_pActiveShape;
   m_pActiveShape = NULL;
}

#ifndef _WIN32_WCE // CColorDialog is not supported for Windows CE.

// CMyColorDlg

IMPLEMENT_DYNAMIC(CMyColorDlg, CColorDialog)

CMyColorDlg::CMyColorDlg(COLORREF clrInit, DWORD dwFlags, CWnd* pParentWnd) :
	CColorDialog(clrInit, dwFlags, pParentWnd)
{

}

CMyColorDlg::~CMyColorDlg()
{
}


BEGIN_MESSAGE_MAP(CMyColorDlg, CColorDialog)
END_MESSAGE_MAP()

// CMyColorDlg message handlers

// <Snippet52>
// Override OnColorOK to validate the color entered to the
// Red, Green, and Blue edit controls. If the color
// is BLACK (i.e. RGB(0, 0,0)), then force the current color
// selection to be the color initially selected when the
// dialog box is created. The color dialog won't close so
// user can enter a new color.
BOOL CMyColorDlg::OnColorOK()
{
   // Value in Red edit control.
   COLORREF clrref = GetColor();
   if (RGB(0, 0, 0) == clrref)
   {
      AfxMessageBox(_T("BLACK is not an acceptable color. ")
         _T("Please enter a color again"));

      // GetColor() returns initially selected color.
      SetCurrentColor(GetColor());        

      // Won't dismiss color dialog.
      return TRUE;                        
   }

   // OK to dismiss color dialog.
   return FALSE;                          
}
// </Snippet52>

#endif // !_WIN32_WCE

void CMyView::OnColordialogDomodal()
{
// <Snippet49>
   // Show the Color dialog with all the default settings.
   CColorDialog dlg1;
   dlg1.DoModal();

   // Show the fully opened Color dialog with red as the selected color.
   CColorDialog dlg2(RGB(255, 0, 0), CC_FULLOPEN);
   dlg2.DoModal();
// </Snippet49>
}

void CMyView::OnColordialogGetcolor()
{
// <Snippet50>
   // Get the selected color from the CColorDialog.
   CColorDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      COLORREF color = dlg.GetColor();
      TRACE(_T("RGB value of the selected color - red = %u, ")
         _T("green = %u, blue = %u\n"),
         GetRValue(color), GetGValue(color), GetBValue(color));
   }
// </Snippet50>
}

void CMyView::OnColordialogGetsavedcustomcolors()
{
// <Snippet51>
   // Get a pointer to an array of 16 RGB color values that stores 
   // custom colors created by the user from CColorDialog.
   CColorDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      COLORREF* ccolor = dlg.GetSavedCustomColors();
      for (int i=0; i < 16; i++)
      {
         TRACE(_T("RGB value of the selected color - red = %u, ")
            _T("green = %u, blue = %u\n"),
            GetRValue(ccolor[i]), 
            GetGValue(ccolor[i]), 
            GetBValue(ccolor[i]));
      }
   }
// </Snippet51>
}

void CMyView::OnColordialogOncolorok()
{
   CMyColorDlg dlg;
   dlg.DoModal();
}

void CMyView::OnColordialogM()
{
// <Snippet53>
   // The code below uses CColorDialog::m_cc data member to 
   // customize the settings of CColorDialog. The CColorDialog will
   // be shown as full open and with red as the selected color. 
   CColorDialog dlg;
   dlg.m_cc.Flags |= CC_FULLOPEN | CC_RGBINIT;
   dlg.m_cc.rgbResult = RGB(255, 0, 0);
   dlg.DoModal();
// </Snippet53>
}

// <Snippet183>
void CMyView::OnPrepareDC (CDC* pDC, CPrintInfo* pInfo)
{
   CView::OnPrepareDC(pDC, pInfo);

   // If we are printing, set the mapmode and the window
   // extent properly, then set viewport extent. Use the
   // SetViewportOrg member function in the CDC class to
   // move the viewport origin to the center of the view.
   
   if(pDC->IsPrinting()) // Is the DC a printer DC.
   {
      CRect rect;
      GetClientRect (&rect);

      pDC->SetMapMode(MM_ISOTROPIC);
      CSize ptOldWinExt = pDC->SetWindowExt(1000, 1000);
      ASSERT(ptOldWinExt.cx != 0 && ptOldWinExt.cy != 0);
      CSize ptOldViewportExt = pDC->SetViewportExt(rect.Width(), -rect.Height());
      ASSERT(ptOldViewportExt.cx != 0 && ptOldViewportExt.cy != 0);
      CPoint ptOldOrigin = pDC->SetViewportOrg(rect.Width()/2, rect.Height()/2);
   }
}
// </Snippet183>

// <Snippet186>
void CMyView::OnPrint(CDC *pDC, CPrintInfo *pInfo)
{
   UNREFERENCED_PARAMETER(pInfo);

   // Print headers and/or footers, if desired.
   // Find portion of document corresponding to pInfo->m_nCurPage.
   OnDraw(pDC);
}
// </Snippet186>

#define WM_MYMESSAGE (WM_USER + 1)

void CMyView::OnEditCwindowdc()
{
   CWnd* pWnd = this;

// <Snippet188>
   // Get a dc for a CWnd object pointer.
   CWindowDC dc(pWnd);

   // Send my private massage.
   ::SendMessage(pWnd->m_hWnd, WM_MYMESSAGE, 0, 0);
// </Snippet188>
}
