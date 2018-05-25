// MyDatabaseDoc.cpp : implementation of the CMyDaoDatabaseDoc class
//

#include "stdafx.h"

#include "NVC_MFCDatabase.h"

#include "MyDaoDatabaseDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMyDaoDatabaseDoc

IMPLEMENT_DYNCREATE(CMyDaoDatabaseDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyDaoDatabaseDoc, CDocument)
   ON_COMMAND(ID_DAO_ADDNEW, &CMyDaoDatabaseDoc::OnDaoAddnew)
   ON_COMMAND(ID_DAO_FIND, &CMyDaoDatabaseDoc::OnDaoFind)
   ON_COMMAND(ID_DAO_ISFIELDNULL, &CMyDaoDatabaseDoc::OnDaoIsfieldnull)
   ON_COMMAND(ID_DAO_SETFIELDDIRTY, &CMyDaoDatabaseDoc::OnDaoSetfielddirty)
   ON_COMMAND(ID_DAO_SETFIELDNULL, &CMyDaoDatabaseDoc::OnDaoSetfieldnull)
   ON_COMMAND(ID_DAO_TABLEDEF, &CMyDaoDatabaseDoc::OnDaoTabledef)
   ON_COMMAND(ID_DAO_CDBEXCEPTION, &CMyDaoDatabaseDoc::OnGetRecordset)
END_MESSAGE_MAP()


// CMyDaoDatabaseDoc construction/destruction

CMyDaoDatabaseDoc::CMyDaoDatabaseDoc()
{
	// TODO: add one-time construction code here

}

CMyDaoDatabaseDoc::~CMyDaoDatabaseDoc()
{
}

void CMyDaoDatabaseDoc::EnsureDatabase()
{
   if (!m_db.IsOpen())
   {
      m_db.Open(_T("Snippet.mdb"));
   }
}

BOOL CMyDaoDatabaseDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}




// CMyDaoDatabaseDoc serialization

void CMyDaoDatabaseDoc::Serialize(CArchive& ar)
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


// CMyDaoDatabaseDoc diagnostics

#ifdef _DEBUG
void CMyDaoDatabaseDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyDaoDatabaseDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMyDaoDatabaseDoc commands

CCustSet::CCustSet(CDaoDatabase* pDatabase)
   : CDaoRecordset(pDatabase)
{
   m_EmployeeID = 0;
   m_LastName = L"";
   m_Age = 0;

   m_nFields = 5;

   m_strParam = L"";
}

// <Snippet2>
void CCustSet::DoFieldExchange(CDaoFieldExchange* pFX)
{
   pFX->SetFieldType(CDaoFieldExchange::param);
   DFX_Text(pFX, _T("Param"), m_strParam);
   pFX->SetFieldType(CDaoFieldExchange::outputColumn);
   DFX_Short(pFX, _T("EmployeeID"), m_EmployeeID);
   DFX_Text(pFX, _T("LastName"), m_LastName);
   DFX_Short(pFX, _T("Age"), m_Age);
   DFX_DateTime(pFX, _T("hire_date"), m_hire_date);
   DFX_DateTime(pFX, _T("termination_date"), m_termination_date);

   CDaoRecordset::DoFieldExchange(pFX);
}
// </Snippet2>

// <Snippet4>
CString CCustSet::GetDefaultDBName()
{
   return _T("c:\\mydir\\datasrc.mdb");
}
// </Snippet4>

void CMyDaoDatabaseDoc::OnDaoAddnew()
{
   EnsureDatabase();

   CCustSet rs(&m_db);
   rs.Open(dbOpenDynaset, _T("SELECT * From Employees"));
   rs.AddNew();
   rs.m_EmployeeID = 54;
   rs.m_LastName = _T("Crumhorn");
   rs.m_Age = 77;
   rs.m_hire_date.SetDate(2000, 5, 23);
   rs.m_termination_date.SetDate(2003, 5, 23);
   rs.Update();
// <Snippet1>
   rs.SetBookmark(rs.GetLastModifiedBookmark());
// </Snippet1>
   rs.Close();
}

