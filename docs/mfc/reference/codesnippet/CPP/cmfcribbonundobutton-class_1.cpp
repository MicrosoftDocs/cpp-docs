// The third parameter is the zero-based index in the image list of the parent
// object for the button's small image.
// The fourth parameter is the zero-based index in the image list of the parent object
// for the of button's large image.
CMFCRibbonUndoButton *pBtn1 = new CMFCRibbonUndoButton(ID_RIBBON_OBTN_1, _T("Undo"), 0, 0);
for (int i = 0; i < 20; i++)
{
   CString str;
   str.Format(_T("Action %d"), i + 1);
   pBtn1->AddUndoAction(str);
}