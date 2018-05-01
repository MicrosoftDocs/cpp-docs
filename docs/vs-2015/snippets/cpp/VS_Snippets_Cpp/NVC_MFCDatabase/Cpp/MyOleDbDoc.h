// OleDbViewDoc.h : interface of the CMyOleDbDoc class
//


#pragma once
#include "OleDbViewSet.h"


class CMyOleDbDoc : public CDocument
{
protected: // create from serialization only
	CMyOleDbDoc();
	DECLARE_DYNCREATE(CMyOleDbDoc)

// Attributes
public:
	CProduct m_Product;

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();

// Implementation
public:
	virtual ~CMyOleDbDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnOledbGetrowset();
};


