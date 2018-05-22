// MFCMessageHandlingDoc.cpp : implementation of the CMFCMessageHandlingDoc class
//

#include "stdafx.h"
#include "MFCMessageHandling.h"

#include "MFCMessageHandlingDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCMessageHandlingDoc

IMPLEMENT_DYNCREATE(CMFCMessageHandlingDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCMessageHandlingDoc, CDocument)
   ON_COMMAND(ID_FILE_SEND_MAIL, &CMFCMessageHandlingDoc::OnFileSendMail)
   ON_UPDATE_COMMAND_UI(ID_FILE_SEND_MAIL, &CMFCMessageHandlingDoc::OnUpdateFileSendMail)
END_MESSAGE_MAP()


// CMFCMessageHandlingDoc construction/destruction

CMFCMessageHandlingDoc::CMFCMessageHandlingDoc()
{
   // TODO: add one-time construction code here

}

CMFCMessageHandlingDoc::~CMFCMessageHandlingDoc()
{
}

BOOL CMFCMessageHandlingDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;

   // TODO: add reinitialization code here
   // (SDI documents will reuse this document)

   return TRUE;
}




// CMFCMessageHandlingDoc serialization

void CMFCMessageHandlingDoc::Serialize(CArchive& ar)
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


// CMFCMessageHandlingDoc diagnostics

#ifdef _DEBUG
void CMFCMessageHandlingDoc::AssertValid() const
{
   CDocument::AssertValid();
}

void CMFCMessageHandlingDoc::Dump(CDumpContext& dc) const
{
   CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFCMessageHandlingDoc commands
