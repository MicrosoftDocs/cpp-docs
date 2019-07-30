void CMyRichEditView::OnCharUnderline()
{
   CHARFORMAT2 cf;
   cf = GetCharFormatSelection();

   if (!(cf.dwMask & CFM_UNDERLINE) || !(cf.dwEffects & CFE_UNDERLINE))
      cf.dwEffects = CFE_UNDERLINE;
   else
      cf.dwEffects = 0;

   cf.dwMask = CFM_UNDERLINE;
   SetCharFormat(cf);
}