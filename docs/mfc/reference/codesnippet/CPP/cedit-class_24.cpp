// Flag indicating whether to redraw the edit control.
bool fRedraw = TRUE;

CRect r;

m_myEdit.GetRect(&r);

// Reduce the formatting rect of the edit control by
// 10 pixels on each side.
if ((r.Width() > 20) && (r.Height() > 20))
{
   r.DeflateRect(10, 10);

   if (fRedraw)
      m_myEdit.SetRect(&r);
   else
      m_myEdit.SetRectNP(&r);
}