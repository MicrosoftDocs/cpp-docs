// specify the font type
// BOOL m_bTrueType: true font type
// BOOL m_bRaster: raster font type
// BOOL m_bDeviceFont: device font type
int nFontType = 0;

if (m_bTrueType)
{
   nFontType |= TRUETYPE_FONTTYPE;
}

if (m_bRaster)
{
   nFontType |= RASTER_FONTTYPE;
}

if (m_bDeviceFont)
{
   nFontType |= DEVICE_FONTTYPE;
}

CWaitCursor wait;
m_wndFont.Setup(nFontType);