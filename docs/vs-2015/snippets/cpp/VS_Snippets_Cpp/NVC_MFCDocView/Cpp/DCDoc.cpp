// DCDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "DCDoc.h"


// CDCDoc

IMPLEMENT_DYNCREATE(CDCDoc, CDocument)

CDCDoc::CDCDoc()
{
}

BOOL CDCDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;
   return TRUE;
}

CDCDoc::~CDCDoc()
{
}


BEGIN_MESSAGE_MAP(CDCDoc, CDocument)
END_MESSAGE_MAP()


// CDCDoc diagnostics

#ifdef _DEBUG
void CDCDoc::AssertValid() const
{
   CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CDCDoc::Dump(CDumpContext& dc) const
{
   CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CDCDoc serialization

void CDCDoc::Serialize(CArchive& ar)
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


// CDCDoc commands
