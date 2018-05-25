// MyDoc.h : interface of the CMyDoc class
//


#pragma once


class CMyDoc : public CDocument
{
protected: // create from serialization only
   CMyDoc();
   DECLARE_DYNCREATE(CMyDoc)

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
   virtual ~CMyDoc();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
};


