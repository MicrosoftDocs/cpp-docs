void CCSplitButton_s2Dlg::OnXRecalcsize()
{
   // If the child control changes size, call RecalcSize() to change
   // the size of the pager control accordingly.
   m_pager.RecalcSize();
   MessageBox(_T("The pager control size has been recalculated."));
}
