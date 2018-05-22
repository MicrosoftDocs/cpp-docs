// mainview.cpp : implementation of the CMainView class
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
#include "mainview.h"
#include "rectitem.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainView

CBrush NEAR CMainView::m_brHatch;
CLIPFORMAT CMainView::m_cfObjectDescriptor=NULL;

IMPLEMENT_DYNCREATE(CMainView, CScrollView)

BEGIN_MESSAGE_MAP(CMainView, CScrollView)
   //{{AFX_MSG_MAP(CMainView)
   ON_COMMAND(ID_EDIT_PASTE, OnPaste)
   ON_COMMAND(ID_EDIT_PASTE_LINK, OnPasteLink)
   ON_COMMAND(ID_OLE_INSERT_NEW, OnInsertObject)
   ON_UPDATE_COMMAND_UI(ID_EDIT_CLEAR, OnUpdateEditMenu)
   ON_COMMAND(ID_EDIT_CLEAR, OnEditClear)
   ON_COMMAND(ID_EDIT_COPY, OnEditCopy)
   ON_COMMAND(ID_EDIT_CUT, OnEditCut)
   ON_WM_LBUTTONDBLCLK()
   ON_WM_LBUTTONDOWN()
   ON_WM_SETCURSOR()
   ON_WM_RBUTTONDOWN()
   ON_WM_CHAR()
   ON_WM_SETFOCUS()
   ON_WM_CREATE()
   ON_WM_SIZE()
   ON_COMMAND(ID_OBJECT_DISPLAYCONTENT, OnObjectDisplayContent)
   ON_UPDATE_COMMAND_UI(ID_OBJECT_DISPLAYCONTENT, OnUpdateObjectDisplayContent)
   ON_COMMAND(ID_OBJECT_DISPLAYASICON, OnObjectDisplayAsIcon)
   ON_UPDATE_COMMAND_UI(ID_OBJECT_DISPLAYASICON, OnUpdateObjectDisplayAsIcon)
   ON_COMMAND(ID_EDIT_PASTE_SPECIAL, OnPasteSpecial)
   ON_UPDATE_COMMAND_UI(ID_EDIT_CLONE, OnUpdateEditClone)
   ON_COMMAND(ID_EDIT_CLONE, OnEditClone)
   ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_SPECIAL, OnUpdateEditPaste)
   ON_COMMAND(ID_OBJECT_RESETSIZE, OnObjectResetsize)
   ON_COMMAND(ID_CANCEL_INPLACE, OnCancelInplace)
   ON_WM_DESTROY()
   ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdateEditPaste)
   ON_UPDATE_COMMAND_UI(ID_EDIT_COPY, OnUpdateEditMenu)
   ON_UPDATE_COMMAND_UI(ID_EDIT_CUT, OnUpdateEditMenu)
   ON_UPDATE_COMMAND_UI(ID_OBJECT_RESETSIZE, OnUpdateEditMenu)
   ON_COMMAND(ID_OLE_CHANGE_SOURCE, OnOleChangeSource)
   ON_UPDATE_COMMAND_UI(ID_OLE_CHANGE_SOURCE, OnUpdateOleChangeSource)
   ON_COMMAND(ID_OLE_EDIT_PROPERTIES, OnOleEditProperties)
   ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_PROPERTIES, OnUpdateOleEditProperties)
   //}}AFX_MSG_MAP
   // Standard printing commands
   ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainView construction/destruction

CMainView::CMainView()
{
   if (m_brHatch.m_hObject == NULL)
      m_brHatch.CreateHatchBrush(HS_DIAGCROSS, RGB(0,0,0));
   if (m_cfObjectDescriptor == NULL)
      m_cfObjectDescriptor =
         (CLIPFORMAT)::RegisterClipboardFormat(_T("Object Descriptor"));

   m_pSelection = NULL;
   m_prevDropEffect = DROPEFFECT_NONE;
   m_bInDrag = FALSE;
}

CMainView::~CMainView()
{
}

void CMainView::OnInitialUpdate()
{
   CScrollView::OnInitialUpdate();

   // We can't pass MM_ANISOTROPIC to SetScrollSizes so we have to convert to MM_TEXT
   CSize size = GetDocument()->GetDocumentSize();
   CClientDC dc(NULL);
   size.cx = MulDiv(size.cx, dc.GetDeviceCaps(LOGPIXELSX), 100);
   size.cy = MulDiv(size.cy, dc.GetDeviceCaps(LOGPIXELSY), 100);
   SetScrollSizes(MM_TEXT, size);
}

/////////////////////////////////////////////////////////////////////////////
// CMainView drawing

void CMainView::OnPrepareDC(CDC* pDC, CPrintInfo* pInfo)
{
   CScrollView::OnPrepareDC(pDC, pInfo);
   // set up a reasonable default context
   pDC->SetTextColor(::GetSysColor(COLOR_WINDOWTEXT));
   pDC->SetBkColor(::GetSysColor(COLOR_WINDOW));

   // LOENGLISH units are based on physical inches
   // We want logical inches so we have to do it differently
   pDC->SetMapMode(MM_ANISOTROPIC);
   pDC->SetViewportExt(
      pDC->GetDeviceCaps(LOGPIXELSX), pDC->GetDeviceCaps(LOGPIXELSY));
   pDC->SetWindowExt(100,-100);
}

