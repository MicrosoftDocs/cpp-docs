// CMyDoc.h : interface of the CMyDoc class
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
   LPTSTR GetData();

// Overrides
public:
   virtual BOOL OnNewDocument();
   virtual void Serialize(CArchive& ar);
   virtual void OnUpdateFileSave(CCmdUI* pCmdUI);

// Implementation
public:
   virtual ~CMyDoc();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:
   bool m_bModified;

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnFileSendMail();
public:
   afx_msg void OnUpdateFileSendMail(CCmdUI *pCmdUI);
};


