   // Open a recordset; first record is current
   // Open a recordset; first record is current
   CCustomer rsCustSet(&m_dbCust);
   rsCustSet.Open();

   if(rsCustSet.IsBOF())
      return;
      // The recordset is empty

   // Scroll to the end of the recordset, past
   // the last record, so no record is current
   while (!rsCustSet.IsEOF())
      rsCustSet.MoveNext();

   // Move to the last record
   rsCustSet.MoveLast();

   // Scroll to beginning of the recordset, before
   // the first record, so no record is current
   while(!rsCustSet.IsBOF())
      rsCustSet.MovePrev();

   // First record is current again
   rsCustSet.MoveFirst();