// <Snippet1>
void CMainView::SetupTracker(CRectTracker* pTracker, CRectItem* pItem,
   CRect* pTrueRect)
// </Snippet1>
{
   ENSURE(pTracker != NULL);
   ENSURE(pItem != NULL);

   pTracker->m_rect = pItem->GetRect();
   DocToClient(pTracker->m_rect);

// <Snippet2>
   // set minimum size for our OLE items
   pTracker->m_sizeMin.cx = 8;
   pTracker->m_sizeMin.cy = 8;

   pTracker->m_nStyle = 0;
// </Snippet2>

// <Snippet3>
   // setup resize handles if item is selected
   if (pItem == m_pSelection)
      pTracker->m_nStyle |= CRectTracker::resizeInside;

   // put correct border depending on item type
   if (pItem->GetType() == OT_LINK)
      pTracker->m_nStyle |= CRectTracker::dottedLine;
   else
      pTracker->m_nStyle |= CRectTracker::solidLine;
// </Snippet3>

// <Snippet4>
   // put hatching over the item if it is currently open
   if (pItem->GetItemState() == COleClientItem::openState ||
      pItem->GetItemState() == COleClientItem::activeUIState)
   {
      pTracker->m_nStyle |= CRectTracker::hatchInside;
   }
// </Snippet4>

   if (pTrueRect != NULL)
      pTracker->GetTrueRect(pTrueRect);

   m_Tracker.m_nStyle = pTracker->m_nStyle;
   m_Tracker.m_rect = pTracker->m_rect;
   m_Tracker.m_sizeMin = pTracker->m_sizeMin;
   m_Tracker.m_nHandleSize = pTracker->m_nHandleSize;
}

void CMainView::OnDraw(CDC* pDC)
{
   CMainDoc* pDoc = GetDocument();

   ASSERT_VALID(pDC);

   if (!pDC->IsPrinting())
   {
      m_brHatch.UnrealizeObject();
      CPoint point(0, 0);
      pDC->LPtoDP(&point);
      pDC->SetBrushOrg(point.x % 8, point.y % 8);

      CRect rcClip;
      GetClientRect(&rcClip);
      ClientToDoc(rcClip);
      CSize docSize = pDoc->GetDocumentSize();
      if (rcClip.right > docSize.cx)
      {
         CRect rcFill(rcClip);
         rcFill.left = max(rcFill.left,docSize.cx);
         pDC->FillRect(rcFill,&m_brHatch);
      }
      if (rcClip.bottom < -docSize.cy)
      {
         CRect rcFill(rcClip);
         rcFill.top = min(rcFill.top, -docSize.cy);
         pDC->FillRect(rcFill,&m_brHatch);
      }
   }

   // Draw all the CRectItems
   POSITION pos = pDoc->GetStartPosition();
   while (pos != NULL)
   {
      CRectItem* pItem = DYNAMIC_DOWNCAST(CRectItem, pDoc->GetNextItem(pos));
      if (pItem != NULL)
      {
         pItem->Draw(pDC, pItem->GetRect());

         if (!pDC->IsPrinting())
         {
            // draw the tracker
            CRectTracker tracker;
            CRect rectTrue;
            SetupTracker(&tracker, pItem, &rectTrue);
            ClientToDoc(rectTrue);
            if (pDC->RectVisible(&rectTrue))
               tracker.Draw(pDC);
         }
      }
   }
}

// pHint is the deleted item or NULL if deselect/delete all
void CMainView::OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint)
{
   if (pHint == NULL && lHint == 0)
   {
      // some sort of clear all
      m_pSelection = NULL;
   }

   if (pHint != NULL && pHint->IsKindOf(RUNTIME_CLASS(CRectItem)))
   {
      // just invalidate the one item
      InvalidateItem((CRectItem*)pHint);

      // clear selection if pointing to deleted item
      if (lHint == 1 && pHint == m_pSelection)
      {
         // specific case of pHint being deleted
         m_pSelection = NULL;
      }
   }
   else if (lHint != 0)
   {
      // invalidate arbitrary rectangle
      InvalidateRect((CRect*)lHint);
   }
   else
   {
      // complete update
      CScrollView::OnUpdate(pSender, lHint, pHint);
   }
}

void CMainView::InvalidateItem(CRectItem* pItem)
{
   if (m_nMapMode != 0)
   {
      CRectTracker tracker;
      CRect rect;
      SetupTracker(&tracker, pItem, &rect);
      InvalidateRect(&rect);
   }
}

