if (!IsConvertingVBX())
{
   PX_Font(pPX, _T("Font"), *m_pMyFont, &DefaultFont);
}
else
{
   PX_String(pPX, _T("FontName"), tempString, DefaultName);
   m_pMyFont->m_pFont->put_Name(tempString.AllocSysString());
   PX_Bool(pPX, _T("FontUnderline"), tempBool, DefaultValue);
   m_pMyFont->m_pFont->put_Underline(tempBool);
}