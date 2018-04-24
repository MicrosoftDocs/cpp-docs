// maindoc.cpp : implementation of the CMainDoc class
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.


#include "stdafx.h"
#include "oclient.h"

#include "maindoc.h"
#include "rectitem.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

// private clipboard format
CLIPFORMAT CMainDoc::m_cfPrivate = NULL;

/////////////////////////////////////////////////////////////////////////////
// CMainDoc

IMPLEMENT_DYNCREATE(CMainDoc, COleLinkingDoc)

BEGIN_MESSAGE_MAP(CMainDoc, COleLinkingDoc)
   //{{AFX_MSG_MAP(CMainDoc)
   ON_COMMAND(ID_EDIT_CLEAR_ALL, OnEditClearAll)
   ON_UPDATE_COMMAND_UI(ID_EDIT_CLEAR_ALL, OnUpdateEditClearAll)
   //}}AFX_MSG_MAP
   ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdatePasteMenu)
   ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_LINK, OnUpdatePasteLinkMenu)
   ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, OnUpdateEditLinksMenu)
   ON_COMMAND(ID_OLE_EDIT_LINKS, OnEditLinks)
   ON_UPDATE_COMMAND_UI(ID_OLE_VERB_FIRST, OnUpdateObjectVerbMenu)
   ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_CHANGE_ICON, OnUpdateEditChangeIcon)
   ON_COMMAND(ID_OLE_EDIT_CHANGE_ICON, OnEditChangeIcon)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainDoc construction/destruction

CMainDoc::CMainDoc() : m_sizeDoc(800,1050) // document size is 8x10.5
{
   EnableCompoundFile();

   m_bNeedUpdate = TRUE;
   if (m_cfPrivate == NULL)
      m_cfPrivate = (CLIPFORMAT)
         ::RegisterClipboardFormat(_T("MFC OClient Sample"));
}

CMainDoc::~CMainDoc()
{
}

CSize &CMainDoc::GetDocumentSize()
{
   return m_sizeDoc;
}

void CMainDoc::OnShowViews(BOOL bVisible)
{
   COleLinkingDoc::OnShowViews(bVisible);

   if (bVisible && m_bNeedUpdate)
   {
      // update embedded links in this document before showing the window
      COleUpdateDialog dlg(this);
      dlg.DoModal();
      m_bNeedUpdate = FALSE;
   }
}

/////////////////////////////////////////////////////////////////////////////
// CMainDoc item management

CRectItem* CMainDoc::CreateItem()
{
   return new CRectItem(this); // does 'AddItem' automatically
}

// safe delete that notifies views
void CMainDoc::DeleteItem(CRectItem* pItem)
{
   ASSERT(pItem->GetDocument() == this);

   SetModifiedFlag();
   UpdateAllViews(NULL, 1, pItem); // pItem will be deleted
   pItem->Delete();    // does a 'RemoveItem' & 'delete this' automatically
}

/////////////////////////////////////////////////////////////////////////////
// CMainDoc serialization

void CMainDoc::Serialize(CArchive& ar)
{
// NOTE: New easier to use serialization model -- even for OLE objects!
   WORD wMagic = 0x0DAF;
   if (ar.IsStoring())
   {
      if (HasBlankItems() &&
         AfxMessageBox(IDP_SAVEINCOMPLETE, MB_YESNO|MB_ICONEXCLAMATION) != IDYES)
      {
         TRACE0("Aborting save -- incomplete items found!\n");
         AfxThrowArchiveException(CArchiveException::genericException);
      }
      ar << wMagic;
   }
   else
   {
      WORD w;
      ar >> w;

      if (w != wMagic)
      {
         TRACE0("invalid magic number at start of file\n");
         AfxThrowArchiveException(CArchiveException::genericException);
      }
   }

   // serialize the rest of the document (OLE items)
   COleLinkingDoc::Serialize(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CMainDoc commands

void CMainDoc::OnEditClearAll()
{
   // delete all items in the document (also removes sub-storages)
   POSITION pos = GetStartPosition();
   while (pos != NULL)
   {
      CRectItem* pItem = (CRectItem*)GetNextItem(pos);
      ASSERT_KINDOF(CRectItem, pItem);
      pItem->Delete();
   }

   // everything is gone now!
   SetModifiedFlag();
   UpdateAllViews(NULL);
}


void CMainDoc::OnUpdateEditClearAll(CCmdUI* pCmdUI)
{
   // Enable ClearAll if there is anything to clear
   pCmdUI->Enable(GetStartPosition() != NULL);
}

void CMainDoc::AdjustItemPosition(CRectItem* pItem)
{
   POSITION pos = GetStartPosition();
   while (pos != NULL)
   {
      CRectItem* pRectItem = (CRectItem*)GetNextItem(pos);
      ASSERT_KINDOF(CRectItem, pItem);
      if (pRectItem != pItem && pRectItem->GetRect() == pItem->GetRect())
      {
         pItem->m_ptPos.x += 10;
         pItem->m_ptPos.y -= 10;
         pos = GetStartPosition();
      }
   }
}

/////////////////////////////////////////////////////////////////////////////
// CMainDoc diagnostics

#ifdef _DEBUG
void CMainDoc::AssertValid() const
{
   COleLinkingDoc::AssertValid();
}

void CMainDoc::Dump(CDumpContext& dc) const
{
   COleLinkingDoc::Dump(dc);
}
#endif //_DEBUG