BOOL CMainView::OnScrollBy(CSize sizeScroll, BOOL bDoScroll)
{
   // remove drag/drop feedback before scrolling
   if (bDoScroll && m_prevDropEffect != DROPEFFECT_NONE)
   {
      CClientDC dc(this);
      dc.DrawFocusRect(CRect(m_dragPoint, m_dragSize));
         // erase previous focus rect
      m_prevDropEffect = DROPEFFECT_NONE;
   }

   // do the scroll
   if (!CScrollView::OnScrollBy(sizeScroll, bDoScroll))
      return FALSE;

   // update the position of any in-place active item
   if (bDoScroll)
   {
      UpdateActiveItem();
      UpdateWindow();
   }

   return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainView printing

BOOL CMainView::OnPreparePrinting(CPrintInfo* pInfo)
{
   // default preparation
   return DoPreparePrinting(pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// Selection support

BOOL CMainView::IsSelected(const CObject* pDocItem) const
{
   return (pDocItem == m_pSelection);
}

void CMainView::SetSelection(CRectItem* pNewSel, BOOL bSafeSelect)
{
   if (pNewSel != NULL && pNewSel == m_pSelection)
      return;

   // deactivate any in-place active item on this view!
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL && pNewSel != pActiveItem)
   {
      if (bSafeSelect)
         return;
      // if we found one, deactivate it
      pActiveItem->Close();
      ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
   }
   if (m_pSelection != NULL) // invalidate the old item
      InvalidateItem(m_pSelection);
   if ((m_pSelection = pNewSel) != NULL) // invalidate the new item
      InvalidateItem(m_pSelection);
}

/////////////////////////////////////////////////////////////////////////////
// CMainView diagnostics

#ifdef _DEBUG
void CMainView::AssertValid() const
{
   CScrollView::AssertValid();
}

void CMainView::Dump(CDumpContext& dc) const
{
   CScrollView::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// Main 'Edit' menu commands

void CMainView::OnUpdateEditMenu(CCmdUI* pCmdUI)
{
   // most Edit menu commands are enabled only if we have a selection
   //  and there are no in-place activations for this view
   pCmdUI->Enable(m_pSelection != NULL &&
      GetDocument()->GetInPlaceActiveItem(this) == NULL);
}

void CMainView::OnEditCut()
{
   ENSURE(m_pSelection != NULL);
   try
   {
      m_pSelection->CopyToClipboard(TRUE);
      OnEditClear();
   }
   catch(CException* pe)
   {
      AfxMessageBox(IDP_CLIPBOARD_CUT_FAILED);
      pe->Delete();
   }
}

void CMainView::OnEditCopy()
{
   ENSURE(m_pSelection != NULL);
   try
   {
      m_pSelection->CopyToClipboard(TRUE);
   }
   catch(CException* pe)
   {
      AfxMessageBox(IDP_CLIPBOARD_COPY_FAILED);
      pe->Delete();
   }
}

void CMainView::OnEditClear()
{
   if (m_pSelection != NULL)
      GetDocument()->DeleteItem(m_pSelection);
}

void CMainView::OnPaste()
{
   if (DoPasteItem(FALSE, NULL, NULL) == NULL)
      AfxMessageBox(IDP_GET_FROM_CLIPBOARD_FAILED);
}

void CMainView::OnPasteLink()
{
   if (DoPasteItem(TRUE, NULL, NULL) == NULL)
      AfxMessageBox(IDP_GET_FROM_CLIPBOARD_FAILED);
}

void CMainView::DoPasteNative(
   COleDataObject* pDataObject, CPoint* pPoint, CRectItem* pItem)
{
   // get file refering to clipboard data
   CFile* pFile = pDataObject->GetFileData(CMainDoc::m_cfPrivate);
   if (pFile == NULL)
      {
      // if the file failed to open, throw an exception
      // to force cleanup in DoPasteItem.  the exact
      // type of exception thrown here is unimportant...

      AfxThrowFileException(CFileException::genericException);
      }

   CArchive ar(pFile, CArchive::load);
   try
   {
      // connect the file to an archive and read the data
      ar.m_pDocument = GetDocument(); // for COleClientItem serialize
      pItem->Serialize(ar);
   }
   catch(CException*)
   {
      ar.Close();
      delete pFile;
      throw;
   }

   ar.Close();
   delete pFile;

   // adjust position to that specified by point
   if (pPoint != NULL)
      pItem->m_ptPos = *pPoint;
}

void CMainView::DoPasteStandard(BOOL bLink, COleDataObject* pDataObject,
   CPoint* pPoint, CRectItem* pItem, CLIPFORMAT cfFormat)
{
   if (bLink)      // paste link
   {
      if (!pItem->CreateLinkFromData(pDataObject))
         AfxThrowMemoryException();  // any exception will do
   }
   // paste embedded
   else if (!pItem->CreateFromData(pDataObject) &&
      !pItem->CreateStaticFromData(pDataObject, OLERENDER_DRAW, cfFormat))
   {
      AfxThrowMemoryException();      // any exception will do
   }

   // copy the current iconic representation
   FORMATETC fmtetc;
   fmtetc.cfFormat = CF_METAFILEPICT;
   fmtetc.dwAspect = DVASPECT_ICON;
   fmtetc.ptd = NULL;
   fmtetc.tymed = TYMED_MFPICT;
   fmtetc.lindex = 1;
   HGLOBAL hObj = pDataObject->GetGlobalData(CF_METAFILEPICT, &fmtetc);
   if (hObj != NULL)
   {
      pItem->SetIconicMetafile(hObj);
      // the following code is an easy way to free a metafile pict
      STGMEDIUM stgMed;
      memset(&stgMed, 0, sizeof(stgMed));
      stgMed.tymed = TYMED_MFPICT;
      stgMed.hGlobal = hObj;
      ReleaseStgMedium(&stgMed);
   }

   // set the current drawing aspect
   hObj = pDataObject->GetGlobalData(m_cfObjectDescriptor);
   if (hObj != NULL)
   {
      ASSERT(hObj != NULL);
      // got CF_OBJECTDESCRIPTOR ok.  Lock it down and extract size.
      LPOBJECTDESCRIPTOR pObjDesc = (LPOBJECTDESCRIPTOR)GlobalLock(hObj);
      ENSURE(pObjDesc != NULL);
      pItem->SetDrawAspect((DVASPECT)pObjDesc->dwDrawAspect);
      GlobalUnlock(hObj);
      GlobalFree(hObj);
   }

   // set top-left based on point of drop
   if (pPoint != NULL)
      pItem->m_ptPos = *pPoint;

   // get size from drag/drop operation
   CSize size;
   if (GetObjectInfo(pDataObject, &size, NULL) && size.cx != 0 && size.cy != 0)
   {
      // use size obtained from object instead of default
      size.cx = MulDiv(size.cx, 10, 254);
      size.cy = -MulDiv(size.cy, 10, 254);
      pItem->SetSize(size);
      CSize sizeExtent;
      pItem->GetCachedExtent(&sizeExtent);
      pItem->SetBaseSize(sizeExtent);
   }
   else
   {
      // no extent from CF_OBJECTDESCRIPTOR, use extent from object
      pItem->UpdateExtent();
   }
}


// Helper for paste/pastelink
//
//                  bLink       pDataObject     pPoint              cfFormat
//  EditPaste       FALSE       NULL(clipboard) NULL(default)       0
//  Drag/Drop       TRUE/FALSE  X               X                   0
//  PasteLink       TRUE        NULL(clipboard) NULL(default)       0
//  PasteSpecial    TRUE/FALSE  X               NULL(default)       X
CRectItem* CMainView::DoPasteItem(BOOL bLink, COleDataObject* pDataObject,
   CPoint* pPoint, CLIPFORMAT cfFormat)
{
   BeginWaitCursor();

   CRectItem* pItem = GetDocument()->CreateItem();
   ASSERT_VALID(pItem);
   BOOL bAllowAdjust = (pPoint == NULL) ? TRUE : FALSE;

   // use clipboard data if not doing drag/drop
   COleDataObject clipboardData;
   if (pDataObject == NULL)
   {
      clipboardData.AttachClipboard();
      pDataObject = &clipboardData;
   }

   try
   {
      if (cfFormat == CMainDoc::m_cfPrivate)
      {
         // if format specified (i.e. PasteSpecial) then use that one
         DoPasteNative(pDataObject, pPoint, pItem);
      }
      else if (!bLink && cfFormat == 0 &&
         pDataObject->IsDataAvailable(CMainDoc::m_cfPrivate))
      {
         // if we're not pasting a link, cfFormat was unspecified,
         // and private format is available use it
         DoPasteNative(pDataObject, pPoint, pItem);
      }
      // otherwise perform a standard paste
      else if (bAllowAdjust)
      {
         CPoint ptDef(10, -10);
         DoPasteStandard(bLink, pDataObject, &ptDef, pItem, cfFormat);
      }
      else
      {
         DoPasteStandard(bLink, pDataObject, pPoint, pItem, cfFormat);
      }

      if (bAllowAdjust)
      {
         // allow document to adjust position of item so that it doesn't
         // lay directly over an item of the same size
         // this only occurs if the drop point is not specified
         GetDocument()->AdjustItemPosition(pItem);
      }
   }
   catch(CException* pe)
   {
      // general cleanup
      TRACE0("failed to embed/link an OLE object\n");
      pItem->Delete();
      pItem = NULL;
      pe->Delete();
   }

   // set the selection with bSafeSelect = TRUE
   SetSelection(pItem, TRUE);

   // update the document and views
   GetDocument()->SetModifiedFlag();
   GetDocument()->UpdateAllViews(NULL, 0, pItem);      // including this view

   EndWaitCursor();

   return pItem;
}

/////////////////////////////////////////////////////////////////////////////
// Insert New Object and Activate Object

void CMainView::OnInsertObject()
{
   COleInsertDialog dlg;
   if (dlg.DoModal() != IDOK)
      return;

   BeginWaitCursor();

   CRectItem* pItem = NULL;
   try
   {
      // create item from dialog results
      pItem = GetDocument()->CreateItem();
      if (!dlg.CreateItem(pItem))
         AfxThrowMemoryException();  // any exception will do

      // try to get initial presentation data
      pItem->UpdateLink();
      pItem->UpdateExtent();

      // if insert new object -- initially show the object
      if (dlg.GetSelectionType() == COleInsertDialog::createNewItem)
         pItem->DoVerb(OLEIVERB_SHOW, this);

      SetSelection(pItem);
   }
   catch(CException* pe)
   {
      // cleanup item, if allocated
      if (pItem != NULL)
         GetDocument()->DeleteItem(pItem);

      AfxMessageBox(IDP_FAILED_TO_CREATE);

      pe->Delete();
   }

   EndWaitCursor();
}

void CMainView::OnLButtonDblClk(UINT, CPoint)
{
   // Double click will activate the main verb
   if (m_pSelection != NULL)
   {
      BeginWaitCursor();
      LONG iVerb = OLEIVERB_PRIMARY;
      if (GetKeyState(VK_CONTROL) < 0)
         iVerb = OLEIVERB_OPEN;
      m_pSelection->DoVerb(iVerb, this);
      EndWaitCursor();
   }
}

/////////////////////////////////////////////////////////////////////////////
// Hit detection, moving and resizing items

CRectItem* CMainView::GetHitItem(CPoint point)
{
   CMainDoc* pDoc = GetDocument();
   CRectItem* pItemHit = NULL;

   // Find the item hit by the mouse
   POSITION pos = pDoc->GetStartPosition();
   while (pos != NULL)
   {
      CRectItem* pItem = DYNAMIC_DOWNCAST(CRectItem, pDoc->GetNextItem(pos));
      if (pItem != NULL)
      {
         CRectTracker tracker;
         SetupTracker(&tracker, pItem);
         if (tracker.HitTest(point) >= 0)
         {
            pItemHit = pItem;
            // items later in the list are drawn on top - so keep looking
         }
      }
   }
   return pItemHit;
}

void CMainView::DocToClient(CRect& rect)
{
   CClientDC dc(this);
   OnPrepareDC(&dc);
   dc.LPtoDP(&rect); // convert logical rect to device rect
   rect.NormalizeRect();
}

void CMainView::ClientToDoc(CRect& rect)
{
   CClientDC dc(this);
   OnPrepareDC(&dc);
   dc.DPtoLP(&rect); // convert device rect to logical rect
}

void CMainView::DocToClient(CSize& size)
{
   CClientDC dc(this);
   OnPrepareDC(&dc);
   dc.LPtoDP(&size); // convert logical size to device size
   size.cx = abs(size.cx);
   size.cy = abs(size.cy);
}

void CMainView::ClientToDoc(CSize& size)
{
   CClientDC dc(this);
   OnPrepareDC(&dc);
   dc.DPtoLP(&size); // convert device rect to logical rect
   size.cx = abs(size.cx);
   size.cy = abs(size.cy);
}

void CMainView::DocToClient(CPoint& point)
{
   CClientDC dc(this);
   OnPrepareDC(&dc);
   dc.LPtoDP(&point); // convert logical point to device point
}

void CMainView::ClientToDoc(CPoint& point)
{
   CClientDC dc(this);
   OnPrepareDC(&dc);
   dc.DPtoLP(&point); // convert device point to logical point
}

void CMainView::OnLButtonDown(UINT /*nFlags*/, CPoint point)
{
   CRectItem* pItemHit = GetHitItem(point);
   SetSelection(pItemHit);
   if (pItemHit != NULL)
   {
      CRect rectLimit;
      GetClientRect(rectLimit);

      CRectTracker tracker;
      SetupTracker(&tracker, pItemHit);

      UpdateWindow(); // update before entering the tracker
      if (tracker.HitTest(point) == CRectTracker::hitMiddle) // moving, not sizing
      {
         // determine mouse position offset from the item itself
         CRect rect = pItemHit->GetRect();
         DocToClient(rect);
         CPoint ptOffset(point.x - rect.left, point.y - rect.top);

         // determine sensitivity rectangle (determines when drag starts)
         CRect rectDrag(rect.left, rect.top, rect.left+1, rect.top+1);

         // execute the drag/drop operation
         m_bInDrag = TRUE;
         ClientToScreen(&rect);  // must be in screen co-ordinates
         ClientToScreen(&rectDrag);
         DROPEFFECT dropEffect = pItemHit->DoDragDrop(rect, ptOffset,
            TRUE, DROPEFFECT_COPY|DROPEFFECT_MOVE, &rectDrag);
         if (m_bInDrag == FALSE) // move in same window
            return;
         m_bInDrag = FALSE;

         if (dropEffect == DROPEFFECT_MOVE)
         {
            // the item was moved (essentially a copy w/delete)
            pItemHit->Invalidate();
            if (m_pSelection == pItemHit)
               m_pSelection = NULL;
            GetDocument()->DeleteItem(pItemHit);
         }
      }
      else if (tracker.Track(this, point))
      {
         ClientToDoc(tracker.m_rect);
         pItemHit->Move(tracker.m_rect);
         GetDocument()->SetModifiedFlag();
      }
   }
// <Snippet6>
   else if (m_Tracker.HitTest(point) < 0)
   {
      // just to demonstrate CRectTracker::TrackRubberBand
      CRectTracker trackerRubber;
      if (trackerRubber.TrackRubberBand(this, point, TRUE))
      {
         MessageBeep(0); // beep indicates TRUE

         // See if rubber band intersects 
         // with the doc's tracker
         CRect rectT;
         // so intersect rect works
         trackerRubber.m_rect.NormalizeRect();
         if (rectT.IntersectRect(trackerRubber.m_rect, m_Tracker.m_rect))
         {
            // If so, put resize handles on it (i.e. select it)
            if (m_Tracker.m_nStyle & CRectTracker::resizeInside)
            {
               // swap from resize inside to resize outside for effect
               m_Tracker.m_nStyle &= ~CRectTracker::resizeInside;
               m_Tracker.m_nStyle |= CRectTracker::resizeOutside;
            }
            else
            {
               // Just use inside resize handles on first time
               m_Tracker.m_nStyle &= ~CRectTracker::resizeOutside;
               m_Tracker.m_nStyle |= CRectTracker::resizeInside;
            }
            GetDocument()->SetModifiedFlag();
            GetDocument()->UpdateAllViews(NULL);
         }
      }
   }
// </Snippet6>
}

// <Snippet5>
BOOL CMainView::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message)
{
   if (pWnd == this && m_pSelection != NULL)
   {
      // give the tracker for the selection a chance
      CRectTracker tracker;
      SetupTracker(&tracker, m_pSelection);
      if (tracker.SetCursor(this, nHitTest))
         return TRUE;
   }
   return CScrollView::OnSetCursor(pWnd, nHitTest, message);
}
// </Snippet5>

/////////////////////////////////////////////////////////////////////////////
// Right mouse for popup context sensitive menu

void CMainView::OnRButtonDown(UINT, CPoint point)
{
   // make sure window is active
   GetParentFrame()->ActivateFrame();

   SetSelection(GetHitItem(point));    // reselect item if appropriate
   UpdateWindow();

   if (m_pSelection != NULL)
   {
      CMenu bar;
      if (bar.LoadMenu(ID_OBJECT_POPUP_MENU))
      {
         CMenu& popup = *bar.GetSubMenu(0);
         ASSERT(popup.m_hMenu != NULL);

         ClientToScreen(&point);
         popup.TrackPopupMenu(TPM_RIGHTBUTTON,
            point.x, point.y,
            AfxGetMainWnd()); // route commands through main window
      }
   }
}

void CMainView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
   MessageBeep(0);     // to test for proper focus transfer

   CScrollView::OnChar(nChar, nRepCnt, nFlags);
}

void CMainView::OnSetFocus(CWnd* pOldWnd)
{
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL &&
      pActiveItem->GetItemState() == COleClientItem::activeUIState)
   {
      // need to set focus to this item if it is in the same view
      CWnd* pWnd = pActiveItem->GetInPlaceWindow();
      if (pWnd != NULL)
      {
         pWnd->SetFocus();
         return;
      }
   }

   CScrollView::OnSetFocus(pOldWnd);
}

