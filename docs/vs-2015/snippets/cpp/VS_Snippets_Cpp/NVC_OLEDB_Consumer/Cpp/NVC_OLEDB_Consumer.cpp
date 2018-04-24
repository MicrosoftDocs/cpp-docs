// NVC_OLEDB_Consumer.cpp : Defines the entry point for the console application.
//
// Topic                                        Snippet
// CBulkRowset Class                            1
// CCommand::Close                              2
// CDataConnection::operator CDataSource&       3 - 4
// CDataConnection::operator CSession&          5 - 6
// CDataSource::Open                            7
// CDynamicParameterAccessor::GetParamString    9
// CDynamicParameterAccessor::SetParam          8
// CRowset::Insert                              10
// CStreamRowset Class                          11 -  13
// CXMLAccessor Class                           14
// BEGIN_ACCESSOR_MAP                           15
// BEGIN_COLUMN_MAP                             16
// BOOKMARK_ENTRY                               17
// SET_PARAM_TYPE                               18

#include "stdafx.h"
#include "Customer.h"
#include "CustomerTable.h"
#include "artists.h"
#include <atldbcli.h>

// <Snippet1>
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
// </Snippet1>

// <Snippet2>
void DoCCommandTest()
{
   HRESULT hr;

   hr = CoInitialize(NULL);

   CCustomer rs;           // Your CCommand-derived class
   rs.m_BillingID = 6611;  // Open billing ID 6611
   hr = rs.OpenAll();      // (Open also executes the command)
   hr = rs.MoveFirst();    // Move to the first row and print it

   _tprintf_s(_T("First name: %s, Last Name: %s, Customer ID: %d, Postal Code: %s\n"),
      rs.m_ContactFirstName, rs.m_L_Name, rs.m_CustomerID, rs.m_PostalCode);

   // Close the first command execution
   rs.Close();

   rs.m_BillingID = 3333;     // Open billing ID 3333 (a new customer)
   hr = rs.Open();            // (Open also executes the command)
   hr = rs.MoveFirst();       // Move to the first row and print it

   _tprintf_s(_T("First name: %s, Last Name: %s, Customer ID: %d, Postal Code: %s\n"),
      rs.m_ContactFirstName, rs.m_L_Name, rs.m_CustomerID, rs.m_PostalCode);

   // Close the second command execution;
   // Instead of the two following lines
   // you could simply call rs.CloseAll()
   // (a wizard-generated method):
   rs.Close();
   rs.ReleaseCommand();

   CoUninitialize();
}
// </Snippet2>

// <Snippet3>
void SourceFunc(const CDataSource& theSource)
{
   CComVariant var;
   theSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
}
// </Snippet3>

// <Snippet5>
void SessionFunc(const CSession& theSession)
{
   XACTTRANSINFO info = {0};
   HRESULT hr = theSession.GetTransactionInfo(&info);
   wprintf_s(_T("GetTransactionInfo returned %x\n"), hr);
}
// </Snippet5>

void DoCDataConnectionTest()
{
   CoInitialize(NULL);
   WCHAR* szInit = L"Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=Snippet.mdb;Mode=Share Deny None;Extended Properties=\"\";Jet OLEDB:System database=\"\";Jet OLEDB:Registry Path=\"\";Jet OLEDB:Database Password=\"\";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transactions=1;Jet OLEDB:New Database Password=\"\";Jet OLEDB:Create System Database=False;Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don't Copy Locale on Compact=False;Jet OLEDB:Compact Without Replica Repair=False;Jet OLEDB:SFP=False";
   {
// <Snippet4>
   CDataConnection dc;
   dc.Open(szInit);
   SourceFunc(dc);
// </Snippet4>
   }

   {
// <Snippet6>
   CDataConnection dc;
   dc.Open(szInit);
   SessionFunc(dc);
// </Snippet6>
   }
   CoUninitialize();
}

void DoCDataSourceTest()
{
   CoInitialize(NULL);
   HRESULT hr;
   TCHAR* szProgId = _T("Microsoft.Jet.OLEDB.4.0");
   CDataSource m_DataSource;

// <Snippet7>
   CDBPropSet rgDBPropSet[2];  // Declare two property sets;
                               // set properties elsewhere as appropriate.

   hr = m_DataSource.Open(szProgId, rgDBPropSet, 2);
// </Snippet7>

   m_DataSource.Close();

   CoUninitialize();
}

void DoCDynamicParameterAccessorTest()
{
   CoInitialize(NULL);
   LONG m_BillingID = 153;
   CString m_strFirstName(_T("Flanders"));

   CDataSource ds;

   // Open up data link dialogs to create a data source
   ds.Open();

   CSession session;
   session.Open(ds);

// <Snippet8>
   WCHAR* wszSQL = L"SELECT * FROM Authors WHERE State='?' AND LName='?'";

   CCommand<CDynamicParameterAccessor> rs;
   //...
   rs.SetParam<LONG>(1, &m_BillingID);
   rs.SetParam<CString>(2, &m_strFirstName);
// </Snippet8>
   wszSQL;

// <Snippet9>
   CString MyString;
   rs.GetParamString(1, MyString);
// </Snippet9>

   CoUninitialize();
}

