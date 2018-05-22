// MyRichEditDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyRichEditDoc.h"


// CMyRichEditDoc

IMPLEMENT_DYNCREATE(CMyRichEditDoc, CDocument)

CMyRichEditDoc::CMyRichEditDoc()
{
}

BOOL CMyRichEditDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CMyRichEditDoc::~CMyRichEditDoc()
{
}


BEGIN_MESSAGE_MAP(CMyRichEditDoc, CDocument)
END_MESSAGE_MAP()


// CMyRichEditDoc diagnostics

#ifdef _DEBUG
void CMyRichEditDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CMyRichEditDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CMyRichEditDoc serialization

void CMyRichEditDoc::Serialize(CArchive& ar)
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


// CMyRichEditDoc commands
