int nType;
int nLength = m_wndSBC.GetTextLength(0, &nType);

switch (nType)
{
case 0:
   // Text is drawn with a border to appear lower than the
   // plane of the status bar
   break;
case SBT_NOBORDERS:
   // text is drawn without borders
   break;
case SBT_OWNERDRAW:
   // Text is drawn by the parent window
   break;
case SBT_POPOUT:
   // Text is drawn with a border to appear higher than the
   // plane of the status bar
   break;
}