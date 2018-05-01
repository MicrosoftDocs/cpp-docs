// FontDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "FontDoc.h"


// CFontDoc

IMPLEMENT_DYNCREATE(CFontDoc, CDocument)

CFontDoc::CFontDoc()
{
}

BOOL CFontDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CFontDoc::~CFontDoc()
{
}


BEGIN_MESSAGE_MAP(CFontDoc, CDocument)
END_MESSAGE_MAP()


// CFontDoc diagnostics

#ifdef _DEBUG
void CFontDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CFontDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CFontDoc serialization

void CFontDoc::Serialize(CArchive& ar)
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


// CFontDoc commands
