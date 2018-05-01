// CMFCAutomationDoc.h : interface of the CCMFCAutomationDoc class
//


#pragma once


class CCMFCAutomationDoc : public CDocument
{
protected: // create from serialization only
	CCMFCAutomationDoc();
	DECLARE_DYNCREATE(CCMFCAutomationDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CCMFCAutomationDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

	// Generated OLE dispatch map functions

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};


