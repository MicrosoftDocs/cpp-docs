int nFirstVisible = m_myEdit.GetFirstVisibleLine();

// Scroll the edit control so that the first visible line
// is the first line of text.
if (nFirstVisible > 0)
{
   m_myEdit.LineScroll(-nFirstVisible, 0);
}