// UserDoc.h : interface of the CUserDoc class
//


#pragma once


class CUserDoc : public CDocument
{
protected: // create from serialization only
   CUserDoc();
   DECLARE_DYNCREATE(CUserDoc)

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
   virtual ~CUserDoc();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
};


