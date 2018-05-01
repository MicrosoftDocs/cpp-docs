// rectitem.cpp : implementation of the CRectItem class
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
#include <afxpriv.h>
#include "oclient.h"

#include "maindoc.h"
#include "mainview.h"
#include "rectitem.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////

IMPLEMENT_SERIAL(CRectItem, COleClientItem, 0)

CRectItem::CRectItem(COleDocument* pContainer) : COleClientItem(pContainer) ,
   m_ptPos(10, -10), m_sizeContent(0,0), m_sizeIcon(0,0),
   m_sizeContentExtent(0, 0), m_sizeIconExtent(0, 0)
{
}

CRectItem::CRectItem() : m_ptPos(10, -10), m_sizeContent(0,0), m_sizeIcon(0,0),
   m_sizeContentExtent(0, 0), m_sizeIconExtent(0, 0)
{
}

CRectItem::~CRectItem()
{
}

void CRectItem::Invalidate(CView* pNotThisView)
{
   GetDocument()->UpdateAllViews(pNotThisView, 0, this);
}

/////////////////////////////////////////////////////////////////////////////

CSize CRectItem::GetSize()
{
   DVASPECT dv = GetDrawAspect();
   if (dv == DVASPECT_ICON)
      return m_sizeIcon;
   else
      return m_sizeContent;
}

CSize CRectItem::GetBaseSize()
{
   DVASPECT dv = GetDrawAspect();
   if (dv == DVASPECT_ICON)
      return m_sizeIconExtent;
   else
      return m_sizeContentExtent;
}

void CRectItem::SetSize(CSize size)
{
   DVASPECT dv = GetDrawAspect();
   if (dv == DVASPECT_ICON)
      m_sizeIcon = size;
   else
      m_sizeContent = size;
}

void CRectItem::SetBaseSize(CSize size)
{
   DVASPECT dv = GetDrawAspect();
   if (dv == DVASPECT_ICON)
      m_sizeIconExtent = size;
   else
      m_sizeContentExtent = size;
}

void CRectItem::SetRect(CRect& rect)
{
   m_ptPos = rect.TopLeft();
   SetSize(rect.Size());
}

BOOL CRectItem::UpdateExtent()
{
   // get size in pixels
   CSize size;
   if (!GetCachedExtent(&size))
      return FALSE;       // blank
   Invalidate();   // invalidate the old size/position
   CSize sizeBase = GetBaseSize();
   if (size == sizeBase) // no change
      return FALSE;
   // if new object (i.e. m_extent is empty) setup position
   if (sizeBase == CSize(0,0))
   {
      // convert to document coords
      CSize sizeNew(MulDiv(size.cx, 10, 254), - MulDiv(size.cy, 10, 254));
      SetSize(sizeNew);
   }
   else
   {
      if (!IsInPlaceActive() && size != sizeBase)
      {
         // data changed and not inplace, so scale up rect as well
         CSize sizeCur = GetSize();
         sizeCur.cx = MulDiv(sizeCur.cx, size.cx, sizeBase.cx);
         sizeCur.cy = - MulDiv(-sizeCur.cy, size.cy, sizeBase.cy);
         SetSize(sizeCur);
      }
   }
   SetBaseSize(size);
   Invalidate();   // as well as the new size/position
   return TRUE;
}

BOOL CRectItem::OnChangeItemPosition(const CRect& rectPos)
{
   CMainView* pView = GetActiveView();
   if (pView == NULL)
      return FALSE;
   ASSERT_VALID(pView);

   CRect rc = rectPos;
   pView->ClientToDoc(rc);

   if (rc != GetRect())
   {
      // The following lines were commented out because of a bug 
      // in Microsoft Equation Editor 3.0.  The rc keeps growing
      // when activated/deactivated.
      // Uncomment them if necessary for other objects.

      /*
      // invalidate old item
      Invalidate();
      // update to new rectangle
      SetRect(rc);
      */

      GetDocument()->SetModifiedFlag();

      /*
      CSize sizeExtent;
      GetCachedExtent(&sizeExtent);
      SetBaseSize(sizeExtent);
      */

      // and invalidate new
      Invalidate();
   }
   return COleClientItem::OnChangeItemPosition(rectPos);
}

