// RichEditDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CRichEditCtrl.h"
#include "RichEditDlg.h"

// C4311: pointer truncation (CFile* to DWORD)
// C4312: cast to larger size (DWORD to CFile*)
// both caused by the StreamIn/StreamOut callback mechanism
#pragma warning(push)
#pragma warning(disable: 4311 4312)

// CRichEditDlg dialog

// <Snippet34>
// My callback procedure that reads the rich edit control contents
// from a file.
static DWORD CALLBACK 
MyStreamInCallback(DWORD dwCookie, LPBYTE pbBuff, LONG cb, LONG *pcb)
{
   CFile* pFile = (CFile*) dwCookie;

   *pcb = pFile->Read(pbBuff, cb);

   return 0;
}
// </Snippet34>

// <Snippet36>
// My callback procedure that writes the rich edit control contents
// to a file.
static DWORD CALLBACK 
MyStreamOutCallback(DWORD dwCookie, LPBYTE pbBuff, LONG cb, LONG *pcb)
{
   CFile* pFile = (CFile*) dwCookie;

   pFile->Write(pbBuff, cb);
   *pcb = cb;

   return 0;
}
// </Snippet36>

IMPLEMENT_DYNAMIC(CRichEditDlg, CDialog)

CRichEditDlg::CRichEditDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRichEditDlg::IDD, pParent)
{

}

CRichEditDlg::~CRichEditDlg()
{
}

void CRichEditDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CRichEditDlg, CDialog)
END_MESSAGE_MAP()


// CRichEditDlg message handlers

BOOL CRichEditDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CWnd* pParentWnd = this;

   {
// <Snippet6>
      // Declare a local CRichEditCtrl object.
      CRichEditCtrl myRichEditCtrl;

      // Declare a dynamic CRichEditCtrl object.
      CRichEditCtrl* pRichEditCtrl = new CRichEditCtrl;
// </Snippet6>
      delete pRichEditCtrl;
   }

// <Snippet5>
   m_myRichEditCtrl.Create(
      WS_CHILD|WS_VISIBLE|WS_BORDER|ES_MULTILINE,
      CRect(10,10,100,200), pParentWnd, IDD_RICHEDITCTRL);
// </Snippet5>

// <Snippet1>
   // Paste the clipboard data if possible.
   if (m_myRichEditCtrl.CanPaste())
   {
      m_myRichEditCtrl.Paste();
   }
// </Snippet1>

// <Snippet2>
   // Undo the last operation, if possible.
   if (m_myRichEditCtrl.CanUndo())
      m_myRichEditCtrl.Undo();
// </Snippet2>

// <Snippet22>
   // Replace all of the text with the text in the clipboard.
   m_myRichEditCtrl.SetSel(0, -1);
   m_myRichEditCtrl.Paste();
// </Snippet22>

// <Snippet23>
   // Paste the data from the clipboard as text. 
   m_myRichEditCtrl.PasteSpecial(CF_TEXT);
// </Snippet23>

   {
// <Snippet9>
      // Set the selection to be the first occurrence of the 
      // string lpszmyString, if it is found.   
      FINDTEXTEX ft;
      ft.chrg.cpMin = 0;
      ft.chrg.cpMax = 50;
      ft.lpstrText = _T("wallaby");
      long n = m_myRichEditCtrl.FindText(FR_MATCHCASE|FR_WHOLEWORD, &ft);
      if (n != -1)
         m_myRichEditCtrl.SetSel(ft.chrgText);
// </Snippet9>
   }

// <Snippet3>
   // Delete all of the text.
   m_myRichEditCtrl.SetSel(0, -1);
   m_myRichEditCtrl.Clear();
// </Snippet3>

// <Snippet4>
   // Copy all of the text to the clipboard.
   m_myRichEditCtrl.SetSel(0, -1);
   m_myRichEditCtrl.Copy();
// </Snippet4>

// <Snippet7>
   // Delete all of the text and copy it to the clipboard.
   m_myRichEditCtrl.SetSel(0, -1);
   m_myRichEditCtrl.Cut();
// </Snippet7>
// <Snippet8>
   // Clear the undo buffer.
   if (m_myRichEditCtrl.CanUndo())
   {
      m_myRichEditCtrl.EmptyUndoBuffer();
      ASSERT(!m_myRichEditCtrl.CanUndo());
   }