void DoCRowsetTest()
{
   CoInitialize(NULL);

// <Snippet10>
   // Access the rowset using the wizard-generated class, CCustomerTable
   CCustomerTable rs;           // Your CTable-derived class

   // Insert a customer
   // Note that for fixed-length fields such as billing ID it isn't necessary
   // to set the length
   rs.m_BillingID = 5002;
   rs.m_dwBillingIDStatus = DBSTATUS_S_OK;

   _tcscpy_s(rs.m_ContactFirstName, sizeof(rs.m_ContactFirstName) / sizeof(TCHAR), 
      _T("Malcolm"));
   rs.m_dwContactFirstNameLength = 7;
   rs.m_dwContactFirstNameStatus = DBSTATUS_S_OK;

   _tcscpy_s(rs.m_L_Name, sizeof(rs.m_L_Name) / sizeof(TCHAR), _T("Reynolds"));
   rs.m_dwL_NameLength = 8;
   rs.m_dwContactFirstNameStatus = DBSTATUS_S_OK;

   rs.m_CustomerID = 2005;
   rs.m_dwCustomerIDStatus = DBSTATUS_S_OK;

   _tcscpy_s(rs.m_PostalCode, sizeof(rs.m_PostalCode) / sizeof(TCHAR), 
      _T("34213-4444"));
   rs.m_dwPostalCodeLength = 10;
   rs.m_dwPostalCodeStatus = DBSTATUS_S_OK;

   HRESULT hr = rs.Insert();
   if (FAILED(hr))
   {
      ATLTRACE(_T("Insert failed: 0x%X\n"), hr);
   }
// </Snippet10>

   CoUninitialize();   
}

void DoCStreamRowsetTest()
{
   {
// <Snippet11>
   CCommand< CAccessor<CCustomerAccessor>, CStreamRowset > myCmd;
// </Snippet11>
   }

   {
// <Snippet12>
   CCommand< CNoAccessor, CStreamRowset > myCmd;
// </Snippet12>

// <Snippet13>
   BYTE pBuf[1024];
   ULONG cbRead = 0;
   myCmd.m_spStream->Read(pBuf, sizeof(pBuf), &cbRead);
// </Snippet13>
   }
}

// <Snippet14>
void DoCXMLAccessorTest()
{
   HRESULT hr = CoInitialize(NULL);

   CDataSource ds;
   CSession ss;

   CTable<CXMLAccessor> rs;

   // The following is an example initialization string:
   hr = ds.OpenFromInitializationString(L"Provider=Microsoft.Jet.OLEDB.4.0;"
      L"User ID=Admin;Data Source=Snippet.mdb;Mode=Share Deny None;"
      L"Extended Properties=\"\";Jet OLEDB:System database=\"\";"
      L"Jet OLEDB:Registry Path=\"\";Jet OLEDB:Database Password=\"\";"
      L"Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;"
      L"Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transactions=1;"
      L"Jet OLEDB:New Database Password=\"\";Jet OLEDB:Create System Database=False;"
      L"Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don't Copy Locale on Compact=False;"
      L"Jet OLEDB:Compact Without Replica Repair=False;Jet OLEDB:SFP=False");

   hr = ss.Open(ds);
   hr = rs.Open(ss, L"Customer"); // Customer is a table name in the database.

   CStringW strColumnInfo;
   rs.GetXMLColumnData(strColumnInfo);
   wprintf_s(L"%s\n", strColumnInfo);

   hr = rs.MoveFirst();
   while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET)
   {
      CStringW strRowData;
      rs.GetXMLRowData(strRowData);
      wprintf_s(L"%s\n", strRowData);
      hr = rs.MoveNext();
   }

   ss.Close();
   ds.Close();
   CoUninitialize();
}
// </Snippet14>

void DoMAPsTest()
{
   HRESULT hr;

   hr = CoInitialize(NULL);

   CArtists rs;        
   rs.m_nAge = 60;
   hr = rs.OpenAll();
   hr = rs.MoveFirst();

   CoUninitialize();
}

enum OLEDBTestType
{
   tstCBulkRowset = 1,
   tstCCommand,
   tstCDataConnection,
   tstCDataSource,
   tstCDynamicParameterAccessor,
   tstCRowset,
   tstCStreamRowset,
   tstCXMLAccessor,
   tstMAPs,

   tstCount
};

typedef void (*fnOLEDBTest)();
fnOLEDBTest afnOLEDBTest[tstCount] = 
{
   NULL,
   &DoCBulkRowsetTest,
   &DoCCommandTest,
   &DoCDataConnectionTest,
   &DoCDataSourceTest,
   &DoCDynamicParameterAccessorTest,
   &DoCRowsetTest,
   &DoCStreamRowsetTest,
   &DoCXMLAccessorTest,
   &DoMAPsTest
};

int _tmain(int argc, _TCHAR* argv[])
{
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(argv);

   _tprintf(_T("What do you want to test?\n")
            _T("%d CBulkRowset\n")
            _T("%d CCommand\n")
            _T("%d CDataConnection\n")
            _T("%d CDataSource\n")
            _T("%d CDynamicParameterAccessor\n")
            _T("%d CRowset\n")
            _T("%d CStreamRowset\n")
            _T("%d CXMLAccessor\n")
            _T("%d MAPs\n")
            _T("%d Quit\n"),
            tstCBulkRowset,
            tstCCommand,
            tstCDataConnection,
            tstCDataSource,
            tstCDynamicParameterAccessor,
            tstCRowset,
            tstCStreamRowset,
            tstCXMLAccessor,
            tstMAPs,
            tstCount);
   OLEDBTestType tst = tstCount;
   _tscanf_s(_T("%d"), &tst);

   if (0 < tst && tst < tstCount)
   {
      afnOLEDBTest[tst]();
      _tprintf(_T("Press enter when done.\n"));
      TCHAR c[2];
      _tscanf_s(_T("%2c"), c, 2);
   }

   _tprintf(_T("Bye!"));

   return 0;
}

