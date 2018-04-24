// MyDatabaseDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDatabase.h"
#include "MyDatabaseDoc.h"
#include "Customer.h"
#include "Courses.h"
#include "Sections.h"

#include <odbcinst.h>


// CMyDatabaseDoc

IMPLEMENT_DYNCREATE(CMyDatabaseDoc, CDocument)

CMyDatabaseDoc::CMyDatabaseDoc()
{
}

BOOL CMyDatabaseDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}

CMyDatabaseDoc::~CMyDatabaseDoc()
{
}


BEGIN_MESSAGE_MAP(CMyDatabaseDoc, CDocument)
   ON_COMMAND(ID_ODBC_CREATEDATASOURCE, &CMyDatabaseDoc::OnOdbcCreatedatasource)
   ON_COMMAND(ID_ODBC_GETDATABASE, &CMyDatabaseDoc::OnGetDatabase)
   ON_COMMAND(ID_ODBC_OPENDATABAS, &CMyDatabaseDoc::OnOdbcOpendatabas)
   ON_COMMAND(ID_ODBC_CLOSEANDOPEN, &CMyDatabaseDoc::OnOdbcCloseandopen)
   ON_COMMAND(ID_ODBC_EXECUTESQL, &CMyDatabaseDoc::OnOdbcExecutesql)
   ON_COMMAND(ID_ODBC_OPENDATABASE, &CMyDatabaseDoc::OnOdbcOpendatabase)
   ON_COMMAND(ID_ODBC_SQLGETINFO, &CMyDatabaseDoc::OnOdbcSqlgetinfo)
   ON_COMMAND(ID_RECORDSET_OPEN, &CMyDatabaseDoc::OnRecordsetOpen)
   ON_COMMAND(ID_RECORDSET_CLOSE, &CMyDatabaseDoc::OnRecordsetClose)
   ON_COMMAND(ID_RECORDSET_DELETE, &CMyDatabaseDoc::OnRecordsetDelete)
   ON_COMMAND(ID_RECORDSET_EDIT, &CMyDatabaseDoc::OnRecordsetEdit)
   ON_COMMAND(ID_RECORDSET_FLUSHRESULTSET, &CMyDatabaseDoc::OnRecordsetFlushresultset)
   ON_COMMAND(ID_RECORDSET_GETFIELDVALUE, &CMyDatabaseDoc::OnRecordsetGetfieldvalue)
   ON_COMMAND(ID_RECORDSET_GETROWSFETCHED, &CMyDatabaseDoc::OnRecordsetGetrowsfetched)
   ON_COMMAND(ID_RECORDSET_ISBOF, &CMyDatabaseDoc::OnRecordsetIsbof)
   ON_COMMAND(ID_RECORDSET_MOVE, &CMyDatabaseDoc::OnRecordsetMove)
   ON_COMMAND(ID_RECORDSET_REQUERY, &CMyDatabaseDoc::OnRecordsetRequery)
   ON_COMMAND(ID_RECORDSET_M, &CMyDatabaseDoc::OnRecordsetM_StrFilter)
   ON_COMMAND(ID_RECORDSET_M32790, &CMyDatabaseDoc::OnRecordsetM_StrSort)
   ON_COMMAND(ID_RECORDSET_NULLSTUFF, &CMyDatabaseDoc::OnRecordsetNullstuff)
   ON_COMMAND(ID_RECORDSET_DOFIELDEXCHANGE, &CMyDatabaseDoc::OnRecordsetDofieldexchange)
   ON_COMMAND(ID_RECORDSET_CDBEXCEPTION, &CMyDatabaseDoc::OnGetRecordset)
   ON_COMMAND(ID_ODBC_AFX, &CMyDatabaseDoc::OnOdbcAfxOdbcCall)
END_MESSAGE_MAP()


// CMyDatabaseDoc diagnostics

#ifdef _DEBUG
void CMyDatabaseDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CMyDatabaseDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CMyDatabaseDoc serialization

void CMyDatabaseDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}
#endif


// CMyDatabaseDoc commands

void CMyDatabaseDoc::OnOdbcCreatedatasource()
{
   if (!::SQLCreateDataSource(AfxGetMainWnd()->m_hWnd, _T("MFC_ODBCTest")))
   {
      DWORD dwErr = 0;
      TCHAR szErr[256];
      WORD cbErr = 0;
      ::SQLInstallerError(1, &dwErr, szErr, 256, &cbErr);
      AfxMessageBox(szErr);
   }
}

void CMyDatabaseDoc::OnGetDatabase()
{
   GetDatabase();
}

// <Snippet10>
// Initialize when needed
CDatabase* CMyDatabaseDoc::GetDatabase()
{
   // Connect the object to a data source
   if(!m_dbCust.IsOpen() && !m_dbCust.OpenEx(NULL))
      return NULL;

   return &m_dbCust;
}
// </Snippet10>

