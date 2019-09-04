// The code below uses CColorDialog::m_cc data member to
// customize the settings of CColorDialog. The CColorDialog will
// be shown as full open and with red as the selected color.
CColorDialog dlg;
dlg.m_cc.Flags |= CC_FULLOPEN | CC_RGBINIT;
dlg.m_cc.rgbResult = RGB(255, 0, 0);
dlg.DoModal();