   BYTE pBuf[1024];
   ULONG cbRead = 0;
   myCmd.m_spStream->Read(pBuf, sizeof(pBuf), &cbRead);