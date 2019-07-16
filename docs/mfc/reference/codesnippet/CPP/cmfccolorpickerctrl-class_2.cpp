// CPalette m_palSys
// set the type of the color picker control
m_wndLum.SetType(CMFCColorPickerCtrl::LUMINANCE);
m_wndLum.SetPalette(&m_palSys);
// set the color, hue, luminance and saturation of the color picker control
m_wndLum.SetColor(RGB(0, 255, 0));
m_wndLum.SetHue(0.5);
m_wndLum.SetLuminance(2.5);
m_wndLum.SetLuminanceBarWidth(10);
m_wndLum.SetSaturation(0.5);