void CMainView::OnSize(UINT nType, int cx, int cy)
{
   CScrollView::OnSize(nType, cx, cy);

   UpdateActiveItem();
}

/////////////////////////////////////////////////////////////////////////////
// support for drag/drop

int CMainView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CScrollView::OnCreate(lpCreateStruct) == -1)
      return -1;

   // register drop target
   m_dropTarget.Register(this);

   return 0;
}

BOOL CMainView::OnDrop(COleDataObject* pDataObject,
   DROPEFFECT dropEffect, CPoint point)
{
   ASSERT_VALID(this);

   // clean up focus rect
   OnDragLeave();

   // offset point as appropriate for dragging
   GetObjectInfo(pDataObject, &m_dragSize, &m_dragOffset);
   CClientDC dc(NULL);
   dc.HIMETRICtoDP(&m_dragSize);
   dc.HIMETRICtoDP(&m_dragOffset);
   point -= m_dragOffset;

   // if move within the view
   ClientToDoc(point);
   if ((dropEffect & DROPEFFECT_MOVE) && m_bInDrag)
   {
      ASSERT(m_pSelection != NULL);
      m_bInDrag = FALSE; // signal drag code that a move happened
      // set top-left based on point of drop
      CRect rect = m_pSelection->GetRect();
      if (rect.TopLeft() != point) // if moved
      {
         CRect cr(point,rect.Size());
         m_pSelection->Move(cr);
         GetDocument()->SetModifiedFlag();
      }
   }
   // check and paste link
   else if ((dropEffect & DROPEFFECT_LINK) && DoPasteItem(TRUE, pDataObject, &point))
      return TRUE;

   // paste embedding/static
   else if (DoPasteItem(FALSE, pDataObject, &point))
      return TRUE;

   return FALSE;
}

