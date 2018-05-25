// MFCMessageHandlingDoc.h : interface of the CMFCMessageHandlingDoc class
//


#pragma once


class CMFCMessageHandlingDoc : public CDocument
{
protected: // create from serialization only
   CMFCMessageHandlingDoc();
   DECLARE_DYNCREATE(CMFCMessageHandlingDoc)

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
   virtual ~CMFCMessageHandlingDoc();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
};


