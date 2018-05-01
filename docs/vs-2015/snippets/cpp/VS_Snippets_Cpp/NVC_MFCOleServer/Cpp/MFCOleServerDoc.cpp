// MFCOleServerDoc.cpp : implementation of the CMFCOleServerDoc class
//

#include "stdafx.h"
#include <afxdocob.h>
#include "MFCOleServer.h"

#include "MFCOleServerDoc.h"
#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCOleServerDoc

IMPLEMENT_DYNCREATE(CMFCOleServerDoc, COleServerDoc)

BEGIN_MESSAGE_MAP(CMFCOleServerDoc, COleServerDoc)
END_MESSAGE_MAP()


// CMFCOleServerDoc construction/destruction

CMFCOleServerDoc::CMFCOleServerDoc()
{
   // Use OLE compound files
   EnableCompoundFile();

   // TODO: add one-time construction code here

}

CMFCOleServerDoc::~CMFCOleServerDoc()
{
}

BOOL CMFCOleServerDoc::OnNewDocument()
{
   if (!COleServerDoc::OnNewDocument())
      return FALSE;

   // TODO: add reinitialization code here
   // (SDI documents will reuse this document)

   return TRUE;
}


// CMFCOleServerDoc server implementation

COleServerItem* CMFCOleServerDoc::OnGetEmbeddedItem()
{
   // OnGetEmbeddedItem is called by the framework to get the COleServerItem
   //  that is associated with the document.  It is only called when necessary.

   CMFCOleServerSrvrItem* pItem = new CMFCOleServerSrvrItem(this);
   ASSERT_VALID(pItem);
   return pItem;
}




// CMFCOleServerDoc serialization

void CMFCOleServerDoc::Serialize(CArchive& ar)
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


// CMFCOleServerDoc diagnostics

#ifdef _DEBUG
void CMFCOleServerDoc::AssertValid() const
{
   COleServerDoc::AssertValid();
}

void CMFCOleServerDoc::Dump(CDumpContext& dc) const
{
   COleServerDoc::Dump(dc);
}
#endif //_DEBUG


// CMFCOleServerDoc commands

// <Snippet3>
CDocObjectServer* CMFCOleServerDoc::GetDocObjectServer(LPOLEDOCUMENTSITE pSite)
{
   return new CDocObjectServer(this, pSite);
}
// </Snippet3>