BOOL CMainView::GetObjectInfo(COleDataObject* pDataObject,
   CSize* pSize, CSize* pOffset)
{
   ENSURE(pSize != NULL);

   // get object descriptor data
   HGLOBAL hObjDesc = pDataObject->GetGlobalData(m_cfObjectDescriptor);
   if (hObjDesc == NULL)
   {
      if (pOffset != NULL)
         *pOffset = CSize(0, 0); // fill in defaults instead
      *pSize = CSize(0, 0);
      return FALSE;
   }
   ASSERT(hObjDesc != NULL);

   // otherwise, got CF_OBJECTDESCRIPTOR ok.  Lock it down and extract size.
   LPOBJECTDESCRIPTOR pObjDesc = (LPOBJECTDESCRIPTOR)GlobalLock(hObjDesc);
   ENSURE(pObjDesc != NULL);
   pSize->cx = (int)pObjDesc->sizel.cx;
   pSize->cy = (int)pObjDesc->sizel.cy;
   if (pOffset != NULL)
   {
      pOffset->cx = (int)pObjDesc->pointl.x;
      pOffset->cy = (int)pObjDesc->pointl.y;
   }
   GlobalUnlock(hObjDesc);
   GlobalFree(hObjDesc);

   // successfully retrieved pSize & pOffset info
   return TRUE;
}

