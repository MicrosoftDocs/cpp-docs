// EditDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CEdit.h"
#include "EditDlg.h"


// CEditDlg dialog

IMPLEMENT_DYNAMIC(CEditDlg, CDialog)

CEditDlg::CEditDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CEditDlg::IDD, pParent)
{

}

CEditDlg::~CEditDlg()
{
}

void CEditDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Control(pDX, IDC_EDITDLGEDIT, m_myEdit);
}


BEGIN_MESSAGE_MAP(CEditDlg, CDialog)
END_MESSAGE_MAP()


// CEditDlg message handlers

BOOL CEditDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet1>
   // Declare a local CEdit object.
   CEdit myEdit;

   // Declare a dynamic CEdit object.
   CEdit* pmyEdit = new CEdit;
// </Snippet1>

   delete pmyEdit;
   pmyEdit = NULL;

// <Snippet2>
   // dynamically create an edit control
   CEdit* pEdit = new CEdit;
   pEdit->Create(ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_BORDER,
      CRect(10, 10, 100, 100), this, 1);
// </Snippet2>

   delete pEdit;
   pEdit = NULL;

   m_myEdit.SetWindowText(_T("Some text!"));
   
// <Snippet5>
   // Copy all of the text to the clipboard.
   m_myEdit.SetSel(0, -1);
   m_myEdit.Copy();
// </Snippet5>

// <Snippet4>
   // Delete all of the text.
   m_myEdit.SetSel(0, -1);
   m_myEdit.Clear();
// </Snippet4>

   m_myEdit.SetWindowText(_T("Some more text!"));

// <Snippet6>
   // Delete all of the text and copy it to the clipboard.
   m_myEdit.SetSel(0, -1);
   m_myEdit.Cut();
// </Snippet6>

// <Snippet7>
   // Clear the undo buffer.
   if (m_myEdit.CanUndo())
   {
      m_myEdit.EmptyUndoBuffer();
      ASSERT(!m_myEdit.CanUndo());
   }
// </Snippet7>

   m_myEdit.SetWindowText(_T("This is a long line that I hope will have at least ")
                     _T("one line break inserted in it due to word wrap!!!\n"));

   {
// <Snippet8>
      CString strText;

      // Add soft line-break breaks.
      m_myEdit.FmtLines(TRUE);

      // Dump the text of the edit control.
      m_myEdit.GetWindowText(strText);
      AFXDUMP(strText);

      // Remove soft line-break breaks.
      m_myEdit.FmtLines(FALSE);
// </Snippet8>
   }

   {
// <Snippet12>
      int i, nLineCount = m_myEdit.GetLineCount();
      CString strText, strLine;
      // Dump every line of text of the edit control.
      for (i=0; i < nLineCount; i++)
      {
         // length of line i:
         int len = m_myEdit.LineLength(m_myEdit.LineIndex(i));
         m_myEdit.GetLine(i, strText.GetBuffer(len), len);
         strText.ReleaseBuffer(len);
         strLine.Format(_T("line %d: '%s'\n"), i, strText);
         AFXDUMP(strLine);
      }
// </Snippet12>
   }

// <Snippet9>
   int nFirstVisible = m_myEdit.GetFirstVisibleLine();

   // Scroll the edit control so that the first visible line
   // is the first line of text.
   if (nFirstVisible > 0)
   {
      m_myEdit.LineScroll(-nFirstVisible, 0);
   }
// </Snippet9>

   {
// <Snippet10>
      HLOCAL h = m_myEdit.GetHandle();
      LPCTSTR lpszText = (LPCTSTR) ::LocalLock(h);

      // Dump the text of the edit control.
      AFXDUMP(lpszText);

      ::LocalUnlock(h);
// </Snippet10>
   }

   {
// <Snippet11>
      CString strText(_T("I'm an edit control!"));
      UINT nLength = strText.GetLength() * sizeof(TCHAR);

      // Want the text limit to be at least the size of the new string.
      if (m_myEdit.GetLimitText() < nLength)
         m_myEdit.SetLimitText(nLength);

      m_myEdit.SetWindowText(strText);
// </Snippet11>
   }

// <Snippet13>
   // Reset the modified state only if my edit has been modified.
   if (m_myEdit.GetModify())
      m_myEdit.SetModify(FALSE);
// </Snippet13>

// <Snippet14>
   // Turn on the password mode.
   m_myEdit.SetPasswordChar('*');
   ASSERT(m_myEdit.GetStyle() & ES_PASSWORD);
   ASSERT(m_myEdit.GetPasswordChar() == '*');
// </Snippet14>

// <Snippet16>
   // Turn off the password mode.
   m_myEdit.SetPasswordChar(0);
   ASSERT(!(m_myEdit.GetStyle() & ES_PASSWORD));
// </Snippet16>

// <Snippet15>
   // Set the selection to be all characters after the current selection.
   DWORD dwSel = m_myEdit.GetSel();
   m_myEdit.SetSel(HIWORD(dwSel), -1);
