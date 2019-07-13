void CCSplitButton_s2Dlg::OnXColor()
{
   COLORREF originalColor;
   //  Set color to red.
   originalColor = m_pager.SetBkColor(RGB(255, 0, 0));
   if (m_pager.GetBkColor() != RGB(255, 0, 0))
   {
      MessageBox(_T("Control did not return RED as the previous color."));
   }
   // The following statement is one way to restore the color.
   // m_pager.SetBkColor( originalColor );
}
