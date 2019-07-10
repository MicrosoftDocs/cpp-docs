// Show the Color dialog with all the default settings.
CColorDialog dlg1;
dlg1.DoModal();

// Show the fully opened Color dialog with red as the selected color.
CColorDialog dlg2(RGB(255, 0, 0), CC_FULLOPEN);
dlg2.DoModal();