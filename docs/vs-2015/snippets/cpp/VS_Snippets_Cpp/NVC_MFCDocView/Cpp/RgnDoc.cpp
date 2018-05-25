// RgnDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "RgnDoc.h"


// CRgnDoc

IMPLEMENT_DYNCREATE(CRgnDoc, CDocument)

CRgnDoc::CRgnDoc()
{
}

BOOL CRgnDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CRgnDoc::~CRgnDoc()
{
}


BEGIN_MESSAGE_MAP(CRgnDoc, CDocument)
END_MESSAGE_MAP()


// CRgnDoc diagnostics

#ifdef _DEBUG
void CRgnDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CRgnDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CRgnDoc serialization

void CRgnDoc::Serialize(CArchive& ar)
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


// CRgnDoc commands
