// Crap2View.h : interface of the CMyRecordView class
//


#pragma once

class CCustomer;

class CMyRecordView : public CRecordView
{
protected: // create from serialization only
	CMyRecordView();
	DECLARE_DYNCREATE(CMyRecordView)

public:
	enum{ IDD = IDD_MYRECVIEW_FORM };
	CCustomer* m_pSet;

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMyRecordView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};