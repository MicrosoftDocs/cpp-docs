// CToolBarCtrl_s1Doc.cpp : implementation of the CCToolBarCtrl_s1Doc class
//

#include "stdafx.h"
#include "CToolBarCtrl_s1.h"

#include "CToolBarCtrl_s1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCToolBarCtrl_s1Doc

IMPLEMENT_DYNCREATE(CCToolBarCtrl_s1Doc, CDocument)

BEGIN_MESSAGE_MAP(CCToolBarCtrl_s1Doc, CDocument)
END_MESSAGE_MAP()


// CCToolBarCtrl_s1Doc construction/destruction

CCToolBarCtrl_s1Doc::CCToolBarCtrl_s1Doc()
{
	// TODO: add one-time construction code here

}

CCToolBarCtrl_s1Doc::~CCToolBarCtrl_s1Doc()
{
}

BOOL CCToolBarCtrl_s1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CCToolBarCtrl_s1Doc serialization

void CCToolBarCtrl_s1Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CCToolBarCtrl_s1Doc diagnostics

#ifdef _DEBUG
void CCToolBarCtrl_s1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCToolBarCtrl_s1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCToolBarCtrl_s1Doc commands