// </Snippet15>

   {
// <Snippet17>
      // Limit the number of characters to be the maximum number visible.

      // Get the text metrics for the edit; needed for the
      // average character width.
      TEXTMETRIC tm;
      CDC* pDC = m_myEdit.GetDC();
      pDC->GetTextMetrics(&tm);
      m_myEdit.ReleaseDC(pDC);

      CRect r;
      m_myEdit.GetRect(&r);
      m_myEdit.LimitText(r.Width()/tm.tmAveCharWidth);
// </Snippet17>
   }

   m_myEdit.SetWindowText(_T("Here's another long bit of text that's going to ")
                     _T("create multiple lines in our edit box."));

   {
// <Snippet18>
      // The index of the char to get information on.
      int nIndex = 4;
      CString strText;

      m_myEdit.GetWindowText(strText);
      strText = strText.Mid(nIndex, 1);

      // Get the text extent of the character.
      CDC* pDC = m_myEdit.GetDC();
      CSize sz = pDC->GetTextExtent(strText);
      m_myEdit.ReleaseDC(pDC);

      CPoint pt = m_myEdit.PosFromChar(nIndex);

      // Dump the index, character, line number, and character bounds.
      TRACE(_T("nIndex = %d, character = %c, line = %d, bounds = ")
         _T("{%d, %d, %d, %d}\r\n"),
         nIndex, strText[0], m_myEdit.LineFromChar(nIndex),
         pt.x /* left */, pt.y /* top */,
         pt.x+sz.cx /* right */, pt.y+sz.cy /* bottom */);
// </Snippet18>
   }

   {
// <Snippet19>
      // The string for replacing.
      CString strString(_T("Hi, we're the replacements."));
      int nBegin, nEnd;

      // Replace the second line, if it exists, of the edit control
      // with the text strString.
      if ((nBegin = m_myEdit.LineIndex(1)) != -1)
      {
         nEnd = nBegin + m_myEdit.LineLength(nBegin); 
         m_myEdit.SetSel(nBegin, nEnd);
         m_myEdit.ReplaceSel(strString);
      }	
// </Snippet19>
   }

// <Snippet20>
   // Replace all of the text with the text in the clipboard.
   m_myEdit.SetSel(0, -1);
   m_myEdit.Paste();
// </Snippet20>

// <Snippet21>
   // Set text to display in the edit box.
   m_myEdit.SetCueBanner(L"Enter your text here");
// </Snippet21>

   {
// <Snippet22>
      // The string to set in the edit control.
      CString strString(_T("George Frideric"));

      // Initialize the new local handle.
      size_t cbSize = (strString.GetLength() + 1) * sizeof(TCHAR);
      HLOCAL h = ::LocalAlloc(LHND, cbSize);
      LPTSTR lpszText = (LPTSTR) ::LocalLock(h);
      _tcsncpy_s(lpszText, cbSize / sizeof(TCHAR), strString, _TRUNCATE);
      ::LocalUnlock(h);

      // Free the current text handle of the edit control.
      ::LocalFree(m_myEdit.GetHandle());

      // Set the new text handle.
      m_myEdit.SetHandle(h);
// </Snippet22>
   }

// <Snippet23>
   // Set the edit control to be read-only.
   m_myEdit.SetReadOnly(TRUE);
   ASSERT(m_myEdit.GetStyle() & ES_READONLY);
// </Snippet23>

   m_myEdit.SetReadOnly(FALSE);

   {
// <Snippet24>
      // Flag indicating whether to redraw the edit control.
      bool fRedraw = TRUE;

      CRect r;

      m_myEdit.GetRect(&r);

      // Reduce the formatting rect of the edit control by
      // 10 pixels on each side.
      if ((r.Width() > 20) && (r.Height() > 20))
      {
         r.DeflateRect(10, 10);

         if (fRedraw)
            m_myEdit.SetRect(&r);
         else
            m_myEdit.SetRectNP(&r);
      }
// </Snippet24>
   }

   m_myEdit.SetWindowTextW(_T("This text should be undone!"));

// <Snippet25>
   // Undo the last operation, if possible.
   if (m_myEdit.CanUndo())
      m_myEdit.Undo();
// </Snippet25>

   return TRUE;  // return TRUE unless you set the focus to a control
}

BEGIN_MESSAGE_MAP(CMyEdit, CEdit)
   ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// <Snippet3>
// CMyEdit inherits from CEdit
void CMyEdit::OnLButtonDown(UINT nFlags, CPoint point)
{
   int n = CharFromPos(point);
   int nLineIndex = HIWORD(n);
   int nCharIndex = LOWORD(n);
   TRACE(_T("nLineIndex = %d, nCharIndex = %d\r\n"), nLineIndex, nCharIndex);

   CEdit::OnLButtonDown(nFlags, point);
}
// </Snippet3>