// </Snippet8>

   m_myRichEditCtrl.SetWindowText(_T("Here's some text in the rich edit control."));

   {
// <Snippet10>
      // First obtain a pointer to a printer DC.
      CPageSetupDialog psDlg;
      if (IDOK == psDlg.DoModal())
      {
         CDC* pMyPrinterDC = CDC::FromHandle(psDlg.CreatePrinterDC());

         FORMATRANGE fr;

         // Get the page width and height from the printer.
         long lPageWidth = ::MulDiv(pMyPrinterDC->GetDeviceCaps(PHYSICALWIDTH),
             1440, pMyPrinterDC->GetDeviceCaps(LOGPIXELSX));
         long lPageHeight = ::MulDiv(pMyPrinterDC->GetDeviceCaps(PHYSICALHEIGHT),
             1440, pMyPrinterDC->GetDeviceCaps(LOGPIXELSY));
         CRect rcPage(0, 0, lPageWidth, lPageHeight);

         // Format the text and render it to the printer.
         fr.hdc = pMyPrinterDC->m_hDC;
         fr.hdcTarget = pMyPrinterDC->m_hDC;
         fr.rc = rcPage;
         fr.rcPage = rcPage;
         fr.chrg.cpMin = 0;
         fr.chrg.cpMax = -1;
         m_myRichEditCtrl.FormatRange(&fr, TRUE);

         // Update the display with the new formatting.
         RECT rcClient;
         m_myRichEditCtrl.GetClientRect(&rcClient);
         m_myRichEditCtrl.DisplayBand(&rcClient);   

         pMyPrinterDC->DeleteDC();
      }
// </Snippet10>
   }

   {
// <Snippet11>
      int nFirstVisible = m_myRichEditCtrl.GetFirstVisibleLine();

      // Scroll the rich edit control so that the first visible line
      // is the first line of text.
      if (nFirstVisible > 0)
      {
         m_myRichEditCtrl.LineScroll(-nFirstVisible, 0);
      }
// </Snippet11>
   }

   {
// <Snippet12>
      // The new text of the rich edit control.
      LPCTSTR lpszmyString = _T("Here's some text in our rich edit control!");
      long nLength = (long)_tcslen(lpszmyString);

      // Want the text limit to be at least the size of the new string.
      if (m_myRichEditCtrl.GetLimitText() < nLength)
         m_myRichEditCtrl.LimitText(nLength);

      m_myRichEditCtrl.SetWindowText(lpszmyString);   
// </Snippet12>
   }

   {
// <Snippet13>
      int nLineLength, nLineIndex, nLineCount = m_myRichEditCtrl.GetLineCount();
      CString strText, strLine;

      // Dump every line of text of the rich edit control.
      for (int i = 0; i < nLineCount; i++)
      {
         nLineIndex = m_myRichEditCtrl.LineIndex(i);
         nLineLength = m_myRichEditCtrl.LineLength(nLineIndex);
         m_myRichEditCtrl.GetLine(i, strText.GetBufferSetLength(nLineLength + 1),
            nLineLength);
         strText.SetAt(nLineLength, _T('\0')); // null terminate
         strText.ReleaseBuffer(nLineLength + 1);

         TRACE(_T("line %d: '%s'\r\n"), i, strText);
      }
// </Snippet13>
   }

// <Snippet14>
   // Reset the modified state only if the text has been modified.
   if (m_myRichEditCtrl.GetModify())
      m_myRichEditCtrl.SetModify(FALSE);
// </Snippet14>

   {
// <Snippet15>
      // Set the selection to be all characters after the current selection.
      long nStartChar, nEndChar;

      m_myRichEditCtrl.GetSel(nStartChar, nEndChar); 
      m_myRichEditCtrl.SetSel(nEndChar, -1);
// </Snippet15>
   }

// <Snippet16>
   // Dump the selection text only if it contains at least one text character.
   if (m_myRichEditCtrl.GetSelectionType() & (SEL_TEXT | SEL_MULTICHAR))
   {
      CString strText = m_myRichEditCtrl.GetSelText();

      TRACE(_T("selection text is '%s'.\r\n"), strText);
   }
