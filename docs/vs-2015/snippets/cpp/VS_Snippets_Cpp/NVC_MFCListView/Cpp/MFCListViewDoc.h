// MFCListViewDoc.h : interface of the CMFCListViewDoc class
//


#pragma once


class CMFCListViewDoc : public CDocument
{
protected: // create from serialization only
   CMFCListViewDoc();
   DECLARE_DYNCREATE(CMFCListViewDoc)

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
   virtual ~CMFCListViewDoc();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnMycommand();
};


