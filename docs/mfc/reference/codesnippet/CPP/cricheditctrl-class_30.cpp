CRect r;

m_myRichEditCtrl.GetRect(&r);

// Reduce the formatting rect of the rich edit control by
// 10 pixels on each side.
if ((r.Width() > 20) && (r.Height() > 20))
{
   r.DeflateRect(0, 20);
   m_myRichEditCtrl.SetRect(&r);
}