DROPEFFECT CMainView::OnDragEnter(COleDataObject* pDataObject,
   DWORD grfKeyState, CPoint point)
{
   ASSERT(m_prevDropEffect == DROPEFFECT_NONE);

   GetObjectInfo(pDataObject, &m_dragSize, &m_dragOffset);
   CClientDC dc(NULL);
   dc.HIMETRICtoDP(&m_dragSize);
   dc.HIMETRICtoDP(&m_dragOffset);

   return OnDragOver(pDataObject, grfKeyState, point);
}

DROPEFFECT CMainView::OnDragOver(COleDataObject*,
   DWORD grfKeyState, CPoint point)
{
   point -= m_dragOffset;  // adjust target rect by original cursor offset

   // check for point outside logical area -- i.e. in hatched region
   // GetTotalSize() returns the size passed to SetScrollSizes
   CRect rectScroll(CPoint(0, 0), GetTotalSize());

   CRect rectItem(point,m_dragSize);
   if (rectItem.IsRectEmpty())
   {
      // some apps might have a null size in the object descriptor...
      rectItem.InflateRect(1,1);
   }
   rectItem.OffsetRect(GetDeviceScrollPosition());

   DROPEFFECT de = DROPEFFECT_NONE;
   CRect rectTemp;
   if (rectTemp.IntersectRect(rectScroll, rectItem))
   {
      // check for force link
      if ((grfKeyState & (MK_CONTROL|MK_SHIFT)) == (MK_CONTROL|MK_SHIFT))
         de = DROPEFFECT_LINK;
      // check for force copy
      else if ((grfKeyState & MK_CONTROL) == MK_CONTROL)
         de = DROPEFFECT_COPY;
      // check for force move
      else if ((grfKeyState & MK_ALT) == MK_ALT)
         de = DROPEFFECT_MOVE;
      // default -- recommended action is move
      else
         de = DROPEFFECT_MOVE;
   }

   if (point == m_dragPoint)
      return de;

   // otherwise, cursor has moved -- need to update the drag feedback
   CClientDC dc(this);
   if (m_prevDropEffect != DROPEFFECT_NONE)
   {
      // erase previous focus rect
      dc.DrawFocusRect(CRect(m_dragPoint, m_dragSize));
   }
   m_prevDropEffect = de;
   if (m_prevDropEffect != DROPEFFECT_NONE)
   {
      m_dragPoint = point;
      dc.DrawFocusRect(CRect(point, m_dragSize));
   }
   return de;
}

