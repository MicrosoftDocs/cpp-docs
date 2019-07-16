int nFirstVisible = m_myRichEditCtrl.GetFirstVisibleLine();

// Scroll the rich edit control so that the first visible line
// is the first line of text.
if (nFirstVisible > 0)
{
   m_myRichEditCtrl.LineScroll(-nFirstVisible, 0);
}