void CRectItem::OnActivate()
{
   // allow only one inplace active item per frame
   CMainView* pView = GetActiveView();
   ASSERT_VALID(pView);
   COleClientItem* pItem = GetDocument()->GetInPlaceActiveItem(pView);
   if (pItem != NULL && pItem != this)
      pItem->Close();

   COleClientItem::OnActivate();

   // set selection to an item when it becomes active
   pView->SetSelection(this);
}

void CRectItem::OnDeactivateUI(BOOL bUndoable)
{
   COleClientItem::OnDeactivateUI(bUndoable);

   // hide the object if it is not an outside-in object
   DWORD dwMisc = 0;
   m_lpObject->GetMiscStatus(GetDrawAspect(), &dwMisc);
   if (dwMisc & OLEMISC_INSIDEOUT)
      DoVerb(OLEIVERB_HIDE, NULL);
}

void CRectItem::OnChange(OLE_NOTIFICATION nCode, DWORD dwParam)
{
   COleClientItem::OnChange(nCode, dwParam);
   switch(nCode)
   {
      case OLE_CHANGED:
         UpdateExtent();
         Invalidate();
         break;
      case OLE_CHANGED_ASPECT:
      case OLE_CHANGED_STATE:
         Invalidate();
         break;
   }
}

void CRectItem::OnGetItemPosition(CRect& rPosition)
{
   ASSERT_VALID(this);

   if (GetSize() == CSize(0,0))
      UpdateExtent();

   // copy m_rect, which is in document coordinates
   rPosition = GetRect();
   CMainView* pView = GetActiveView();
   ASSERT_VALID(pView);
   pView->DocToClient(rPosition);
}

void CRectItem::Move(CRect &rc)
{
   // invalidate old rect
   Invalidate();
   // invalidate new
   SetRect(rc);
   Invalidate();

   // update item rect when in-place active
   if (IsInPlaceActive())
      SetItemRects();
}

void CRectItem::Serialize(CArchive& ar)
{
   CRect rect;

   // IMPORTANT: when using "easy" serialize -- call base class FIRST!
   //  (not strictly necessary, but a good idea)
   COleClientItem::Serialize(ar);

   // now store/retrieve data specific to CRectItem
   if (ar.IsStoring())
   {
      WORD w = 0x5500;        // magic value
      ar << w << m_ptPos << m_sizeIcon << m_sizeIconExtent <<
         m_sizeContent << m_sizeContentExtent;
   }
   else
   {
      WORD w;
      ar >> w >> m_ptPos >> m_sizeIcon >> m_sizeIconExtent >>
         m_sizeContent >> m_sizeContentExtent;
      if (w != 0x5500)
      {
         TRACE0("Bad magic number in front of an item wnd\n");
         AfxThrowArchiveException(CArchiveException::genericException);
      }
   }
}

void CRectItem::ResetSize()
{
   ASSERT_VALID(this);
   Invalidate();
   SetBaseSize(CSize(0, 0));
   UpdateExtent();
}

// OnGetClipboardData is used by CopyToClipboard and DoDragDrop
COleDataSource* CRectItem::OnGetClipboardData(
   BOOL bIncludeLink, LPPOINT lpOffset, LPSIZE lpSize)
{
   ASSERT_VALID(this);

   COleDataSource* pDataSource = new COleDataSource;
   try
   {
      GetNativeClipboardData(pDataSource);
      GetClipboardData(pDataSource, bIncludeLink, lpOffset, lpSize);
   }
   catch(CException*)
   {
      delete pDataSource;
      throw;
   }

   ASSERT_VALID(pDataSource);
   return pDataSource;
}

void CRectItem::GetNativeClipboardData(COleDataSource* pDataSource)
{
   ASSERT_VALID(this);
   ASSERT_VALID(GetDocument());

   // Create a shared file and associate a CArchive with it
   CSharedFile file;
   CArchive ar(&file, CArchive::store);

   // Serialize selected objects to the archive
   Serialize(ar);
   ar.Close();
   pDataSource->CacheGlobalData(CMainDoc::m_cfPrivate, file.Detach());
}

/////////////////////////////////////////////////////////////////////////////
