// MFCOleServerView.cpp : implementation of the CMFCOleServerView class
//

#include "stdafx.h"
#include <afxodlgs.h>
#include "MFCOleServer.h"

#include "MFCOleServerDoc.h"
#include "MFCOleServerView.h"
#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCOleServerView

IMPLEMENT_DYNCREATE(CMFCOleServerView, CView)

BEGIN_MESSAGE_MAP(CMFCOleServerView, CView)
   ON_COMMAND(ID_CANCEL_EDIT_SRVR, &CMFCOleServerView::OnCancelEditSrvr)
   ON_COMMAND(ID_OLESERVER_GETSERVERITEM, &CMFCOleServerView::OnOleserverGetserveritem)
END_MESSAGE_MAP()

// CMFCOleServerView construction/destruction

CMFCOleServerView::CMFCOleServerView()
{
   // TODO: add construction code here

}

CMFCOleServerView::~CMFCOleServerView()
{
}

BOOL CMFCOleServerView::PreCreateWindow(CREATESTRUCT& cs)
{
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return CView::PreCreateWindow(cs);
}

// CMFCOleServerView drawing

void CMFCOleServerView::OnDraw(CDC* /*pDC*/)
{
   CMFCOleServerDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);
   if (!pDoc)
      return;

   // TODO: add draw code for native data here
}


// OLE Server support

// The following command handler provides the standard keyboard
//  user interface to cancel an in-place editing session.  Here,
//  the server (not the container) causes the deactivation
void CMFCOleServerView::OnCancelEditSrvr()
{
   GetDocument()->OnDeactivateUI(FALSE);
}


// CMFCOleServerView diagnostics

#ifdef _DEBUG
void CMFCOleServerView::AssertValid() const
{
   CView::AssertValid();
}

void CMFCOleServerView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}

CMFCOleServerDoc* CMFCOleServerView::GetDocument() const // non-debug version is inline
{
   ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCOleServerDoc)));
   return (CMFCOleServerDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCOleServerView message handlers

void CMFCOleServerView::OnOleserverGetserveritem()
{
   CMFCOleServerDoc* pDoc = GetDocument();
// <Snippet2>
   // pDoc points to a COleDocument object
   POSITION pos = pDoc->GetStartPosition();
   COleServerItem *pItem;
   while ((pItem = pDoc->GetNextServerItem(pos)) != NULL)
   {
      // Use pItem
   }
// </Snippet2>
}