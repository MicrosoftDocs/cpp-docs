// MyDaoDatabaseDoc.h : interface of the CMyDaoDatabaseDoc class
//


#pragma once

class CCustSet : public CDaoRecordset
{
public:
   CCustSet(CDaoDatabase* pDatabase = NULL);
public:
   virtual void DoFieldExchange(CDaoFieldExchange* pFX);

   void DirtyFields();
   void NullFields();

   short m_EmployeeID;
   CStringW m_LastName;
   short m_Age;
   COleDateTime m_hire_date;
   COleDateTime m_termination_date;

   CStringW m_strParam;
public:
   virtual CString GetDefaultDBName();
};

class CMyDaoDatabaseDoc : public CDocument
{
protected: // create from serialization only
	CMyDaoDatabaseDoc();
	DECLARE_DYNCREATE(CMyDaoDatabaseDoc)

// Attributes
public:

// Operations
public:
   void EnsureDatabase();
   CDaoDatabase m_db;

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CMyDaoDatabaseDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnDaoAddnew();
public:
   afx_msg void OnDaoFind();
public:
   afx_msg void OnDaoIsfieldnull();
public:
   afx_msg void OnDaoSetfielddirty();
public:
   afx_msg void OnDaoSetfieldnull();
public:
   afx_msg void OnDaoTabledef();
public:
   afx_msg void OnGetRecordset();
   CDaoRecordset* GetRecordset();
};


