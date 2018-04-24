
// NVC_MFC_CTaskDialogDoc.h : interface of the CNVC_MFC_CTaskDialogDoc class
//


#pragma once


class CNVC_MFC_CTaskDialogDoc : public CDocument
{
protected: // create from serialization only
	CNVC_MFC_CTaskDialogDoc();
	DECLARE_DYNCREATE(CNVC_MFC_CTaskDialogDoc)

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
	virtual ~CNVC_MFC_CTaskDialogDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


