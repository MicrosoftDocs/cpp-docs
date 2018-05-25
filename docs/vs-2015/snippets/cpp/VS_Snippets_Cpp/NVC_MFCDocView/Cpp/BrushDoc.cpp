// BrushDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "BrushDoc.h"


// CBrushDoc

IMPLEMENT_DYNCREATE(CBrushDoc, CDocument)

CBrushDoc::CBrushDoc()
{
}

BOOL CBrushDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;
   return TRUE;
}

CBrushDoc::~CBrushDoc()
{
}


BEGIN_MESSAGE_MAP(CBrushDoc, CDocument)
END_MESSAGE_MAP()


// CBrushDoc diagnostics

#ifdef _DEBUG
void CBrushDoc::AssertValid() const
{
   CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CBrushDoc::Dump(CDumpContext& dc) const
{
   CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CBrushDoc serialization

void CBrushDoc::Serialize(CArchive& ar)
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


// CBrushDoc commands
