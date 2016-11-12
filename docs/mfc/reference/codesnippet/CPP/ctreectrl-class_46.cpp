// Sort the item in reverse alphabetical order.
int CALLBACK MyCompareProc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort)
{
   // lParamSort contains a pointer to the tree control.
   // The lParam of an item is just its handle, 
   // as specified with SetItemData
   CTreeCtrl* pmyTreeCtrl = (CTreeCtrl*)lParamSort;
   CString strItem1 = pmyTreeCtrl->GetItemText((HTREEITEM)lParam1);
   CString strItem2 = pmyTreeCtrl->GetItemText((HTREEITEM)lParam2);

   return strItem2.Compare(strItem1);
}