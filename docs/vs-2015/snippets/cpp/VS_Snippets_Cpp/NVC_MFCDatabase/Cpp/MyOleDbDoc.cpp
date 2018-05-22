// OleDbViewDoc.cpp : implementation of the CMyOleDbDoc class
//

#include "stdafx.h"
#include "NVC_MFCDatabase.h"

#include "OleDbViewSet.h"
#include "MyOleDbDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyOleDbDoc

IMPLEMENT_DYNCREATE(CMyOleDbDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyOleDbDoc, CDocument)
   ON_COMMAND(ID_OLEDB_GETROWSET, &CMyOleDbDoc::OnOledbGetrowset)
END_MESSAGE_MAP()


// CMyOleDbDoc construction/destruction

CMyOleDbDoc::CMyOleDbDoc()
{
	// TODO: add one-time construction code here

}

CMyOleDbDoc::~CMyOleDbDoc()
{
}

BOOL CMyOleDbDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CMyOleDbDoc diagnostics

#ifdef _DEBUG
void CMyOleDbDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyOleDbDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMyOleDbDoc commands

void CMyOleDbDoc::OnOledbGetrowset()
{
// <Snippet38>
   CFrameWnd* pFrame = (CFrameWnd*)AfxGetMainWnd();
   COleDBRecordView* pView = (COleDBRecordView*)pFrame->GetActiveView();

   // CProductAccessor is a user-defined accessor class
   CRowset<CAccessor<CProductAccessor>>* pRowSet = 
      (CRowset<CAccessor<CProductAccessor>>*)pView->OnGetRowset();   
// </Snippet38>
   pRowSet->MoveFirst();
}
