
// NVC_MFC_CTaskDialogDoc.cpp : implementation of the CNVC_MFC_CTaskDialogDoc class
//

#include "stdafx.h"
#include "NVC_MFC_CTaskDialog.h"

#include "NVC_MFC_CTaskDialogDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNVC_MFC_CTaskDialogDoc

IMPLEMENT_DYNCREATE(CNVC_MFC_CTaskDialogDoc, CDocument)

BEGIN_MESSAGE_MAP(CNVC_MFC_CTaskDialogDoc, CDocument)
END_MESSAGE_MAP()


// CNVC_MFC_CTaskDialogDoc construction/destruction

CNVC_MFC_CTaskDialogDoc::CNVC_MFC_CTaskDialogDoc()
{
	// TODO: add one-time construction code here

}

CNVC_MFC_CTaskDialogDoc::~CNVC_MFC_CTaskDialogDoc()
{
}

BOOL CNVC_MFC_CTaskDialogDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CNVC_MFC_CTaskDialogDoc serialization

void CNVC_MFC_CTaskDialogDoc::Serialize(CArchive& ar)
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


// CNVC_MFC_CTaskDialogDoc diagnostics

#ifdef _DEBUG
void CNVC_MFC_CTaskDialogDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CNVC_MFC_CTaskDialogDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CNVC_MFC_CTaskDialogDoc commands
