// ExampleDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "ExampleDoc.h"


// CExampleDoc

IMPLEMENT_DYNCREATE(CExampleDoc, CDocument)

// <Snippet60>
// Method 1: In an MDI application, the simplest place to do 
// initialization is in the document constructor.  The framework 
// always creates a new document object for File New or File Open.
CExampleDoc::CExampleDoc()
{
   // Do initialization of MDI document here.
}
// </Snippet60>

// <Snippet62>
// Method 3: If the initialization of your document is not
// effectively saved and restored by serialization (during File Save
// and File Open), then implement the initialization in single
// function (named InitMyDocument in this example).  Call the
// shared initialization function from overrides of both
// OnNewDocument and OnOpenDocument.
BOOL CExampleDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
      return FALSE;

   InitMyDocument(); // call your shared initialization function

   // If your new document object requires additional initialization
   // not necessary when the document is deserialized via File Open,
   // then perform that additional initialization here.
   
   return TRUE;
}
// </Snippet62>

CExampleDoc::~CExampleDoc()
{
}


BEGIN_MESSAGE_MAP(CExampleDoc, CDocument)
   ON_COMMAND(ID_DOC_CLEARALL, &CExampleDoc::OnEditClearAll)
   ON_COMMAND(ID_DOC_DEFAULTNAME, &CExampleDoc::OnDocDefaultname)
   ON_COMMAND(ID_DOC_REPAINTALL, &CExampleDoc::OnRepaintAllViews)
   ON_COMMAND(ID_DOC_UPDATEALL, &CExampleDoc::OnUpdateAllViews)
END_MESSAGE_MAP()


// CExampleDoc diagnostics

#ifdef _DEBUG
void CExampleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

#ifndef _WIN32_WCE
void CExampleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CExampleDoc serialization

void CExampleDoc::Serialize(CArchive& ar)
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


// CExampleDoc commands

// <Snippet57>
// This example is the handler for an Edit Clear All command.
void CExampleDoc::OnEditClearAll()
{
   DeleteContents();
   UpdateAllViews(NULL);   
}

void CExampleDoc::DeleteContents()
{
   // Re-initialize document data here.
}
// </Snippet57>

void CExampleDoc::OnDocDefaultname()
{
// <Snippet58>
   // This example accesses the doc template object to construct
   // a default document name such as SHEET.XLS, where "sheet"
   // is the base document name and ".xls" is the file extension
   // for the document type.
   CString strDefaultDocName, strBaseName, strExt;
   CDocTemplate* pDocTemplate = GetDocTemplate();
   if (!pDocTemplate->GetDocString(strBaseName, CDocTemplate::docName)
      || !pDocTemplate->GetDocString(strExt, CDocTemplate::filterExt))
   {
      AfxThrowUserException(); // These doc template strings will
         // be available if you created the application using AppWizard
         // and specified the file extension as an option for
         // the document class produced by AppWizard.
   }
   strDefaultDocName = strBaseName + strExt;
// </Snippet58>
}

// <Snippet59>
//To get the first view in the list of views:
// POSITION pos = GetFirstViewPosition();
// CView* pFirstView = GetNextView(pos);
//
// This example uses CDocument::GetFirstViewPosition
// and GetNextView to repaint each view.
// An easier way to accomplish the same result is to call
// UpdateAllViews(NULL);
void CExampleDoc::OnRepaintAllViews()
{
   POSITION pos = GetFirstViewPosition();
   while (pos != NULL)
   {
      CView* pView = GetNextView(pos);
      pView->UpdateWindow();
   }   
}
// </Snippet59>

// <Snippet63>
// Additional example of OnOpenDocument()
BOOL CExampleDoc::OnOpenDocument(LPCTSTR lpszPathName)
{
   if (!CDocument::OnOpenDocument(lpszPathName))
      return FALSE;

   InitMyDocument(); // call your shared initialization function

   return TRUE;
}
// </Snippet63>

// <Snippet64>
void CExampleDoc::OnUpdateAllViews()
{
   UpdateAllViews(NULL);
}
// </Snippet64>