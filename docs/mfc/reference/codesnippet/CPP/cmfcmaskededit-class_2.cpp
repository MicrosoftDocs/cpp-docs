BOOL CPage4::OnInitDialog()
{
   CMFCPropertyPage::OnInitDialog();

   // Mask 1: phone number
   m_wndMaskEdit1.EnableMask(_T(" ddd  ddd dddd"), // The mask string
                             _T("(___) ___-____"), // Literal, "_" char = character entry
                             _T(' '));             // Default char
   m_wndMaskEdit1.SetValidChars(NULL);             // Valid string characters
   m_wndMaskEdit1.SetWindowText(_T("(123) 123-1212"));

   // Mask 2: State, Zip Code
   m_wndMaskEdit2.EnableMask(_T("       cc       ddddd-dddd"), // The mask string
                             _T("State: __, Zip: _____-____"), // Literal, "_" char = character entry
                             _T(' '));                         // Backspace replace char
   m_wndMaskEdit2.SetValidChars(NULL);                         // Valid string characters
   m_wndMaskEdit2.SetWindowText(_T("State: NY, Zip: 12345-6789"));
   // Mask 3: serial code
   m_wndMaskEdit3.EnableMask(_T("     AAAA AAAA AAAA AAAA"), // The mask string
                             _T("S/N: ____-____-____-____"), // Literal, "_" char = character entry
                             _T('_'));                       // Backspace replace char
   m_wndMaskEdit3.SetValidChars(NULL);                       // Valid string characters
   m_wndMaskEdit3.SetWindowText(_T("S/N: FPR5-5678-1234-8765"));

   // Mask 4: 0xFFFF
   m_wndMaskEdit4.EnableMask(_T("  AAAA"),                     // The mask string
                             _T("0x____"),                     // Literal, "_" char = character entry
                             _T('_'));                         // Backspace replace char
   m_wndMaskEdit4.SetValidChars(_T("1234567890ABCDEFabcdef")); // Valid string characters
   m_wndMaskEdit4.SetWindowText(_T("0x01AF"));

   // Mask 5: digits only
   m_wndMaskEdit5.DisableMask();                   // Don't use the mask
   m_wndMaskEdit5.SetValidChars(_T("1234567890")); // Valid string characters
   m_wndMaskEdit5.SetWindowText(_T("1234567890"));

   return TRUE; // return TRUE unless you set the focus to a control
}

void CPage4::OnButtonGet()
{
   m_wndMaskEdit1.GetWindowText(m_strValue1);
   m_wndMaskEdit2.GetWindowText(m_strValue2);
   m_wndMaskEdit3.GetWindowText(m_strValue3);
   m_wndMaskEdit4.GetWindowText(m_strValue4);
   m_wndMaskEdit5.GetWindowText(m_strValue5);
   UpdateData(FALSE);
}