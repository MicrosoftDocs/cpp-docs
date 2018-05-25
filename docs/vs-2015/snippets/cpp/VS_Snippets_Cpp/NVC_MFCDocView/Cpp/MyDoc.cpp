// CMyDoc.cpp : implementation of the CMyDoc class
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"

#include "MyDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDoc

IMPLEMENT_DYNCREATE(CMyDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyDoc, CDocument)
// <Snippet9>
   ON_COMMAND(ID_FILE_SENDMAIL, &CMyDoc::OnFileSendMail)
   ON_UPDATE_COMMAND_UI(ID_FILE_SENDMAIL, &CMyDoc::OnUpdateFileSendMail)
// </Snippet9>
// <Snippet46>
   ON_UPDATE_COMMAND_UI(ID_FILE_SAVE, &CMyDoc::OnUpdateFileSave)
// </Snippet46>
END_MESSAGE_MAP()


// CMyDoc construction/destruction

CMyDoc::CMyDoc()
   : m_bModified(false)
{
   CMyDoc* pDocument = this;

// <Snippet194>
   ASSERT_KINDOF(CMyDoc, pDocument);
// </Snippet194>

// <Snippet195>
   ASSERT(pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
// </Snippet195>

   CMyDoc* pMyDoc = this;

// <Snippet197>
   CDocument* pDoc = STATIC_DOWNCAST(CDocument, pMyDoc);
// </Snippet197>
   pDoc;
}

CMyDoc::~CMyDoc()
{
}

// <Snippet61>
// Method 2: In an SDI or MDI application, do all initialization 
// in an override of OnNewDocument, if you are certain that
// the initialization is effectively saved upon File Save
// and fully restored upon File Open, via serialization.
BOOL CMyDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;

   // Do initialization of new document here.

   return TRUE;
}
// </Snippet61>

LPTSTR CMyDoc::GetData()
{
   return _T("Howdy, howdy, howdy!!!");
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

void CMyDoc::OnFileSendMail()
{
   // TODO: Add your command handler code here
}

void CMyDoc::OnUpdateFileSendMail(CCmdUI *pCmdUI)
{
   UNREFERENCED_PARAMETER(pCmdUI);
}

// <Snippet47>
void CMyDoc::OnUpdateFileSave(CCmdUI* pCmdUI)
{
   // Enable the menu item if the file has been modified.
   pCmdUI->Enable(m_bModified);   
}
// </Snippet47>