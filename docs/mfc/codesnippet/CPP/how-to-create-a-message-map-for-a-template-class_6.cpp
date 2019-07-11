void CSyncListBox_Test(CWnd* pParentWnd)
{
   CSyncListBox<CStringList> ctlStringLB;
   ctlStringLB.Create(WS_CHILD | WS_VISIBLE | LBS_STANDARD | WS_HSCROLL,
      CRect(10, 10, 200, 200), pParentWnd, IDC_MYSYNCLISTBOX);

   // Create a CStringList object and add a few strings
   CStringList stringList;
   stringList.AddTail(_T("A"));
   stringList.AddTail(_T("B"));
   stringList.AddTail(_T("C"));

   // Send a message to the list box control to synchronize its
   // contents with the string list
   ctlStringLB.SendMessage(LBN_SYNCHRONIZE, 0, (LPARAM)& stringList);

   // Verify the contents of the list box by printing out its contents
   INT nCount = ctlStringLB.GetCount();
   for (INT n = 0; n < nCount; n++)
   {
      TCHAR szText[256];
      ctlStringLB.GetText(n, szText);
      TRACE(_T("%s\n"), szText);
   }
}