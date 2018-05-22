// MyRichEditView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyRichEditView.h"

// cheesy fakery
CLIPFORMAT cfRTO = CF_TEXT;
CLIPFORMAT cfEmbeddedObject = CF_TEXT;

// CMyRichEditView

IMPLEMENT_DYNCREATE(CMyRichEditView, CRichEditView)

CMyRichEditView::CMyRichEditView()
   : m_pFRDlg(NULL)
   , m_nNumReplaced(0)
   , m_nDocSizeInInches(20)
{

}

CMyRichEditView::~CMyRichEditView()
{
   if (NULL != m_pFRDlg && ::IsWindow(m_pFRDlg->m_hWnd))
   {
      delete m_pFRDlg;
   }
}

// <Snippet172>
// Register FindReplace window message.
static UINT WM_FINDREPLACE = ::RegisterWindowMessage(FINDMSGSTRING);
// </Snippet172>

BEGIN_MESSAGE_MAP(CMyRichEditView, CRichEditView)
   ON_UPDATE_COMMAND_UI(ID_INFO_LINENUMBER, &CMyRichEditView::OnUpdateLineNumber)
// <Snippet173>
   // Message map entry to map from message to handler function.
   ON_REGISTERED_MESSAGE(WM_FINDREPLACE, &CMyRichEditView::OnFindReplace)
// </Snippet173>
   ON_COMMAND(ID_INFO_FINDREPLACE, &CMyRichEditView::InitFindReplaceDlg)
   ON_COMMAND(ID_PSD_CTO, &CMyRichEditView::OnPageSetupDlg)
   ON_COMMAND(ID_PSD_MYPSD, &CMyRichEditView::OnPsdMypsd)
   ON_COMMAND(ID_PRINTDLG_CREATEANDCTOR, &CMyRichEditView::OnPrintdlgCreateandctor)
   ON_COMMAND(ID_PRINTDLG_CREATEPINTERDC, &CMyRichEditView::OnPrintdlgCreatepinterdc)
   ON_COMMAND(ID_PRINTDLG_GETDEFAULTS, &CMyRichEditView::OnPrintdlgGetdefaults)
   ON_COMMAND(ID_PRINTDLG_GETDEVICENAME, &CMyRichEditView::OnPrintdlgGetdevicename)
   ON_COMMAND(ID_PRINTDLG_GETPRINTERDC, &CMyRichEditView::OnPrintdlgGetprinterdc)
   ON_COMMAND(ID_PRINTDLG_PRINTCOLLATE, &CMyRichEditView::OnPrintdlgPrintcollate)
   ON_COMMAND(ID_PRINTDLG_M, &CMyRichEditView::OnPrintdlgM_pd)
   ON_COMMAND(ID_CRICHEDITVIEW_CHARUNDERLINE, &CMyRichEditView::OnCharUnderline)
   ON_COMMAND(ID_CRICHEDITVIEW_CHARITALIC, &CMyRichEditView::OnItalic)
   ON_COMMAND(ID_CRICHEDITVIEW_PARACENTER, &CMyRichEditView::OnParaCenter)
   ON_UPDATE_COMMAND_UI(ID_CRICHEDITVIEW_CHARITALIC, &CMyRichEditView::OnUpdateCharItalicUI)
   ON_UPDATE_COMMAND_UI(ID_CRICHEDITVIEW_PARACENTER, &CMyRichEditView::OnUpdateParaCenterUI)
   ON_COMMAND(ID_CRICHEDITVIEW_ADDBULLETS, &CMyRichEditView::AddBullets)
   ON_COMMAND(ID_CRICHEDITVIEW_WORDWRAP, &CMyRichEditView::OnCricheditviewWordwrap)
   ON_UPDATE_COMMAND_UI(ID_CRICHEDITVIEW_WORDWRAP, &CMyRichEditView::OnUpdateCricheditviewWordwrap)
   ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
   ON_COMMAND(ID_CRICHEDITVIEW_REPLACE32887, &CMyRichEditView::OnCricheditviewReplaceHi)
END_MESSAGE_MAP()


// CMyRichEditView diagnostics

