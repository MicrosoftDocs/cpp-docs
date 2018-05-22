// MyScrollDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyScrollDoc.h"


// CMyScrollDoc

IMPLEMENT_DYNCREATE(CMyScrollDoc, CDocument)

CMyScrollDoc::CMyScrollDoc()
{
}

BOOL CMyScrollDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CMyScrollDoc::~CMyScrollDoc()
{
}


BEGIN_MESSAGE_MAP(CMyScrollDoc, CDocument)
END_MESSAGE_MAP()


// CMyScrollDoc diagnostics

#ifdef _DEBUG
void CMyScrollDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CMyScrollDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CMyScrollDoc serialization

void CMyScrollDoc::Serialize(CArchive& ar)
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


// CMyScrollDoc commands

CSize CMyScrollDoc::GetMyDocSize()
{
   return CSize(200, 200);
}