void CMainView::OnDragLeave()
{
   CClientDC dc(this);
   if (m_prevDropEffect != DROPEFFECT_NONE)
   {
      dc.DrawFocusRect(CRect(m_dragPoint,m_dragSize)); // erase previous focus rect
      m_prevDropEffect = DROPEFFECT_NONE;
   }
}

/////////////////////////////////////////////////////////////////////////////
// Commands for switching display aspects

void CMainView::OnObjectDisplayContent()
{
   if (m_pSelection == NULL)
      return;
   ASSERT_VALID(m_pSelection);
   m_pSelection->Invalidate();
   m_pSelection->SetDrawAspect(DVASPECT_CONTENT);
   m_pSelection->UpdateExtent();
   m_pSelection->Invalidate();
}

void CMainView::OnUpdateObjectDisplayContent(CCmdUI* pCmdUI)
{
   if (m_pSelection == NULL)
   {
      pCmdUI->Enable(FALSE);
      return;
   }
   ASSERT_VALID(m_pSelection);
   pCmdUI->SetCheck(m_pSelection->GetDrawAspect() == DVASPECT_CONTENT);
   pCmdUI->Enable(TRUE);
}

void CMainView::OnObjectDisplayAsIcon()
{
   if (m_pSelection == NULL)
      return;
   ASSERT_VALID(m_pSelection);
   m_pSelection->Invalidate();
   m_pSelection->SetDrawAspect(DVASPECT_ICON);
   m_pSelection->UpdateExtent();
   m_pSelection->Invalidate();
}

void CMainView::OnUpdateObjectDisplayAsIcon(CCmdUI* pCmdUI)
{
   if (m_pSelection == NULL)
   {
      pCmdUI->Enable(FALSE);
      return;
   }
   ASSERT_VALID(m_pSelection);
   pCmdUI->SetCheck(m_pSelection->GetDrawAspect() == DVASPECT_ICON);
   pCmdUI->Enable(TRUE);
}

void CMainView::UpdateActiveItem()
{
   // when there is an active item visible, sizing the window may cause
   //  more/less of the in-place object to become visible.
   //  (ie. the clipping rectangle changes with the size of the window)
   // a container supporting scrolling would also have to do this
   //  when scrolling the contents of the window.

   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL &&
      pActiveItem->GetItemState() == COleClientItem::activeUIState &&
      pActiveItem->GetActiveView() == this)
   {
      // this will update the item rectangles by calling
      //  OnGetPosRect & OnGetClipRect.
      pActiveItem->SetItemRects();
   }
}

void CMainView::OnUpdateEditClone(CCmdUI* pCmdUI)
{
   pCmdUI->Enable(m_pSelection != NULL);
}

void CMainView::OnEditClone()
{
   if (m_pSelection == NULL)
      return;

   BeginWaitCursor();

   CRectItem* pItem = NULL;
   try
   {
      // create item from dialog results
      pItem = GetDocument()->CreateItem();
      if (!pItem->CreateCloneFrom(m_pSelection))
         AfxThrowMemoryException();  // any exception will do

      // offset it so we can see the clone easier
      CRect rect(20, 20, 0, 0);
      ClientToDoc(rect);
      pItem->m_ptPos.x += rect.left;
      pItem->m_ptPos.y += rect.top;
      ASSERT_VALID(pItem);
   }
   catch(CException* pe)
   {
      // cleanup item, if allocated
      if (pItem != NULL)
         GetDocument()->DeleteItem(pItem);

      AfxMessageBox(IDP_FAILED_TO_CREATE);

      pe->Delete();
   }

   EndWaitCursor();
}