void CMyDatabaseDoc::OnOdbcOpendatabas()
{
   m_dbCust.Close();

// <Snippet11>
   // m_dbCust is a CDatabase object embedded in a CDocument class.

   // Connect the object to a read-only data source where
   // the ODBC connection dialog box will always remain hidden
   m_dbCust.OpenEx(_T("DSN=MFC_ODBCTest;UID=JOES"),
      CDatabase::openReadOnly | CDatabase::noOdbcDialog);
// </Snippet11>
}

void CMyDatabaseDoc::OnOdbcCloseandopen()
{
// <Snippet12>
   // Close the current connection
   m_dbCust.Close();

   // Perhaps connect the object to a
   // different data source
   m_dbCust.OpenEx(_T("DSN=MFC_ODBCTest;UID=JOES"));
// </Snippet12>
}

void CMyDatabaseDoc::OnOdbcExecutesql()
{
   GetDatabase();

// <Snippet13>
   try
   {
      m_dbCust.ExecuteSQL(
         _T("UPDATE Taxes ")
            _T("SET Rate = '36' ")
            _T("WHERE Name = 'Federal'"));
   }
   catch(CDBException* pe)
   {
      // The error code is in pe->m_nRetCode
      pe->ReportError();
      pe->Delete();
   }
// </Snippet13>
}

void CMyDatabaseDoc::OnOdbcOpendatabase()
{
   m_dbCust.Close();

   BOOL bDefault = (AfxMessageBox(_T("Open default?"), MB_YESNO) == IDYES);

// <Snippet14>
   // m_dbCust is a CDatabase object embedded in a CDocument class

   if (bDefault)
   {
      // Connect the object to a data source (no password)
      // the ODBC connection dialog box will always remain hidden
      m_dbCust.Open(_T("MFC_ODBCTest"), FALSE, FALSE, _T("ODBC;UID=JOES"));
   }
   else
   {
      // ...Or, query the user for all connection information
      m_dbCust.Open(NULL);
   }
// </Snippet14>
}

void CMyDatabaseDoc::OnOdbcSqlgetinfo()
{
   int nValue = 0;
   SQLSMALLINT cbValue = 0;
   SQLRETURN nRetCode = 0;
// <Snippet15>
   // Using m_hdbc for a direct ODBC API call.
   // m_dbCust is the CDatabase object; m_hdbc is 
   // its HDBC member variable
// <Snippet41>
   nRetCode = ::SQLGetInfo(m_dbCust.m_hdbc, SQL_ODBC_SQL_CONFORMANCE,
      &nValue, sizeof(nValue), &cbValue);
// </Snippet41>
// </Snippet15>

// <Snippet40>
   AFX_SQL_SYNC(::SQLGetInfo(m_dbCust.m_hdbc, SQL_ODBC_SQL_CONFORMANCE,
      &nValue, sizeof(nValue), &cbValue));
// </Snippet40>
}

void CMyDatabaseDoc::OnRecordsetOpen()
{
   CCustomer rsSnap;
   CCustomer rsLName;
   CCustomer rsDefault;

// <Snippet16>
   // rsSnap, rsLName, and rsDefault are CRecordset or CRecordset-derived 
   // objects

   // Open rs using the default SQL statement, implement bookmarks, and turn 
   // off automatic dirty field checking
   rsSnap.Open(CRecordset::snapshot, NULL, CRecordset::useBookmarks | 
      CRecordset::noDirtyFieldCheck);

   // Pass a complete SELECT statement and open as a dynaset
   rsLName.Open(CRecordset::dynaset, _T("Select L_Name from Customer"));

   // Accept all defaults
   rsDefault.Open();
// </Snippet16>

   rsSnap.Close();
   rsLName.Close();
   rsDefault.Close();
}

void CMyDatabaseDoc::OnRecordsetClose()
{
// <Snippet17>
   // Construct a snapshot object
   CCustomer rsCustSet(NULL);

   if(!rsCustSet.Open())
      return;

   // Use the snapshot ...

   // Close the snapshot
   rsCustSet.Close();

   // Destructor is called when the function exits
// </Snippet17>
}

void CMyDatabaseDoc::OnRecordsetDelete()
{
   GetDatabase();
// <Snippet18>
   // Create a derived CRecordset object
   CCustomer rsCustSet(&m_dbCust);
   rsCustSet.Open();

   if(rsCustSet.IsEOF() || !rsCustSet.CanUpdate() ||
      !rsCustSet.CanTransact())
   {
      return;
   }

   m_dbCust.BeginTrans();

   // Perhaps scroll to a new record...
   // Delete the current record
   rsCustSet.Delete();

   // Finished commands for this transaction
   if(IDYES == AfxMessageBox(_T("Commit transaction?"), MB_YESNO))
      m_dbCust.CommitTrans();
   else // User changed mind
      m_dbCust.Rollback();
// </Snippet18>

   rsCustSet.Close();
}