// </Snippet16>

// <Snippet17>
   // Limit the rich edit controls text to the number of 
   // characters currently in it.
   m_myRichEditCtrl.LimitText(m_myRichEditCtrl.GetTextLength());
// </Snippet17>

// <Snippet18>
   // Show the selection and make it permanent. 
   m_myRichEditCtrl.HideSelection(FALSE, TRUE);
// </Snippet18>

   {
// <Snippet19>
      // Limit the number of characters to be the maximum number visible.

      // Get the text metrics for the edit; needed for the
      // average character width.
      TEXTMETRIC tm;
      CDC* pDC = m_myRichEditCtrl.GetDC();
      pDC->GetTextMetrics(&tm);
      m_myRichEditCtrl.ReleaseDC(pDC);

      CRect r;
      m_myRichEditCtrl.GetRect(&r);
      m_myRichEditCtrl.LimitText(r.Width()/tm.tmAveCharWidth);
// </Snippet19>
   }

   {
// <Snippet20>
      // The index of the char to get information on.
      int nIndex = 11;

      CString strText;

      m_myRichEditCtrl.GetWindowText(strText);
      strText = strText.Mid(nIndex, 1);

      // Dump the index, character and line number.
      TRACE(_T("nIndex = %d, character = %c, line = %d\r\n"),
         nIndex, strText[0], m_myRichEditCtrl.LineFromChar(nIndex));   
// </Snippet20>
   }

   {
// <Snippet21>
      // The string for replacing.
      LPCTSTR lpszmyString = _T("Hello, I'm the new second line.");

      int nBegin, nEnd, nIndex;

      // Replace the second line, if it exists, of the rich edit control
      // with the text lpszmyString.
      nIndex = m_myRichEditCtrl.LineIndex(1);
      if ((nBegin = nIndex) != -1)
      {
         nEnd = nBegin + m_myRichEditCtrl.LineLength(nIndex); 
         m_myRichEditCtrl.SetSel(nBegin, nEnd);
         m_myRichEditCtrl.ReplaceSel(lpszmyString);
      }   
// </Snippet21>
   }

// <Snippet24>
   // Use red as the background color. 
   m_myRichEditCtrl.SetBackgroundColor(FALSE, RGB(255,0, 0));
// </Snippet24>

   {
// <Snippet25>
      CHARFORMAT cf = {0};

      // Modify the default character format so that all new
      // text is striked out and not bold.
      cf.cbSize = sizeof(cf);
      cf.dwMask = CFM_STRIKEOUT|CFM_BOLD;
      cf.dwEffects = CFE_STRIKEOUT;
      m_myRichEditCtrl.SetDefaultCharFormat(cf);

      // Verify the settings are what is expected.
      m_myRichEditCtrl.GetDefaultCharFormat(cf);
      ASSERT((cf.dwMask&(CFM_STRIKEOUT|CFM_BOLD)) == 
         (CFM_STRIKEOUT|CFM_BOLD));
      ASSERT((cf.dwEffects&(CFE_STRIKEOUT|CFE_BOLD)) == CFE_STRIKEOUT);
// </Snippet25>
   }

// <Snippet26>
   // Set the event mask so that the parent gets notified when the text
   // of the rich edit control changes. 
   m_myRichEditCtrl.SetEventMask(m_myRichEditCtrl.GetEventMask() |
      ENM_CHANGE);
// </Snippet26>

// <Snippet27>
   // Add auto horizontal and vertical scrolling. 
   m_myRichEditCtrl.SetOptions(ECOOP_OR, ECO_AUTOVSCROLL | 
      ECO_AUTOHSCROLL);
// </Snippet27>

   {
// <Snippet28>
      PARAFORMAT pf;

      // Modify the paragraph format so that the text is centered. 
      pf.cbSize = sizeof(PARAFORMAT);
      pf.dwMask = PFM_ALIGNMENT;
      pf.wAlignment = PFA_CENTER;
      m_myRichEditCtrl.SetParaFormat(pf);

      // Verify the settings are what is expected.
      m_myRichEditCtrl.GetParaFormat(pf);
      ASSERT(pf.dwMask&PFM_ALIGNMENT);
      ASSERT(pf.wAlignment == PFA_CENTER);
// </Snippet28>
   }

