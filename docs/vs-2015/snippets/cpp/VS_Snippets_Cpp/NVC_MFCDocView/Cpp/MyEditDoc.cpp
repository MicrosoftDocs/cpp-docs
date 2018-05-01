// MyEditDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyEditDoc.h"


// CMyEditDoc

IMPLEMENT_DYNCREATE(CMyEditDoc, CDocument)

CMyEditDoc::CMyEditDoc()
{
}

BOOL CMyEditDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CMyEditDoc::~CMyEditDoc()
{
}


BEGIN_MESSAGE_MAP(CMyEditDoc, CDocument)
END_MESSAGE_MAP()


// CMyEditDoc diagnostics

#ifdef _DEBUG
void CMyEditDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CMyEditDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CMyEditDoc serialization

void CMyEditDoc::Serialize(CArchive& ar)
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


// CMyEditDoc commands
