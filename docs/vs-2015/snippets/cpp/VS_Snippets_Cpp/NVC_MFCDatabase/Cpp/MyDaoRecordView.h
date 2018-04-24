// Crap2View.h : interface of the CMyRecordView class
//


#pragma once

class CCustSet;

class CMyDaoRecordView : public CDaoRecordView
{
protected: // create from serialization only
	CMyDaoRecordView();
	DECLARE_DYNCREATE(CMyDaoRecordView)

public:
	enum{ IDD = IDD_MYRECVIEW_FORM };
	CCustSet* m_pSet;

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual CDaoRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMyDaoRecordView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};