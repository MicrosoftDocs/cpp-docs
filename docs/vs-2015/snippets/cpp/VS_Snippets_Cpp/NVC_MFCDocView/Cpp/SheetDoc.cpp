// SheetDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "SheetDoc.h"


// CPSheetDoc

IMPLEMENT_DYNCREATE(CPSheetDoc, CDocument)

CPSheetDoc::CPSheetDoc()
   : m_Color(RGB(0xff, 0, 0))
   , m_LastActivePage(0)
   , m_ShapeSelection(IDC_RECTANGLE)
   , m_NumObjects(1)
{
}

BOOL CPSheetDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CPSheetDoc::~CPSheetDoc()
{
}


BEGIN_MESSAGE_MAP(CPSheetDoc, CDocument)
END_MESSAGE_MAP()


// CPSheetDoc diagnostics

#ifdef _DEBUG
void CPSheetDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CPSheetDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CPSheetDoc serialization

void CPSheetDoc::Serialize(CArchive& ar)
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


// CPSheetDoc commands
