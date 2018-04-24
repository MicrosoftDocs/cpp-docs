// MFCListViewDoc.cpp : implementation of the CMFCListViewDoc class
//

#include "stdafx.h"
#include "MFCListView.h"

#include "MFCListViewDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCListViewDoc

IMPLEMENT_DYNCREATE(CMFCListViewDoc, CDocument)

#ifndef _ATL_ENABLE_PTM_WARNING
// <Snippet14>
BEGIN_MESSAGE_MAP(CMFCListViewDoc, CDocument)
   ON_COMMAND(ID_MYCOMMAND, OnMycommand)
END_MESSAGE_MAP()
// </Snippet14>
#else
// <Snippet11>
BEGIN_MESSAGE_MAP(CMFCListViewDoc, CDocument)
   ON_COMMAND(ID_MYCOMMAND, &CMFCListViewDoc::OnMycommand)
END_MESSAGE_MAP()
// </Snippet11>
#endif

// CMFCListViewDoc construction/destruction

CMFCListViewDoc::CMFCListViewDoc()
{
   // TODO: add one-time construction code here

}

CMFCListViewDoc::~CMFCListViewDoc()
{
}

BOOL CMFCListViewDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;

   // TODO: add reinitialization code here
   // (SDI documents will reuse this document)

   return TRUE;
}




// CMFCListViewDoc serialization

void CMFCListViewDoc::Serialize(CArchive& ar)
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


// CMFCListViewDoc diagnostics

#ifdef _DEBUG
void CMFCListViewDoc::AssertValid() const
{
   CDocument::AssertValid();
}

void CMFCListViewDoc::Dump(CDumpContext& dc) const
{
   CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFCListViewDoc commands

void CMFCListViewDoc::OnMycommand()
{
   // TODO: Add your command handler code here
}
