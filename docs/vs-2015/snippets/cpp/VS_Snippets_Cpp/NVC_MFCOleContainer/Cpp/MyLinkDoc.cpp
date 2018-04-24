// MyLinkDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCOleContainer.h"
#include "MyLinkDoc.h"


// CMyLinkDoc

IMPLEMENT_DYNCREATE(CMyLinkDoc, COleLinkingDoc)

CMyLinkDoc::CMyLinkDoc()
{
}

BOOL CMyLinkDoc::OnNewDocument()
{
	if (!COleLinkingDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

CMyLinkDoc::~CMyLinkDoc()
{
}


BEGIN_MESSAGE_MAP(CMyLinkDoc, COleLinkingDoc)
END_MESSAGE_MAP()


// CMyLinkDoc diagnostics

#ifdef _DEBUG
void CMyLinkDoc::AssertValid() const
{
	COleLinkingDoc::AssertValid();
}

#ifndef _WIN32_WCE
void CMyLinkDoc::Dump(CDumpContext& dc) const
{
	COleLinkingDoc::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CMyLinkDoc serialization

void CMyLinkDoc::Serialize(CArchive& ar)
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
#endif


// CMyLinkDoc commands
