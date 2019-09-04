void CMdiView::OnInitialUpdate()
{
   CView::OnInitialUpdate();

   m_Edit.Create(ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_BORDER,
                 CRect(10, 10, 100, 100), this, IDC_TTEDIT);
   EnableToolTips(TRUE); // enable tool tips for view
}

//Notification handler
BOOL CMdiView::OnToolTipNotify(UINT id, NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(id);
   UNREFERENCED_PARAMETER(pResult);

   // need to handle both ANSI and UNICODE versions of the message
   TOOLTIPTEXTA *pTTTA = (TOOLTIPTEXTA*)pNMHDR;
   TOOLTIPTEXTW *pTTTW = (TOOLTIPTEXTW*)pNMHDR;
   CStringA strTipText;
   UINT_PTR nID = pNMHDR->idFrom;
   if (pNMHDR->code == TTN_NEEDTEXTA && (pTTTA->uFlags & TTF_IDISHWND) ||
       pNMHDR->code == TTN_NEEDTEXTW && (pTTTW->uFlags & TTF_IDISHWND))
   {
      // idFrom is actually the HWND of the tool
      nID = ::GetDlgCtrlID((HWND)nID);
   }

   if (nID != 0) // will be zero on a separator
      strTipText.Format("Control ID = %d", nID);

   if (pNMHDR->code == TTN_NEEDTEXTA)
   {
      strncpy_s(pTTTA->szText, sizeof(pTTTA->szText), strTipText,
                strTipText.GetLength() + 1);
   }
   else
   {
      ::MultiByteToWideChar(CP_ACP, 0, strTipText, strTipText.GetLength() + 1,
                            pTTTW->szText, sizeof(pTTTW->szText) / (sizeof pTTTW->szText[0]));
   }

   return TRUE; // message was handled
}