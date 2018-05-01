// MyListView.cpp : implementation of the CMyListView class
//

#include "stdafx.h"

#include "MFCListView.h"

#include "MFCListViewDoc.h"
#include "MyListView.h"
#include "MyDataSource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyListView

IMPLEMENT_DYNCREATE(CMyListView, CListView)

BEGIN_MESSAGE_MAP(CMyListView, CListView)
   ON_NOTIFY_REFLECT(LVN_BEGINDRAG, &CMyListView::OnLvnBegindrag)
   ON_WM_CREATE()
   ON_COMMAND(ID_EDIT_COPY, &CMyListView::OnEditCopy)
   ON_COMMAND(ID_EDIT_CUT, &CMyListView::OnEditCut)
END_MESSAGE_MAP()

// CMyListView construction/destruction

CMyListView::CMyListView()
{
   // TODO: add construction code here

}

CMyListView::~CMyListView()
{
}

BOOL CMyListView::PreCreateWindow(CREATESTRUCT& cs)
{
   cs.style |= LVS_REPORT;

   return CListView::PreCreateWindow(cs);
}

// <Snippet7>
void CMyListView::OnInitialUpdate()
{
   CListView::OnInitialUpdate();

   // this code only works for a report-mode list view
   ASSERT(GetStyle() & LVS_REPORT);

// <Snippet4>
   CListCtrl& listCtrl = GetListCtrl();
// </Snippet4>

   // Insert a column. This override is the most convenient.
   listCtrl.InsertColumn(0, _T("Player Name"), LVCFMT_LEFT);

   // The other InsertColumn() override requires an initialized
   // LVCOLUMN structure.
   LVCOLUMN col;
   col.mask = LVCF_FMT | LVCF_TEXT;
   col.pszText = _T("Jersey Number");
   col.fmt = LVCFMT_LEFT;
   listCtrl.InsertColumn(1, &col);

   // Set reasonable widths for our columns
   listCtrl.SetColumnWidth(0, LVSCW_AUTOSIZE_USEHEADER);
   listCtrl.SetColumnWidth(1, LVSCW_AUTOSIZE_USEHEADER);
}
// </Snippet7>

// CMyListView diagnostics

#ifdef _DEBUG
void CMyListView::AssertValid() const
{
   CListView::AssertValid();
}

void CMyListView::Dump(CDumpContext& dc) const
{
   CListView::Dump(dc);
}

CMFCListViewDoc* CMyListView::GetDocument() const // non-debug version is inline
{
   ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCListViewDoc)));
   return (CMFCListViewDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyListView message handlers

// <Snippet1>
void CMyListView::OnLvnBegindrag(NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(pResult);

   LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);

   CMyDataSource* pDataSrc = new CMyDataSource();
   if (NULL != pDataSrc)
   {
      pDataSrc->Initialize(pNMLV, this);
      pDataSrc->DelayRenderData(
         (CLIPFORMAT)RegisterClipboardFormat(_T("TIGroupFiles")));
      pDataSrc->DoDragDrop();
      pDataSrc->InternalRelease();
   }
}
// </Snippet1>

BOOL CMyListView::OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point)
{
   UNREFERENCED_PARAMETER(dropEffect);
   UNREFERENCED_PARAMETER(point);

   BOOL bSuccess = FALSE;
   STGMEDIUM stg = {0};

   bSuccess = pDataObject->GetData(
      (CLIPFORMAT)RegisterClipboardFormat(_T("TIGroupFiles")), &stg);
   ReleaseStgMedium(&stg);

   return bSuccess;
}

DROPEFFECT CMyListView::OnDragEnter(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point)
{
   UNREFERENCED_PARAMETER(pDataObject);
   UNREFERENCED_PARAMETER(dwKeyState);
   UNREFERENCED_PARAMETER(point);

   return DROPEFFECT_COPY;
}

int CMyListView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CListView::OnCreate(lpCreateStruct) == -1)
      return -1;

   m_DropTarg.Register(this);

   return 0;
}

DROPEFFECT CMyListView::OnDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point)
{
   UNREFERENCED_PARAMETER(pDataObject);
   UNREFERENCED_PARAMETER(dwKeyState);
   UNREFERENCED_PARAMETER(point);

   return DROPEFFECT_COPY;
}

// <Snippet2>
void CMyListView::OnEditCopy()
{
   if ( !OpenClipboard() )
   {
      AfxMessageBox( _T("Cannot open the Clipboard") );
      return;
   }
   // Remove the current Clipboard contents
   if( !EmptyClipboard() )
   {
      AfxMessageBox( _T("Cannot empty the Clipboard") );
      return;
   }
   // Get the currently selected data
   HGLOBAL hGlob = GlobalAlloc(GMEM_FIXED, 64);
   strcpy_s((char*)hGlob, 64, "Current selection\r\n");
   // For the appropriate data formats...
   if ( ::SetClipboardData( CF_TEXT, hGlob ) == NULL )
   {
      CString msg;
      msg.Format(_T("Unable to set Clipboard data, error: %d"), GetLastError());
      AfxMessageBox( msg );
      CloseClipboard();
      GlobalFree(hGlob);
      return;
   }
   CloseClipboard();
}
// </Snippet2>

// <Snippet3>
void CMyListView::OnEditCut()
{
   // Create an OLE data source on the heap
   COleDataSource* pData = new COleDataSource;
   // Get the currently selected data
   HGLOBAL hGlob = GlobalAlloc(GMEM_FIXED, 64);
   strcpy_s((char*)hGlob, 64, "Current selection\r\n");
   // For the appropriate data formats...
   pData->CacheGlobalData( CF_TEXT, hGlob );
   // The Clipboard now owns the allocated memory
   // and will delete this data object
   // when new data is put on the Clipboard
   pData->SetClipboard();
}
// </Snippet3>