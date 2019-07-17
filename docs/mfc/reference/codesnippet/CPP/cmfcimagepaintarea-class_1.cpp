COLORREF mcolor(RGB(0, 255, 0));
//CBitmap bitmap;
CMFCImageEditorDialog *dialog = new CMFCImageEditorDialog(&bitmap);
CMFCImagePaintArea *wndLargeDrawArea = new CMFCImagePaintArea(dialog);
wndLargeDrawArea->SetColor(mcolor);
wndLargeDrawArea->SetMode(CMFCImagePaintArea::IMAGE_EDIT_MODE_PEN);
wndLargeDrawArea->SetBitmap(&bitmap);