// <Snippet29>
   // Set the rich edit control to be read-only.
   m_myRichEditCtrl.SetReadOnly(TRUE);
   ASSERT(m_myRichEditCtrl.GetStyle() & ES_READONLY);
// </Snippet29>

   {
// <Snippet30>
      CRect r;

      m_myRichEditCtrl.GetRect(&r);

      // Reduce the formatting rect of the rich edit control by
      // 10 pixels on each side.
      if ((r.Width() > 20) && (r.Height() > 20))
      {
         r.DeflateRect(0, 20);
         m_myRichEditCtrl.SetRect(&r);
      }
// </Snippet30>
   }

   {
// <Snippet31>
      CHARFORMAT cf;

      // Modify the selection format so that the selected text is 
      // displayed in bold and not striked out.
      cf.cbSize = sizeof(cf);
      cf.dwMask = CFM_STRIKEOUT|CFM_BOLD;
      cf.dwEffects = CFE_BOLD;
      m_myRichEditCtrl.SetSelectionCharFormat(cf);

      // Verify the settings are what is expected.
      m_myRichEditCtrl.GetSelectionCharFormat(cf);
      ASSERT((cf.dwMask&(CFM_STRIKEOUT|CFM_BOLD)) == 
         (CFM_STRIKEOUT|CFM_BOLD));
      ASSERT((cf.dwEffects&(CFE_STRIKEOUT|CFE_BOLD)) == CFE_BOLD);
// </Snippet31>
   }

   {
// <Snippet32>
      // First obtain a pointer to a printer DC.
      CPageSetupDialog psDlg;
      if (IDOK == psDlg.DoModal())
      {
         CDC* pMyPrinterDC = CDC::FromHandle(psDlg.CreatePrinterDC());

         // Get line width information from the printer.
         long lLineWidth = ::MulDiv(pMyPrinterDC->GetDeviceCaps(PHYSICALWIDTH),
             1440, pMyPrinterDC->GetDeviceCaps(LOGPIXELSX));

         // Set the printer as the target device.
         m_myRichEditCtrl.SetTargetDevice(*pMyPrinterDC, lLineWidth);   

         pMyPrinterDC->DeleteDC();
      }
// </Snippet32>
   }

   {
// <Snippet33>
      CHARFORMAT cf;

      // Modify the word format so that the selected word is 
      // displayed in bold and not striked out.
      cf.cbSize = sizeof(cf);
      cf.dwMask = CFM_STRIKEOUT|CFM_BOLD;
      cf.dwEffects = CFE_BOLD;
      m_myRichEditCtrl.SetWordCharFormat(cf);
// </Snippet33>
   }

   {
// <Snippet35>
      // The example code.

      // The file from which to load the contents of the rich edit control.
      CFile cFile(TEXT("My_RichEdit_InFile.rtf"), CFile::modeRead);
      EDITSTREAM es;

      es.dwCookie = (DWORD) &cFile;
      es.pfnCallback = MyStreamInCallback; 
      m_myRichEditCtrl.StreamIn(SF_RTF, es);
// </Snippet35>
   }

   {
// <Snippet37>
      // The example code.

      // The file to store the contents of the rich edit control.
      CFile cFile(TEXT("My_RichEdit_OutFile.rtf"), 
         CFile::modeCreate|CFile::modeWrite);
      EDITSTREAM es;

      es.dwCookie = (DWORD) &cFile;
      es.pfnCallback = MyStreamOutCallback; 
      m_myRichEditCtrl.StreamOut(SF_RTF, es);
// </Snippet37>
   }

   {
// <Snippet39>
      CRichEditCtrl* pRichEdit = new CRichEditCtrl;
      pRichEdit->Create(WS_CHILD|WS_VISIBLE|WS_BORDER|ES_MULTILINE,
         CRect(10,10,100,200), pParentWnd, 1);
      char sz[256];
      pRichEdit->GetSelText(sz);
// </Snippet39>

      delete pRichEdit;
   }

   return TRUE;  // return TRUE unless you set the focus to a control
}

#pragma warning(pop)