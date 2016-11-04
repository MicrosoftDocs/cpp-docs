class CCustomerData
{
public:
   char m_szField1[50];

   BEGIN_COLUMN_MAP(CCustomerData)
     COLUMN_ENTRY(1, m_szField1)
   END_COLUMN_MAP()
};

void DoCBulkRowsetTest()
{
   CoInitialize(NULL);

   CCommand<CAccessor<CCustomerData>, CBulkRowset > cmd;
   CDataSource ds;

   // Open up data link dialogs to create a data source
   ds.Open();

   CSession session;
   session.Open(ds);
   // Could call SetRows() here if you want to fetch 
   // more than 10 HROWs at a time.
   cmd.Open(session, L"Select * from customer");
   cmd.MoveFirst();
   // Note that the CBulkRowset by default fetched 10 HROWs at a time 
   // so that the MoveNext call will not have to make the GetNextRows 
   // call to get the second HROW because it has already been fetched 
   //by the MoveFirst() call above.
   cmd.MoveNext();

   cmd.Close();
   session.Close();
   ds.Close();
}