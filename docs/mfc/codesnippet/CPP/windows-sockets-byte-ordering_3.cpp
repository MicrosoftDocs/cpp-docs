void Message::Serialize(CArchive &ar)
{
   if (ar.IsStoring())
   {
      ar << (DWORD)htonl(m_lMagicNumber);
      ar << (WORD)htons(m_nCommand);
      ar << (WORD)htons(m_nParam1);
      ar << (DWORD)htonl(m_lParam2);
   }
   else
   {
      WORD w;
      DWORD dw;
      ar >> dw;
      m_lMagicNumber = ntohl((long)dw);
      ar >> w;
      m_nCommand = ntohs((short)w);
      ar >> w;
      m_nParam1 = ntohs((short)w);
      ar >> dw;
      m_lParam2 = ntohl((long)dw);
   }
}