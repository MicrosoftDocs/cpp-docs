// CMyODListBox is my owner-drawn list box derived from CListBox. This
// example moves the caret down one item on the down key and up one item
// on the up key. The list box control was created with the following
// code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
int CMyODListBox::VKeyToItem(UINT nKey, UINT nIndex)
{
   // On key up, move the caret up one item.
   if ((nKey == VK_UP) && (nIndex > 0))
   {
      SetCaretIndex(nIndex - 1);
   }
   // On key down, move the caret down one item.
   else if ((nKey == VK_DOWN) && (nIndex < (UINT)GetCount()))
   {
      SetCaretIndex(nIndex + 1);
   }

   // Do not perform any default processing.
   return -2;
}