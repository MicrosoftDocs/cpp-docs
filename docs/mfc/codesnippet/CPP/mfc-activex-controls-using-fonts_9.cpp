CMyAxFontCtrl::CMyAxFontCtrl()
   : m_fontHeading(&m_xFontNotification)
{
   InitializeIIDs(&IID_DNVC_MFC_AxFont, &IID_DNVC_MFC_AxFontEvents);
}