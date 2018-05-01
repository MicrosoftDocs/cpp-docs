// OleContainerDoc.h : interface of the COleContainerDoc class
//


#pragma once


class COleContainerDoc : public COleDocument
{
protected: // create from serialization only
	COleContainerDoc();
	DECLARE_DYNCREATE(COleContainerDoc)

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
	virtual ~COleContainerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnOleGetnextclientitem();
public:
   afx_msg void OnOleGetnextitem();
};


