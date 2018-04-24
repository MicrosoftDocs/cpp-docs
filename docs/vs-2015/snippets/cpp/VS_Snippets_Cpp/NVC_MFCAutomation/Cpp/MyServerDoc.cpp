// MyServerDoc.cpp : implementation file
//

#include "stdafx.h"
#include "CMFCAutomation.h"
#include "MyServerDoc.h"


// CMyServerDoc

IMPLEMENT_DYNCREATE(CMyServerDoc, COleServerDoc)

CMyServerDoc::CMyServerDoc()
{
	EnableAutomation();
}

BOOL CMyServerDoc::OnNewDocument()
{
	if (!COleServerDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

CMyServerDoc::~CMyServerDoc()
{
}

void CMyServerDoc::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	COleServerDoc::OnFinalRelease();
}

#ifndef _WIN32_WCE
COleServerItem* CMyServerDoc::OnGetEmbeddedItem()
{
	// OnGetEmbeddedItem is called by the framework to get the COleServerItem
	//  that is associated with the document.  It is only called when necessary.

	// Instead of returning NULL, return a pointer to a new COleServerItem
	//  derived class that is used in conjunction with this document, then
	//  remove the ASSERT(FALSE) below.
	//  (i.e., return new CMyServerItem.)
	ASSERT(FALSE);			// remove this after completing the TODO
	return NULL;
}
#endif


BEGIN_MESSAGE_MAP(CMyServerDoc, COleServerDoc)
END_MESSAGE_MAP()

// <Snippet1>
BEGIN_DISPATCH_MAP(CMyServerDoc, COleServerDoc)
	DISP_PROPERTY(CMyServerDoc, "Msg", m_strMsg, VT_BSTR)
	DISP_FUNCTION(CMyServerDoc, "SetDirty", SetDirty, VT_EMPTY, VTS_I4)
END_DISPATCH_MAP()
// </Snippet1>

// Note: we add support for IID_IMyServerDoc to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {AA694AFA-6208-4165-B8F4-0AF0CD9897CE}
static const IID IID_IMyServerDoc =
{ 0xAA694AFA, 0x6208, 0x4165, { 0xB8, 0xF4, 0xA, 0xF0, 0xCD, 0x98, 0x97, 0xCE } };

BEGIN_INTERFACE_MAP(CMyServerDoc, COleServerDoc)
	INTERFACE_PART(CMyServerDoc, IID_IMyServerDoc, Dispatch)
END_INTERFACE_MAP()


// CMyServerDoc diagnostics

#ifdef _DEBUG
void CMyServerDoc::AssertValid() const
{
	COleServerDoc::AssertValid();
}

#ifndef _WIN32_WCE
void CMyServerDoc::Dump(CDumpContext& dc) const
{
	COleServerDoc::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CMyServerDoc serialization

void CMyServerDoc::Serialize(CArchive& ar)
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


// CMyServerDoc commands

void CMyServerDoc::SetDirty(int Flags)
{
   UNREFERENCED_PARAMETER(Flags);
}
