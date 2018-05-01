// CToolBarCtrl_s1Doc.h : interface of the CCToolBarCtrl_s1Doc class
//


#pragma once


class CCToolBarCtrl_s1Doc : public CDocument
{
protected: // create from serialization only
	CCToolBarCtrl_s1Doc();
	DECLARE_DYNCREATE(CCToolBarCtrl_s1Doc)

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
	virtual ~CCToolBarCtrl_s1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


