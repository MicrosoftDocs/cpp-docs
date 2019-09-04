struct Message
{
   long m_lMagicNumber;
   short m_nCommand;
   short m_nParam1;
   long m_lParam2;

   void Serialize(CArchive &ar);
};