// MdiDoc.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "MdiDoc.h"


// CMdiDoc

IMPLEMENT_DYNCREATE(CMdiDoc, COleServerDoc)

// <Snippet20>
// GetDefaultMenu() is an undocumented virtual function for 
// CDocument class. It allows the document to determine which 
// menu to display. m_hDefaultMenu is of type HMENU. Its value
// is initialized to NULL either in the constructor or 
// CDocument::OnNewDocument(). And the menu resource is destroyed
// in the destructor to avoid having too many menus loaded at once.
HMENU CMdiDoc::GetDefaultMenu()
{
   if (m_hDefaultMenu)
      return m_hDefaultMenu;

   return COleServerDoc::GetDefaultMenu();
}

// Initialize member variable(s) in the constructor. CMdiDoc is
// a CDocument-derived class.
CMdiDoc::CMdiDoc()
{
   // Use OLE compound files
   EnableCompoundFile();

   m_hDefaultMenu = NULL; // initialize to NULL
}

// Destroy menu resource in CMdiDoc's destructor. CMdiDoc is
// a CDocument-derived class.
CMdiDoc::~CMdiDoc()
{
   if (m_hDefaultMenu)
      ::DestroyMenu(m_hDefaultMenu);
}
// </Snippet20>

BOOL CMdiDoc::OnNewDocument()
{
   m_hDefaultMenu = NULL;

	if (!COleServerDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

#ifndef _WIN32_WCE
COleServerItem* CMdiDoc::OnGetEmbeddedItem()
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


BEGIN_MESSAGE_MAP(CMdiDoc, COleServerDoc)
END_MESSAGE_MAP()


// CMdiDoc diagnostics

#ifdef _DEBUG
void CMdiDoc::AssertValid() const
{
	COleServerDoc::AssertValid();
}

#ifndef _WIN32_WCE
void CMdiDoc::Dump(CDumpContext& dc) const
{
	COleServerDoc::Dump(dc);
}
#endif
#endif //_DEBUG

#ifndef _WIN32_WCE
// CMdiDoc serialization

void CMdiDoc::Serialize(CArchive& ar)
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


// CMdiDoc commands
