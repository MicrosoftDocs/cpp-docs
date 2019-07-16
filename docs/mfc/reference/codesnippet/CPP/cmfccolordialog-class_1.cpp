// COLORREF m_Color
CMFCColorDialog dlg(m_Color, 0, this);
dlg.SetCurrentColor(RGB(0, 255, 0));
dlg.SetNewColor(RGB(0, 0, 255));
// set the red, green, and blue components of a selected
// color on the two property pages of the color dialog
dlg.SetPageOne(255, 0, 0);
dlg.SetPageTwo(0, 255, 0);