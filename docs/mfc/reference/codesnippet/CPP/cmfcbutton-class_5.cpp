//int m_iBorderStyle
switch (m_iBorderStyle)
{
case 0:
   m_Button.m_nFlatStyle = CMFCButton::BUTTONSTYLE_FLAT;
   break;

case 1:
   m_Button.m_nFlatStyle = CMFCButton::BUTTONSTYLE_SEMIFLAT;
   break;

case 2:
   m_Button.m_nFlatStyle = CMFCButton::BUTTONSTYLE_3D;
}