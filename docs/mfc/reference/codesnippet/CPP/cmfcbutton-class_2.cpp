// int m_iImage
// IDB_BTN1_32, IDB_BTN1_HOT_32, IDB_BTN1, IDB_BTN1_HOT are int macros that are #define.
if (m_iImage == 1)
{
   m_Button.SetImage((HBITMAP)NULL);
}
else
{
   m_Button.SetImage(IDB_BTN1_32, IDB_BTN1_HOT_32);
}