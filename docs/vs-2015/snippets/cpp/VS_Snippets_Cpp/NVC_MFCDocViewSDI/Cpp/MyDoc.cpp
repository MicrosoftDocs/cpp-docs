// MyDoc.cpp : implementation of the CMyDoc class
//

#include "stdafx.h"
#include "NVC_MFCDocViewSDI.h"

#include "MyDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDoc

IMPLEMENT_DYNCREATE(CMyDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyDoc, CDocument)
END_MESSAGE_MAP()


// CMyDoc construction/destruction

CMyDoc::CMyDoc()
{
   // TODO: add one-time construction code here

}

CMyDoc::~CMyDoc()
{
}

BOOL CMyDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;

   // TODO: add reinitialization code here
   // (SDI documents will reuse this document)

   return TRUE;
}




// CMyDoc serialization

void CMyDoc::Serialize(CArchive& ar)
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


// CMyDoc diagnostics

#ifdef _DEBUG
void CMyDoc::AssertValid() const
{
   CDocument::AssertValid();
}

void CMyDoc::Dump(CDumpContext& dc) const
{
   CDocument::Dump(dc);
}
#endif //_DEBUG


// CMyDoc commands
