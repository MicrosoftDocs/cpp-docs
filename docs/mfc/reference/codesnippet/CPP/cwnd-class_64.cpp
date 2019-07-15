// The following code shows how to subclass the edit control and list box
// controls inside a combo box. It uses WM_CTLCOLOR for subclassing.
// CSuperComboBox represents the combo box
HBRUSH CSuperComboBox::OnCtlColor(CDC *pDC, CWnd *pWnd, UINT nCtlColor)
{
   if (nCtlColor == CTLCOLOR_EDIT)
   {
      //Edit control
      if (m_edit.GetSafeHwnd() == NULL)
         m_edit.SubclassWindow(pWnd->GetSafeHwnd());
   }
   else if (nCtlColor == CTLCOLOR_LISTBOX)
   {
      //ListBox control
      if (m_listbox.GetSafeHwnd() == NULL)
         m_listbox.SubclassWindow(pWnd->GetSafeHwnd());
   }

   HBRUSH hbr = CComboBox::OnCtlColor(pDC, pWnd, nCtlColor);
   return hbr;
}

void CSuperComboBox::OnDestroy()
{
   //unsubclass edit and list box before destruction
   if (m_edit.GetSafeHwnd() != NULL)
      m_edit.UnsubclassWindow();
   if (m_listbox.GetSafeHwnd() != NULL)
      m_listbox.UnsubclassWindow();
   CComboBox::OnDestroy();
}