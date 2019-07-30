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