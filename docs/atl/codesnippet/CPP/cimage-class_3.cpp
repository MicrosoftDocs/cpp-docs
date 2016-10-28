   DWORD adwBitmasks[3] = { 0x0000000f, 0x000000f0, 0x00000f00 };
   m_myImage.CreateEx(100, 100, 16, BI_BITFIELDS, adwBitmasks, 0);