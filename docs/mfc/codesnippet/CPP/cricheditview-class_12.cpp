void CMyRichEditView::AddBullets()
{
   PARAFORMAT2 pf;

   pf.cbSize = sizeof(PARAFORMAT2);
   pf.dwMask = PFM_NUMBERING | PFM_OFFSET;
   pf.wNumbering = PFN_BULLET;
   pf.dxOffset = 10;

   VERIFY(SetParaFormat(pf));
}