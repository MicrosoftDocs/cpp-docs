CMFCAutoHideButton *autoHideButton = new CMFCAutoHideButton();
CDockablePane cPane;
// CMFCAutoHideBar* pParentBar
if (!autoHideButton->Create(pParentBar, &cPane, CBRS_ALIGN_LEFT))
{
   return 0;
}
autoHideButton->ShowAttachedWindow(true);
autoHideButton->ShowButton(true);