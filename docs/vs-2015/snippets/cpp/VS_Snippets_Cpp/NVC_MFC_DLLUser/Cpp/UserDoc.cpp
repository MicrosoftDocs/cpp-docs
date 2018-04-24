// UserDoc.cpp : implementation of the CUserDoc class
//

#include "stdafx.h"
#include "NVC_MFC_DLLUser.h"

#include "UserDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUserDoc

IMPLEMENT_DYNCREATE(CUserDoc, CDocument)

BEGIN_MESSAGE_MAP(CUserDoc, CDocument)
END_MESSAGE_MAP()


// CUserDoc construction/destruction

CUserDoc::CUserDoc()
{
   // TODO: add one-time construction code here

}

CUserDoc::~CUserDoc()
{
}

BOOL CUserDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;

   // TODO: add reinitialization code here
   // (SDI documents will reuse this document)

   return TRUE;
}




// CUserDoc serialization

void CUserDoc::Serialize(CArchive& ar)
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


// CUserDoc diagnostics

#ifdef _DEBUG
void CUserDoc::AssertValid() const
{
   CDocument::AssertValid();
}

void CUserDoc::Dump(CDumpContext& dc) const
{
   CDocument::Dump(dc);
}
#endif //_DEBUG


// CUserDoc commands