void CMyDaoDatabaseDoc::OnDaoFind()
{
   EnsureDatabase();

   CCustSet rs(&m_db);
   rs.Open(dbOpenDynaset, _T("SELECT * FROM Employees"));
// <Snippet3>
   rs.Find(AFX_DAO_FIRST, _T("EmployeeID = 7"));
   rs.Find(AFX_DAO_NEXT, _T("LastName = 'Jones'"));
// </Snippet3>
   rs.Close();
}

void CMyDaoDatabaseDoc::OnDaoIsfieldnull()
{
   EnsureDatabase();

   COleVariant varNewVal((long)34);

   CCustSet rs(&m_db);
   rs.Open(dbOpenDynaset, _T("SELECT * FROM Employees"));
// <Snippet5>
   COleVariant varValue;
   void* pField = &(rs.m_Age);
   int nField = 2;

   // this code is inefficient because data
   // must be retrieved for both IsFieldNull
   // and GetFieldValue
   if (!rs.IsFieldNull(pField))
      rs.GetFieldValue(nField, varValue);

   // this code is more efficient
   rs.GetFieldValue(nField, varValue);
   if (varValue.vt == VT_NULL)
      varValue.Attach(varNewVal);// do something
// </Snippet5>
   rs.Close();
}

void CCustSet::DirtyFields()
{
// <Snippet6>
   SetFieldDirty(NULL);
// </Snippet6>

// <Snippet7>
   SetFieldDirty(&m_strParam);
// </Snippet7>
}
void CMyDaoDatabaseDoc::OnDaoSetfielddirty()
{
   EnsureDatabase();

   CCustSet rs(&m_db);
   rs.Open(dbOpenDynaset, _T("SELECT * FROM Employees"));

   rs.DirtyFields();

   rs.Update();

   rs.Close();
}

void CCustSet::NullFields()
{
// <Snippet8>
   SetFieldNull(NULL);      
// </Snippet8>
}

void CMyDaoDatabaseDoc::OnDaoSetfieldnull()
{
   EnsureDatabase();

   CCustSet rs(&m_db);
   rs.Open(dbOpenDynaset, _T("SELECT * FROM Employees"));

   rs.Edit();

   rs.NullFields();

   rs.Update();

   rs.Close();
}

void CMyDaoDatabaseDoc::OnDaoTabledef()
{
   EnsureDatabase();

   CDaoTableDef myTableDef(&m_db);
   myTableDef.Open(_T("Employees"));

// <Snippet34>
   myTableDef.SetValidationRule(_T("termination_date > hire_date"));
// </Snippet34>

   CCustSet rs(&m_db);
   rs.Open(&myTableDef);
   rs.AddNew();
   rs.m_EmployeeID = 77;
   rs.m_LastName = _T("Cladworthy");
   rs.m_Age = 90;
   rs.m_hire_date.SetDate(2000, 5, 23);
   rs.m_termination_date.SetDate(1999, 5, 23);
   try
   {
      rs.Update();
   }
   catch (CException* pe)
   {
      pe->ReportError();
      pe->Delete();
   }
   rs.Close();

   myTableDef.Close();
}

void CMyDaoDatabaseDoc::OnGetRecordset()
{
   CDaoRecordset* pSet = GetRecordset();
   if (NULL != pSet)
   {
      pSet->Close();
      delete pSet;
   }
}

// <Snippet37>
CDaoRecordset* CMyDaoDatabaseDoc::GetRecordset()
{
   CDaoRecordset* pSet = new CCustSet(&m_db);
   try
   {
      pSet->Open();
   }
   catch(CDaoException* pe)
   {
      AfxMessageBox(pe->m_pErrorInfo->m_strDescription, MB_ICONEXCLAMATION);
      // Delete the incomplete recordset object
      delete pSet;
      pSet = NULL;
      pe->Delete();
   }
   return pSet;
}
// </Snippet37>