void CMyDatabaseDoc::OnRecordsetEdit()
{
   GetDatabase();

   CCustomer rsCustSet(&m_dbCust);
   rsCustSet.Open(CRecordset::dynaset, 
      _T("SELECT * FROM Customer WHERE L_Name = 'Jones'"));

// <Snippet20>
   // To edit a record, first set up the edit buffer
   rsCustSet.Edit();

   // Then edit field data members for the record
   rsCustSet.m_BillingID = 2795;
   rsCustSet.m_ContactFirstName = _T("Jones Mfg");

   // Finally, complete the operation
   if(!rsCustSet.Update())
   {
       // Handle the failure to update
       AfxMessageBox(_T("Couldn't update record!"));
   }
// </Snippet20>

   rsCustSet.Close();
}

void CMyDatabaseDoc::OnRecordsetFlushresultset()
{
   GetDatabase();
// <Snippet22>
   // Assume db is an already open CDatabase object
   CCourses rs(&m_dbCust);
   rs.m_strNameParam = _T("History");

   // Get the first result set
   // NOTE: SQL Server requires forwardOnly cursor 
   //       type for multiple rowset returning stored 
   //       procedures
   rs.Open(CRecordset::forwardOnly, 
            _T("{? = CALL GetCourses( ? )}"), 
            CRecordset::readOnly);

   // Loop through all the data in the first result set
   while (!rs.IsEOF())
   {
      CString strFieldValue;
      for(short nIndex = 0; nIndex < rs.GetODBCFieldCount(); nIndex++)
      {
         rs.GetFieldValue(nIndex, strFieldValue);

         // TO DO: Use field value string.
      }
      rs.MoveNext();
   }

   // Retrieve other result sets...
   while(rs.FlushResultSet())
   {
      // must call MoveNext because cursor is invalid
      rs.MoveNext();

      while (!rs.IsEOF())
      {
         CString strFieldValue;
         for(short nIndex = 0; nIndex < rs.GetODBCFieldCount(); nIndex++)
         {
            rs.GetFieldValue(nIndex, strFieldValue);

            // TO DO: Use field value string.
         }
         rs.MoveNext();
      }
   }


   // All result sets have been flushed. Cannot
   // use the cursor, but the output parameter,
   // m_nCountParam, has now been written.
   // Note that m_nCountParam is not valid until
   // CRecordset::FlushResultSet has returned FALSE,
   // indicating no more result sets will be returned.

   // TO DO: Use m_nCountParam

   // Cleanup
   rs.Close();
// </Snippet22>
}

void CMyDatabaseDoc::OnRecordsetGetfieldvalue()
{
// <Snippet23>
   // Create and open a database object;
   // do not load the cursor library
   CDatabase db;
   db.OpenEx(NULL, CDatabase::forceOdbcDialog);

   // Create and open a recordset object
   // directly from CRecordset. Note that a
   // table must exist in a connected database.
   // Use forwardOnly type recordset for best
   // performance, since only MoveNext is required
   CRecordset rs(&db);
   rs.Open(CRecordset::forwardOnly, _T("SELECT * FROM Customer"));

   // Create a CDBVariant object to
   // store field data
   CDBVariant varValue;

   // Loop through the recordset,
   // using GetFieldValue and
   // GetODBCFieldCount to retrieve
   // data in all columns
   short nFields = rs.GetODBCFieldCount();
   while(!rs.IsEOF())
   {
      for(short index = 0; index < nFields; index++)
      {
         rs.GetFieldValue(index, varValue);
         // do something with varValue
      }
      rs.MoveNext();
   }

   rs.Close();
   db.Close();
// </Snippet23>
}

void CMyDatabaseDoc::OnRecordsetGetrowsfetched()
{
   GetDatabase();

// <Snippet24>
   CMultiCustomer rs(&m_dbCust);

   // Set the rowset size
   rs.SetRowsetSize(5);

   // Open the recordset
   rs.Open(CRecordset::dynaset, NULL, CRecordset::useMultiRowFetch);

   // loop through the recordset by rowsets
   while(!rs.IsEOF())
   {
      for(int rowCount = 0; rowCount < (int)rs.GetRowsFetched(); rowCount++)
      {
         // do something
      }

      rs.MoveNext();
   }

   rs.Close();
// </Snippet24>
}

void CMyDatabaseDoc::OnRecordsetIsbof()
{
   GetDatabase();

// <Snippet25>
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
// </Snippet25>

   rsCustSet.Close();
}

