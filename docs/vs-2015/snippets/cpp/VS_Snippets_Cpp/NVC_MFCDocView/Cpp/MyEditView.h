#pragma once


// CMyEditView view

class CMyEditView : public CEditView
{
	DECLARE_DYNCREATE(CMyEditView)

protected:
	CMyEditView();           // protected constructor used by dynamic creation
	virtual ~CMyEditView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
   virtual void OnInitialUpdate();
public:
   afx_msg void OnEditSetlimittext();
public:
   afx_msg void OnEditSettabstops();
protected:
   virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
};


