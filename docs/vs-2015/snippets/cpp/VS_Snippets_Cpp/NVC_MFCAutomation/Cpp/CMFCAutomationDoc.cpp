// CMFCAutomationDoc.cpp : implementation of the CCMFCAutomationDoc class
//

#include "stdafx.h"
#include "CMFCAutomation.h"

#include "CMFCAutomationDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCMFCAutomationDoc

IMPLEMENT_DYNCREATE(CCMFCAutomationDoc, CDocument)

BEGIN_MESSAGE_MAP(CCMFCAutomationDoc, CDocument)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CCMFCAutomationDoc, CDocument)
END_DISPATCH_MAP()

// Note: we add support for IID_ICMFCAutomation to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {470F7C5E-655C-4B64-9C98-11B4DA4FE3BB}
static const IID IID_ICMFCAutomation =
{ 0x470F7C5E, 0x655C, 0x4B64, { 0x9C, 0x98, 0x11, 0xB4, 0xDA, 0x4F, 0xE3, 0xBB } };

BEGIN_INTERFACE_MAP(CCMFCAutomationDoc, CDocument)
	INTERFACE_PART(CCMFCAutomationDoc, IID_ICMFCAutomation, Dispatch)
END_INTERFACE_MAP()


// CCMFCAutomationDoc construction/destruction

// <Snippet5>
// Below is a code sample from an  Application Wizard-generated SDI 
// Application with Automation support. The Application Wizard adds a 
// dispatch interface to the document class. AfxOleLockApp() and
// AfxOleUnlockApp() respectively increment and decrement the 
// application's object count. When the object count is equal to 
// zero and if the user has not taken control of the application,
// the server is terminated.

CCMFCAutomationDoc::CCMFCAutomationDoc()
{
	EnableAutomation();
	AfxOleLockApp();
}

CCMFCAutomationDoc::~CCMFCAutomationDoc()
{
	AfxOleUnlockApp();
}
// </Snippet5>

BOOL CCMFCAutomationDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CCMFCAutomationDoc serialization

void CCMFCAutomationDoc::Serialize(CArchive& ar)
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


// CCMFCAutomationDoc diagnostics

#ifdef _DEBUG
void CCMFCAutomationDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCMFCAutomationDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCMFCAutomationDoc commands