void CMainView::OnPasteSpecial()
{
   COlePasteSpecialDialog dlg;
   dlg.AddFormat(CMainDoc::m_cfPrivate, TYMED_HGLOBAL,
      IDS_PRIVATE_CF_DESCR, FALSE, FALSE);
   dlg.AddStandardFormats();
   if (dlg.DoModal() != IDOK)
      return;

   CRectItem* pItem = NULL;
   try
   {
      // Get the clipboard format of the selected
      CLIPFORMAT cf = dlg.m_ps.arrPasteEntries[dlg.m_ps.nSelectedIndex].fmtetc.cfFormat;
      if (cf == CMainDoc::m_cfPrivate)
      {
         BOOL bLink = dlg.GetSelectionType() ==
            COlePasteSpecialDialog::pasteLink;
         COleDataObject dataObject;
         dataObject.Attach(dlg.m_ps.lpSrcDataObj, FALSE);
         pItem = DoPasteItem(bLink, &dataObject, NULL, cf);

         // try to get initial presentation data
         pItem->UpdateLink();
      }
      else
      {
         pItem = GetDocument()->CreateItem();
         if (!dlg.CreateItem(pItem))
         {
            TRACE0("Warning: paste special failed to create item.\n");
            AfxThrowMemoryException();
         }

         // try to get initial presentation data
         pItem->UpdateLink();

         // try to get initial extent
         pItem->UpdateExtent();

         // allow document to offset item to avoid direct superimposition
         GetDocument()->AdjustItemPosition(pItem);

         // set the selection with bSafeSelect = TRUE
         SetSelection(pItem, TRUE);
         GetDocument()->SetModifiedFlag();
         GetDocument()->UpdateAllViews(NULL, 0, pItem);
      }
   }
   catch(CException* pe)
   {
      // cleanup item, if allocated
      if (pItem != NULL)
         GetDocument()->DeleteItem(pItem);
      AfxMessageBox(IDP_FAILED_TO_CREATE);
      pe->Delete();
      return;
   }
}

void CMainView::OnUpdateEditPaste(CCmdUI* pCmdUI)
{
   // determine if private or standard OLE formats are on the clipboard
   COleDataObject dataObj;
   BOOL bEnable = dataObj.AttachClipboard() &&
      (dataObj.IsDataAvailable(CMainDoc::m_cfPrivate) ||
       COleClientItem::CanCreateFromData(&dataObj));

   // enable command based on availability
   pCmdUI->Enable(bEnable);
}

void CMainView::OnObjectResetsize()
{
   ENSURE(m_pSelection != NULL);
   m_pSelection->ResetSize();
}

void CMainView::OnCancelInplace()
{
   // deactivate the inplace active item on this frame/view
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL)
      pActiveItem->Deactivate();
   ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
}

void CMainView::OnDestroy()
{
   CScrollView::OnDestroy();

   // deactivate the inplace active item on this view
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL && pActiveItem->GetActiveView() == this)
   {
      pActiveItem->Deactivate();
      ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
   }
}

void CMainView::OnUpdateOleEditProperties(CCmdUI* pCmdUI)
{
   pCmdUI->Enable(m_pSelection != NULL);
}

// edit properties dialog specific to OCLIENT
class COlePropertiesEx : public COlePropertiesDialog
{
public:
   COlePropertiesEx(COleClientItem* pItem,
      UINT nScaleMin = 10, UINT nScaleMax = 500, CWnd* pParentWnd = NULL)
      : COlePropertiesDialog(pItem, nScaleMin, nScaleMax, pParentWnd)
      { }

   virtual BOOL OnApplyScale(
      COleClientItem* pItem, int nCurrentScale, BOOL bRelativeToOrig);
};

BOOL COlePropertiesEx::OnApplyScale(
   COleClientItem* pItem, int nCurrentScale, BOOL bRelativeToOrig)
{
   if (nCurrentScale != -1)
   {
      ASSERT_VALID(pItem);
      CRectItem* pRectItem = (CRectItem*)pItem;
      ASSERT_KINDOF(CRectItem, pRectItem);

      // reset to original size if necessary
      if (bRelativeToOrig)
         pRectItem->ResetSize();

      // update extent to reflect scaling factor
      pRectItem->Invalidate();
      CSize size = pRectItem->GetSize();
      size.cx = MulDiv(size.cx, nCurrentScale, 100);
      size.cy = MulDiv(size.cy, nCurrentScale, 100);
      pRectItem->SetSize(size);
      pRectItem->Invalidate();
   }
   return TRUE;
}

void CMainView::OnOleEditProperties()
{
   ASSERT(m_pSelection != NULL);

   COlePropertiesEx dlg(m_pSelection);
   dlg.DoModal();
}

void CMainView::OnUpdateOleChangeSource(CCmdUI* pCmdUI)
{
   pCmdUI->Enable(m_pSelection != NULL && m_pSelection->GetType() == OT_LINK);
}

void CMainView::OnOleChangeSource()
{
   ASSERT(m_pSelection != NULL && m_pSelection->GetType() == OT_LINK);

   COleChangeSourceDialog dlg(m_pSelection);
   dlg.DoModal();
}
