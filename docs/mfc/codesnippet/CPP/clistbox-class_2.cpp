// CMyODListBox is my owner-drawn list box derived from CListBox. This
// example moves the caret down one item on a numeric key and up one item
// on an alphabetic key. The list box control was created with the
// following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
int CMyODListBox::CharToItem(UINT nChar, UINT nIndex)
{
   // On a numeric key, move the caret up one item.
   if (isdigit(nChar) && (nIndex > 0))
   {
      SetCaretIndex(nIndex - 1);
   }
   // On an alphabetic key, move the caret down one item.
   else if (isalpha(nChar) && (nIndex < (UINT)GetCount()))
   {
      SetCaretIndex(nIndex + 1);
   }

   // Do not perform any default processing.
   return -1;
}