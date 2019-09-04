void PacketSerialize(long nPackets, CArchive &arData, CArchive &arAck)
{
   BYTE bValue = 0;
   WORD nCopies = 0;

   if (arData.IsStoring())
   {
      CString strText;
      errno_t err;
      unsigned int number;

      for (int p = 0; p < nPackets; p++)
      {
         err = rand_s(&number);
         // if (err == 0)...
         bValue = (BYTE)(number % 256);

         err = rand_s(&number);
         // if (err == 0)...
         nCopies = (WORD)(number % 32000);

         // Send header information
         arData << bValue << nCopies;
         for (int c = 0; c < nCopies; c++)
         {
            // Send data
            arData << bValue;
         }

         strText.Format(_T("Sender sent packet %d of %d (Value = %d, Copies = %d)"),
                        p + 1, nPackets, (int)bValue, nCopies);

         // Send receipt string
         arData << strText;
         arData.Flush();

         // Receive acknowledgment
         arAck >> strText;
         // display it
         DisplayMessage(strText);
      }
   }
   else
   {
      CString strText;
      BYTE bCheck;

      for (int p = 0; p < nPackets; p++)
      {
         // Receive header information
         arData >> bCheck >> nCopies;
         for (int c = 0; c < nCopies; c++)
         {
            // Receive data
            arData >> bValue;
            if (bCheck != bValue)
            {
               AfxMessageBox(_T("Packet Failure"));
            }
         }

         // Receive receipt string and display it
         arData >> strText;
         DisplayMessage(strText);

         strText.Format(_T("Recipient received packet %d of %d (Value = %d, Copies = %d)"),
                        p + 1, nPackets, (int)bValue, nCopies);

         // Send acknowledgment
         arAck << strText;
         arAck.Flush();
      }
   }
}