#ifdef _DEBUG
void CMyRichEditView::AssertValid() const
{
	CRichEditView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyRichEditView::Dump(CDumpContext& dc) const
{
	CRichEditView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyRichEditView message handlers

// <Snippet48>
void CMyRichEditView::OnUpdateLineNumber(CCmdUI *pCmdUI)
{
   int nLine = GetRichEditCtrl().LineFromChar(-1) + 1;

   CString string;
   string.Format(_T("Line %d"), nLine);
   pCmdUI->Enable(TRUE);
   pCmdUI->SetText(string);
}
// </Snippet48>

// <Snippet170>
// m_pFRDlg is a pointer to a class derived from CFindReplaceDialog 
// which defines variables used by the FINDREPLACE structure. 
// InitFindReplaceDlg creates a CFindReplaceDialog and initializes
// the m_fr with the data members from the derived class
void CMyRichEditView::InitFindReplaceDlg() 
{
   if(NULL == m_pFRDlg)
   {
      m_pFRDlg = new CMyFindReplaceDialog();  // Must be created on the heap

      m_pFRDlg->Create(TRUE, _T(""), _T(""), FR_DOWN, this); 

      m_pFRDlg->m_fr.lStructSize = sizeof(FINDREPLACE);
      m_pFRDlg->m_fr.hwndOwner = this->m_hWnd;
      m_pFRDlg->m_fr.lpstrFindWhat = m_pFRDlg->GetFindWhatStr();
      m_pFRDlg->m_fr.lpstrReplaceWith = m_pFRDlg->GetReplaceWithStr();
      m_pFRDlg->m_fr.wFindWhatLen =  m_pFRDlg->GetFindWhatStrLen();
      m_pFRDlg->m_fr.wReplaceWithLen =  m_pFRDlg->GetReplaceWithStrLen();
   }
}
// </Snippet170>

// <Snippet69>
LRESULT CMyRichEditView::OnFindReplace(WPARAM wparam, LPARAM lparam)
{
   UNREFERENCED_PARAMETER(wparam);

   CFindReplaceDialog *pDlg = CFindReplaceDialog::GetNotifier(lparam);

   if( NULL != pDlg )
   {
      // Use pDlg as a pointer to the existing FindReplace dlg to 
      // call CFindReplaceDialog member functions
      if(pDlg->IsTerminating())
      {
         CString   csFindString;
         CString   csReplaceString;
         
         csFindString = pDlg->GetFindString();
         csReplaceString = pDlg->GetReplaceString();

         VERIFY(AfxGetApp()->WriteProfileString( AfxGetApp()->m_pszAppName,
            _T("FindString"), csFindString));
         VERIFY(AfxGetApp()->WriteProfileString(AfxGetApp()->m_pszAppName,
            _T("ReplaceString"), csReplaceString));

         VERIFY(pDlg->DestroyWindow());
      }
   }

   return 0;
}
// </Snippet69>

UINT_PTR CALLBACK PaintHook(HWND hdlg, UINT uiMsg, WPARAM wParam, LPARAM lParam)
{
   UNREFERENCED_PARAMETER(hdlg);
   UNREFERENCED_PARAMETER(uiMsg);
   UNREFERENCED_PARAMETER(wParam);
   UNREFERENCED_PARAMETER(lParam);
   return TRUE;
}

// <Snippet94>
void CMyRichEditView::OnPageSetupDlg()
{
   CPageSetupDialog psd(PSD_INTHOUSANDTHSOFINCHES | PSD_MARGINS | 
      PSD_ENABLEPAGEPAINTHOOK, this);

   // Initialize margins
   psd.m_psd.rtMargin.top = 1000;
   psd.m_psd.rtMargin.left = 1250;
   psd.m_psd.rtMargin.right = 1250;
   psd.m_psd.rtMargin.bottom = 1000;
   psd.m_psd.lpfnPagePaintHook = (LPPAGEPAINTHOOK)PaintHook;

   if(IDOK == psd.DoModal()) 
   {
      // Propagate changes to the app
// <Snippet95>
      AfxGetApp()->SelectPrinter(psd.m_psd.hDevNames, psd.m_psd.hDevMode);
// </Snippet95>
   }
   else
   {
      TRACE(_T("CommDlgExtendedError returned error %d from ")
         _T("CPageSetupDialog::DoModal().\n"),
         (int)CommDlgExtendedError());
   }
}
// </Snippet94>

void CMyPageSetupDialog::DrawMyImage(CDC* pDC, LPRECT lpRect)
{
   CRect rect(lpRect);
   rect.DeflateRect(5, 5);
   pDC->Draw3dRect(rect, 0x0000ff00, 0x000000ff);
}


UINT CMyPageSetupDialog::OnDrawPage(CDC* pDC, UINT nMessage, LPRECT lpRect)
{
// <Snippet96>
   switch(nMessage)
   {
       case WM_PSD_GREEKTEXTRECT:
         DrawMyImage(pDC, lpRect);    //draws my special graphic
         return 1;
       default:
         return CPageSetupDialog::OnDrawPage(pDC, nMessage, lpRect);
   }
// </Snippet96>
}


void CMyRichEditView::OnPsdMypsd()
{
   CMyPageSetupDialog mpsd;
   mpsd.DoModal();
}

void CMyRichEditView::OnPrintdlgCreateandctor()
{
// <Snippet174>
   // Display the Windows Print dialog box with "All" radio button 
   // initially selected. All other radio buttons are disabled.
   CPrintDialog dlg1(FALSE);

   // Display the Windows Print dialog box with Collate check box checked.  
   CPrintDialog dlg2(FALSE, PD_ALLPAGES | PD_COLLATE | PD_NOPAGENUMS | PD_HIDEPRINTTOFILE);

   // Display the Windows Print dialog box with "Selection" radio
   // button initially selected. "All" radio button is enabled
   // but "Pages" radio button is disabled.
   CPrintDialog dlg3(FALSE, PD_SELECTION | PD_USEDEVMODECOPIES);
// </Snippet174>
}

void CMyRichEditView::OnPrintdlgCreatepinterdc()
{
// <Snippet106>
   // Display the Windows Print dialog box with "All" radio button 
   // initially selected. All other radio buttons are disabled.
   CPrintDialog dlg(FALSE);
   if (dlg.DoModal() == IDOK)
   {
      // Create a printer device context (DC) based on the information
      // selected from the Print dialog.
      HDC hdc = dlg.CreatePrinterDC();
      ASSERT(hdc);
   }
// </Snippet106>
}

void CMyRichEditView::OnPrintdlgGetdefaults()
{
// <Snippet107>
   CPrintDialog dlg(FALSE);

   if (!dlg.GetDefaults())
   {
      AfxMessageBox(_T("You have no default printer!"));
   }
   else
   {
      // attach to the DC we were given
      CDC dc;
      dc.Attach(dlg.m_pd.hDC);

      // ask for the measurements
      int nHorz = dc.GetDeviceCaps(LOGPIXELSX);
      int nVert = dc.GetDeviceCaps(LOGPIXELSY);

      // almost always the same in both directions, but sometimes not!
      CString str;
      if (nHorz == nVert)
      {
         str.Format(_T("Your printer supports %d pixels per inch"), nHorz);
      }
      else
      {
         str.Format(_T("Your printer supports %d pixels per inch ")
            _T("horizontal resolution, and %d pixels per inch vertical ")
            _T("resolution"), nHorz, nVert);
      }

      // tell the user
      AfxMessageBox(str);

      // Note: no need to call Detach() because we want the CDC destructor
      // to call FreeDC() on the DC we borrowed from the common dialog
   }
// </Snippet107>
}

void CMyRichEditView::OnPrintdlgGetdevicename()
{
// <Snippet108>
   CPrintDialog dlg(FALSE);

   if (!dlg.GetDefaults())
   {
      AfxMessageBox(_T("You have no default printer!"));
   }
   else
   {
      CString strDescription;

      strDescription.Format(_T("Your default printer is %s on %s using %s."),
         (LPCTSTR) dlg.GetDeviceName(),
         (LPCTSTR) dlg.GetPortName(),
         (LPCTSTR) dlg.GetDriverName());

      AfxMessageBox(strDescription);
   }
// </Snippet108>
}

void CMyRichEditView::OnPrintdlgGetprinterdc()
{
// <Snippet109>
   CPrintDialog dlg(FALSE);
   if (dlg.DoModal() == IDOK)
   {
      // Get a handle to the printer device context (DC).
      HDC hdc = dlg.GetPrinterDC();
      ASSERT(hdc);

      // Do something with the HDC...

      // Clean up.
      CDC::FromHandle(hdc)->DeleteDC();
   }
// </Snippet109>
}

void CMyRichEditView::OnPrintdlgPrintcollate()
{
// <Snippet110>
   // Display the Windows Print dialog box with Collate check box checked.
   CPrintDialog dlg(FALSE, PD_ALLPAGES | PD_COLLATE | PD_NOPAGENUMS | 
      PD_HIDEPRINTTOFILE);
   if (dlg.DoModal() == IDOK)
   {
      // If the collate check box is selected, then GetCopies() will return
      // the number of copies printed. Otherwise, GetCopies() always 
      // returns 1. Then, the number of copies printed can be found from the
      // DEVMODE structure of the printing device.
      if (dlg.PrintCollate())
      {
         int num = dlg.GetCopies();
         TRACE(_T("Number of copies printed = %d\n"), num);
      }
      else
      {
         LPDEVMODE devmode = dlg.GetDevMode();
         TRACE(_T("Number of copies printed = %d\n"), devmode->dmCopies);
      }
   }
// </Snippet110>
}

void CMyRichEditView::OnPrintdlgM_pd()
{
// <Snippet111>
   // Display the Windows Print dialog box with "Pages" radio button
   // initially selected. "All" and "Pages" radio buttons are
   // enabled as well.
   CPrintDialog dlg(FALSE, PD_PAGENUMS | PD_USEDEVMODECOPIES);
   dlg.m_pd.nMinPage = dlg.m_pd.nFromPage = 1;
   dlg.m_pd.nMaxPage = dlg.m_pd.nToPage = 10;
   if (dlg.DoModal() == IDOK)
   {
      // Determine the starting and ending page numbers for the range 
      // of pages to be printed.

      int from_page = -1, to_page = -1;
      if (dlg.PrintAll())              // print all pages in the document
      {
         from_page = dlg.m_pd.nMinPage;
         to_page = dlg.m_pd.nMaxPage;
      }
      else if (dlg.PrintRange())       // print only a range of pages 
      {                                // in the document 
         from_page = dlg.GetFromPage();
         to_page = dlg.GetToPage();
      }
      else if (dlg.PrintSelection())   // print only the currently selected 
                                       // items
      {
         from_page = to_page = -1;     // -1 to denote unknown yet
      }

      TRACE(_T("Print from %d to %d\n"), from_page, to_page);
   }
// </Snippet111>
}

// <Snippet151>
void CMyRichEditView::OnReplaceAll(LPCTSTR lpszFind, LPCTSTR lpszReplace, 
   BOOL bCase, BOOL bWord)
{
   CWaitCursor wait;
   // no selection or different than what we are looking for
   if (!FindText(lpszFind, bCase, bWord))
   {
      OnTextNotFound(lpszFind);
      return;
   }

   GetRichEditCtrl().HideSelection(TRUE, FALSE);
   m_nNumReplaced = 0;
   do
   {
      GetRichEditCtrl().ReplaceSel(lpszReplace);
      m_nNumReplaced++;  // Record the number of replacements

   } while (FindTextSimple(lpszFind));
   GetRichEditCtrl().HideSelection(FALSE, FALSE);
}
// </Snippet151>

// <Snippet152>
void CMyRichEditView::OnCharUnderline ()
{
    CHARFORMAT2 cf;
    cf = GetCharFormatSelection();

    if (!(cf.dwMask & CFM_UNDERLINE) || !(cf.dwEffects & CFE_UNDERLINE))
        cf.dwEffects = CFE_UNDERLINE;
    else
        cf.dwEffects = 0;

    cf.dwMask = CFM_UNDERLINE;
    SetCharFormat(cf);
}
// </Snippet152>

// <Snippet153>
void CMyRichEditView::OnPrint(CDC* pDC, CPrintInfo* pInfo) 
{
   UNREFERENCED_PARAMETER(pInfo);

   // Get the current paper size and construct an actual printing
   // rectangle by leaving out one half inch margin from each side.
   CSize sizePaper = GetPaperSize();
   CRect rectMargins(720, 720, sizePaper.cx - 720, 
      sizePaper.cy - 720);

   // Need to set the margins when printing from CRichEditView
   SetMargins(rectMargins);

   // Set up three rectangular regions spaced an inch apart
   CRect rectHeader(0, 0, rectMargins.right, 1440);
   CRect rectBody(0, 1440, rectMargins.right, 1440 * 2);
   CRect rectFooter(0, 1440 * 2, rectMargins.right, 1440 * 3);

   // Format the first 10 characters in the buffer.
   int nSavedDC = pDC->SaveDC();
   PrintInsideRect(pDC, rectHeader, 0, 10, TRUE); // characters 0-10
   pDC->RestoreDC(nSavedDC);

   // Format the second 10 characters in the buffer.
   nSavedDC = pDC->SaveDC();
   PrintInsideRect(pDC, rectBody, 10, 20, TRUE); // characters 10-20
   pDC->RestoreDC(nSavedDC);

   // Format the third 10 characters in the buffer.
   nSavedDC = pDC->SaveDC();
   PrintInsideRect(pDC, rectFooter, 20, 30, TRUE); // characters 20-30
   pDC->RestoreDC(nSavedDC);   

//   CRichEditView::OnPrint(pDC, pInfo);
}
// </Snippet153>

// <Snippet161>
BOOL CMyRichEditView::OnPreparePrinting(CPrintInfo* pInfo)
{
   // Set the printing margins (720 twips = 1/2 inch).
   SetMargins(CRect(720, 720, 720, 720));

   // Change the paper orientation to landscape mode
   // See the example for CWinApp::GetPrinterDeviceDefaults
   ((CMyWinApp*)AfxGetApp())->SetLandscapeMode();

   // Change the paper size in the CRichEditView to 
   // reflect landscape mode
   CSize csPaper = GetPaperSize();
   int temp;
   temp = csPaper.cx; csPaper.cx = csPaper.cy; csPaper.cy = temp;
   SetPaperSize(csPaper);

   return DoPreparePrinting(pInfo);
}
// </Snippet161>

// <Snippet155>
void CMyRichEditView::OnItalic()
{
   OnCharEffect( CFM_ITALIC, CFE_ITALIC );
}
// </Snippet155>

// <Snippet156>
void CMyRichEditView::OnParaCenter()
{
   OnParaAlign(PFA_CENTER);
}
// </Snippet156>

// <Snippet157>
void CMyRichEditView::OnTextNotFound(LPCTSTR lpszFind)
{
   // Replace the beep with a message box
   CString str;
   str.Format(_T("'%s' was not found."), lpszFind);
   AfxMessageBox(str);
}
// </Snippet157>

// <Snippet158>
void CMyRichEditView::OnUpdateCharItalicUI(CCmdUI* pCmdUI)
{
   OnUpdateCharEffect(pCmdUI, CFM_ITALIC, CFE_ITALIC);
}
// </Snippet158>

// <Snippet159>
void CMyRichEditView::OnUpdateParaCenterUI(CCmdUI* pCmdUI)
{
   OnUpdateParaAlign(pCmdUI, PFA_CENTER);
}
// </Snippet159>

// <Snippet160>
// This code fragment is taken from the Wordpad sample.
HRESULT CMyRichEditView::QueryAcceptData(LPDATAOBJECT lpdataobj, 
   CLIPFORMAT* lpcfFormat, DWORD dwReco, BOOL bReally, HGLOBAL hMetaFile)
{
   if (bReally && *lpcfFormat == 0 && (m_nPasteType == 0))
   {
      COleDataObject dataobj;
      dataobj.Attach(lpdataobj, FALSE);
      if (!dataobj.IsDataAvailable(cfRTO)) // native avail, let 
                                           // richedit do as it wants
      {
         if (dataobj.IsDataAvailable(cfEmbeddedObject))
         {
            if (PasteNative(lpdataobj)) // See WordPad sample for info
                                        // on PasteNative
               return S_FALSE;
         }
      }
   }
   return CRichEditView::QueryAcceptData(lpdataobj, lpcfFormat, dwReco, 
      bReally, hMetaFile);
}
// </Snippet160>

BOOL CMyRichEditView::PasteNative(LPDATAOBJECT lpdataobj)
{
   UNREFERENCED_PARAMETER(lpdataobj);
   return TRUE;
}

// <Snippet154>
void CMyRichEditView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
   CRect rectPrintPage = GetPrintRect();  // Measured in MM_TWIPS

   pInfo->SetMaxPage((m_nDocSizeInInches * 1440)/rectPrintPage.Height());

   CRichEditView::OnBeginPrinting(pDC, pInfo);
}
// </Snippet154>

// <Snippet162>
void CMyRichEditView::AddBullets() 
{
   PARAFORMAT2 pf;

   pf.cbSize = sizeof(PARAFORMAT2);
   pf.dwMask = PFM_NUMBERING | PFM_OFFSET;
   pf.wNumbering = PFN_BULLET;
   pf.dxOffset = 10;

   VERIFY(SetParaFormat(pf));
}
// </Snippet162>

// <Snippet163>
void CMyRichEditView::OnInitialUpdate()
{
   CRichEditView::OnInitialUpdate();

   // Turn on the horizontal scroll bar
   m_nWordWrap = WrapNone;
   WrapChanged();
}
// </Snippet163>

void CMyRichEditView::OnCricheditviewWordwrap()
{
   if (WrapNone == m_nWordWrap)
   {
      m_nWordWrap = WrapToWindow;   
   }
   else
   {
      m_nWordWrap = WrapNone;   
   }
   WrapChanged();
}

void CMyRichEditView::OnUpdateCricheditviewWordwrap(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(WrapNone != m_nWordWrap);
}

void CMyRichEditView::OnCricheditviewReplaceHi()
{
   OnReplaceAll(_T("hi"), _T("hello"), FALSE, FALSE);
}