void CMyDatabaseDoc::OnRecordsetMove()
{
   GetDatabase();
   CMultiCustomer rs(&m_dbCust);

// <Snippet28>
   // rs is a CRecordset or a CRecordset-derived object

   // Change the rowset size to 5
   rs.SetRowsetSize(5);

   // Open the recordset
   rs.Open(CRecordset::dynaset, NULL, CRecordset::useMultiRowFetch);

   // Move to the first record in the recordset
   rs.MoveFirst();

   // Move to the sixth record
   rs.Move(5);
   // Other equivalent ways to move to the sixth record:
   rs.Move(6, SQL_FETCH_ABSOLUTE);
   rs.SetAbsolutePosition(6);
   // In this case, the sixth record is the first record in the next rowset,
   // so the following are also equivalent:
   rs.MoveFirst();
   rs.Move(1, SQL_FETCH_NEXT);

   rs.MoveFirst();
   rs.MoveNext();
// </Snippet28>

   rs.Close();
}

void CMyDatabaseDoc::OnRecordsetRequery()
{
   GetDatabase();

// <Snippet29>
   CCustomer rsCustSet(&m_dbCust);

   // Open the recordset
   rsCustSet.Open();

   // Use the recordset ...

   // Set the sort order and Requery the recordset
   rsCustSet.m_strSort = _T("L_Name, ContactFirstName");
   if(!rsCustSet.CanRestart())
      return;    // Unable to requery

   if(!rsCustSet.Requery())
      // Requery failed, so take action
      AfxMessageBox(_T("Requery failed!"));
// </Snippet29>

   rsCustSet.Close();
}

void CMyDatabaseDoc::OnRecordsetM_StrFilter()
{
   GetDatabase();

// <Snippet30>
   CCustomer rsCustSet(&m_dbCust);

   // Set the filter
   rsCustSet.m_strFilter = _T("L_Name = 'Flanders'");

   // Run the filtered query
   rsCustSet.Open(CRecordset::snapshot, _T("Customer"));
// </Snippet30>

   rsCustSet.Close();
}

void CMyDatabaseDoc::OnRecordsetM_StrSort()
{
   GetDatabase();

// <Snippet31>
   CCustomer rsCustSet(&m_dbCust);

   // Set the sort string
   rsCustSet.m_strSort = _T("L_Name, ContactFirstName");

   // Run the sorted query
   rsCustSet.Open(CRecordset::snapshot, _T("Customer"));
// </Snippet31>

   rsCustSet.Close();
}

void CMyDatabaseDoc::OnRecordsetNullstuff()
{
   GetDatabase();

   CCustomer rsCustSet(&m_dbCust);
   rsCustSet.Open();

   rsCustSet.AddNew();
   rsCustSet.NullStuff();

   // Finally, complete the operation
   if(!rsCustSet.Update())
   {
       // Handle the failure to update
       AfxMessageBox(_T("Couldn't update record!"));
   }

   rsCustSet.Close();
}

void CMyDatabaseDoc::OnRecordsetDofieldexchange()
{
   GetDatabase();

   CSections rsSect(&m_dbCust);
   rsSect.Open();

   rsSect.Close();
}

void CMyDatabaseDoc::OnGetRecordset()
{
   CRecordset* pSet = GetRecordset();
   if (NULL != pSet)
   {
      pSet->Close();
      delete pSet;
   }
}

// <Snippet36>
CRecordset* CMyDatabaseDoc::GetRecordset()
{
   CCourses* pSet = new CCourses(&m_dbCust);
   try
   {
      pSet->Open();
   }
   catch(CDBException* e)
   {
      AfxMessageBox(e->m_strError, MB_ICONEXCLAMATION);
      // Delete the incomplete recordset object
      delete pSet;
      pSet = NULL;
      e->Delete();
   }
   return pSet;
}
// </Snippet36>

void CMyDatabaseDoc::OnOdbcAfxOdbcCall()
{
   GetDatabase();
   CCustomer rsCustSet(&m_dbCust);
   CRecordset* prs = &rsCustSet;
   CString strTableName(_T("Customer"));

// <Snippet39>
   RETCODE nRetCode;

   AFX_ODBC_CALL(::SQLColumns(prs->m_hstmt, (SQLTCHAR*)NULL, SQL_NTS, (SQLTCHAR*)NULL,
      SQL_NTS, (SQLTCHAR*)strTableName.GetBuffer(), SQL_NTS, (SQLTCHAR*)NULL, SQL_NTS));

   if (!prs->Check(nRetCode))
   {
      AfxThrowDBException(nRetCode, prs->m_pDatabase, prs->m_hstmt);
      TRACE(_T("SQLColumns failed\n"));
   }
// </Snippet39>

   rsCustSet.Close();
}
