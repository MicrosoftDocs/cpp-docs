// OleDbViewView.h : interface of the CMyOleDbView class
//


#pragma once

class CProduct;

class CMyOleDbView : public COleDBRecordView
{
protected: // create from serialization only
	CMyOleDbView();
	DECLARE_DYNCREATE(CMyOleDbView)

public:
	enum{ IDD = IDD_MYOLEDB_FORM };
	CProduct* m_pSet;

// Attributes
public:
	CMyOleDbDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual CRowset<>* OnGetRowset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CMyOleDbView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};
