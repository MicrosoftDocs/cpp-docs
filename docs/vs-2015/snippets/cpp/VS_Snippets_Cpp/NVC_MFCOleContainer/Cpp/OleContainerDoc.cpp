// OleContainerDoc.cpp : implementation of the COleContainerDoc class
//

#include "stdafx.h"
#include "NVC_MFCOleContainer.h"

#include "OleContainerDoc.h"
#include "CntrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COleContainerDoc

IMPLEMENT_DYNCREATE(COleContainerDoc, COleDocument)

BEGIN_MESSAGE_MAP(COleContainerDoc, COleDocument)
	// Enable default OLE container implementation
	ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, &COleDocument::OnUpdatePasteMenu)
	ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_LINK, &COleDocument::OnUpdatePasteLinkMenu)
	ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_CONVERT, &COleDocument::OnUpdateObjectVerbMenu)
	ON_COMMAND(ID_OLE_EDIT_CONVERT, &COleDocument::OnEditConvert)
	ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, &COleDocument::OnUpdateEditLinksMenu)
	ON_COMMAND(ID_OLE_EDIT_LINKS, &COleDocument::OnEditLinks)
	ON_UPDATE_COMMAND_UI_RANGE(ID_OLE_VERB_FIRST, ID_OLE_VERB_LAST, &COleDocument::OnUpdateObjectVerbMenu)
   ON_COMMAND(ID_OLE_GETNEXTCLIENTITEM, &COleContainerDoc::OnOleGetnextclientitem)
   ON_COMMAND(ID_OLE_GETNEXTITEM, &COleContainerDoc::OnOleGetnextitem)
END_MESSAGE_MAP()


// COleContainerDoc construction/destruction

COleContainerDoc::COleContainerDoc()
{
	// Use OLE compound files
	EnableCompoundFile();

	// TODO: add one-time construction code here

}

COleContainerDoc::~COleContainerDoc()
{
}

BOOL COleContainerDoc::OnNewDocument()
{
	if (!COleDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// COleContainerDoc serialization

void COleContainerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}

	// Calling the base class COleDocument enables serialization
	//  of the container document's COleClientItem objects.
	COleDocument::Serialize(ar);
	// activate the first one
	if (!ar.IsStoring())
	{
		POSITION posItem = GetStartPosition();
		if (posItem != NULL)
		{
			CDocItem* pItem = GetNextItem(posItem);
			POSITION posView = GetFirstViewPosition();
			COleDocObjectItem *pDocObjectItem = DYNAMIC_DOWNCAST(COleDocObjectItem, pItem);
			if (posView != NULL && pDocObjectItem != NULL)
			{
				CView* pView = GetNextView(posView);
				pDocObjectItem->DoVerb(OLEIVERB_SHOW, pView);
			}
		}
	}
}


// COleContainerDoc diagnostics

#ifdef _DEBUG
void COleContainerDoc::AssertValid() const
{
	COleDocument::AssertValid();
}

void COleContainerDoc::Dump(CDumpContext& dc) const
{
	COleDocument::Dump(dc);
}
#endif //_DEBUG


// COleContainerDoc commands

void COleContainerDoc::OnOleGetnextclientitem()
{
   COleDocument* pDoc = this;

// <Snippet1>
   // pDoc points to a COleDocument object
   POSITION pos = pDoc->GetStartPosition();
   COleClientItem *pItem;
   CString strType;
   while ((pItem = pDoc->GetNextClientItem(pos)) != NULL)
   {
      // Use pItem
      pItem->GetUserType(USERCLASSTYPE_FULL, strType);
      TRACE(strType);
   }
// </Snippet1>
}

void COleContainerDoc::OnOleGetnextitem()
{
   COleDocument* pDoc = this;

// <Snippet2>
   // pDoc points to a COleDocument object
   POSITION pos = pDoc->GetStartPosition();
   CDocItem *pItem;
   CString strType;
   while(pos != NULL)
   {
      pItem = pDoc->GetNextItem(pos);
      // Use pItem
      if (pItem->IsKindOf(RUNTIME_CLASS(COleClientItem)))
      {
         ((COleClientItem*)pItem)->GetUserType(USERCLASSTYPE_FULL, strType);
         TRACE(strType);
      }
   }
// </Snippet2>
}
