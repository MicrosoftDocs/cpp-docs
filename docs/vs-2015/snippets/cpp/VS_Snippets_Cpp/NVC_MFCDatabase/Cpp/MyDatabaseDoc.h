#pragma once

// CMyDatabaseDoc document

class CMyDatabaseDoc : public CDocument
{
	DECLARE_DYNCREATE(CMyDatabaseDoc)

public:
	CMyDatabaseDoc();
	virtual ~CMyDatabaseDoc();

// <Snippet9>
// This fragment is taken from the declaration for CMyDatabaseDoc
// CMyDatabaseDoc is derived from CDocument.
public:
   // Declare a CDatabase embedded in the document
   CDatabase m_dbCust;
// </Snippet9>

#ifndef _WIN32_WCE
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnOdbcCreatedatasource();
public:
   afx_msg void OnGetDatabase();
   CDatabase* GetDatabase();
public:
   afx_msg void OnOdbcOpendatabas();
public:
   afx_msg void OnOdbcCloseandopen();
public:
   afx_msg void OnOdbcExecutesql();
public:
   afx_msg void OnOdbcOpendatabase();
public:
   afx_msg void OnOdbcSqlgetinfo();
public:
   afx_msg void OnRecordsetOpen();
public:
   afx_msg void OnRecordsetClose();
public:
   afx_msg void OnRecordsetDelete();
public:
   afx_msg void OnRecordsetEdit();
public:
   afx_msg void OnRecordsetFlushresultset();
public:
   afx_msg void OnRecordsetGetfieldvalue();
public:
   afx_msg void OnRecordsetGetrowsfetched();
public:
   afx_msg void OnRecordsetIsbof();
public:
   afx_msg void OnRecordsetMove();
public:
   afx_msg void OnRecordsetRequery();
public:
   afx_msg void OnRecordsetM_StrFilter();
public:
   afx_msg void OnRecordsetM_StrSort();
public:
   afx_msg void OnRecordsetNullstuff();
public:
   afx_msg void OnRecordsetDofieldexchange();
public:
   afx_msg void OnGetRecordset();
   CRecordset* GetRecordset();
public:
   afx_msg void OnOdbcAfxOdbcCall();
};
