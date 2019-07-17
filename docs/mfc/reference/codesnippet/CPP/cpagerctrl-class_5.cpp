
void CCSplitButton_s2Dlg::OnXIsbuttoninvisible()
{
   BOOL bLeft = m_pager.IsButtonInvisible(PGB_TOPORLEFT);
   BOOL bRight = m_pager.IsButtonInvisible(PGB_BOTTOMORRIGHT);
   CString str;
   str.Format(_T("The left button is%s visible; the right button is%s visible."),
              (bLeft ? _T(" not") : _T("")),
              (bRight ? _T(" not") : _T("")));
   MessageBox(str);
}