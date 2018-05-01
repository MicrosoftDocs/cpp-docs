#pragma once

// CExampleDoc document

class CExampleDoc : public CDocument
{
	DECLARE_DYNCREATE(CExampleDoc)

public:
	CExampleDoc();
	virtual ~CExampleDoc();
#ifndef _WIN32_WCE
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual BOOL OnNewDocument();

   void InitMyDocument() {}

	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnEditClearAll();
public:
   afx_msg void OnDocDefaultname();
public:
   afx_msg void OnRepaintAllViews();
public:
   virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
   virtual void DeleteContents();
public:
   afx_msg void OnUpdateAllViews();
};
