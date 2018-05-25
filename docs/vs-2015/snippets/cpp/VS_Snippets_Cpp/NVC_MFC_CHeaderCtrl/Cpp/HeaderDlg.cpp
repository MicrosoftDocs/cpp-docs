// HeaderDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CHeaderCtrl.h"
#include "HeaderDlg.h"


// CHeaderDlg dialog

IMPLEMENT_DYNAMIC(CHeaderDlg, CDialog)

CHeaderDlg::CHeaderDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHeaderDlg::IDD, pParent)
{

}

CHeaderDlg::~CHeaderDlg()
{
}

void CHeaderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CHeaderDlg, CDialog)
END_MESSAGE_MAP()

void CHeaderDlg::InsertHeaderItems()
{
// <Snippet12>
   CString str;
   HDITEM  hdi;

   hdi.mask = HDI_TEXT | HDI_WIDTH | HDI_FORMAT | HDI_IMAGE;
   hdi.cxy = 100; // Make all columns 100 pixels wide.
   hdi.fmt = HDF_STRING | HDF_CENTER;

   // Insert 6 columns in the header control.
   for (int i=0; i < 6; i++)
   {
      str.Format(TEXT("column %d"), i);
      hdi.pszText = str.GetBuffer(0);
      hdi.iImage = i % 3;

      m_myHeaderCtrl.InsertItem(i, &hdi);
   }
// </Snippet12>
}


// CHeaderDlg message handlers

BOOL CHeaderDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CWnd* pParentWnd = this;

// <Snippet1>
   // Declare a local CHeaderCtrl object.
   CHeaderCtrl  myHeaderCtrl;

   // Declare a dynamic CHeaderCtrl object.
   CHeaderCtrl* pmyHeaderCtrl = new CHeaderCtrl;
// </Snippet1>

   delete pmyHeaderCtrl;
   pmyHeaderCtrl = NULL;

// <Snippet4>
   // pParentWnd is a pointer to the parent window.
   m_myHeaderCtrl.Create(WS_CHILD | WS_VISIBLE | HDS_HORZ,
      CRect(10, 10, 600, 50), pParentWnd, 1);
// </Snippet4>

// <Snippet9>
   // The new image list of the header control.
   m_HeaderImages.Create(16, 16, ILC_COLOR, 2, 2);
   m_HeaderImages.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
   m_HeaderImages.Add(AfxGetApp()->LoadIcon(IDI_ICON2));	
   m_HeaderImages.Add(AfxGetApp()->LoadIcon(IDI_ICON3));

   ASSERT(m_myHeaderCtrl.GetImageList() == NULL);

   m_myHeaderCtrl.SetImageList(&m_HeaderImages);
   ASSERT(m_myHeaderCtrl.GetImageList() == &m_HeaderImages);
// </Snippet9>

   InsertHeaderItems();

   {
// <Snippet10>
      LPCTSTR lpszmyString = _T("column 2");
      LPCTSTR lpszmyString2 = _T("vertical 2");

      // Find the item whose text matches lpszmyString, and 
      // replace it with lpszmyString2.
      int    i, nCount = m_myHeaderCtrl.GetItemCount();
      HDITEM hdi;
      enum   { sizeOfBuffer = 256 };
      TCHAR  lpBuffer[sizeOfBuffer];
      bool   fFound = false;

      hdi.mask = HDI_TEXT;
      hdi.pszText = lpBuffer;
      hdi.cchTextMax = sizeOfBuffer;

      for (i=0; !fFound && (i < nCount); i++)
      {
         m_myHeaderCtrl.GetItem(i, &hdi);

         if (_tcsncmp(hdi.pszText, lpszmyString, sizeOfBuffer) == 0)
         {
            _tcscpy_s(hdi.pszText, sizeOfBuffer, lpszmyString2);
            m_myHeaderCtrl.SetItem(i, &hdi);
            fFound = true;
         }
      }
// </Snippet10>
   }

   {
// <Snippet11>
      // Reverse the order of the items in the header control.
      // (i.e. make the first item the last one, the last item
      // the first one, and so on ...).
      int   nCount = m_myHeaderCtrl.GetItemCount();
      LPINT pnOrder = (LPINT) malloc(nCount*sizeof(int));
      ASSERT(pnOrder != NULL);
      if (NULL != pnOrder)
      {
         m_myHeaderCtrl.GetOrderArray(pnOrder, nCount);

         int i, j, nTemp;
         for (i=0, j=nCount-1; i < j; i++, j--)
         {
            nTemp = pnOrder[i];
            pnOrder[i] = pnOrder[j];
            pnOrder[j] = nTemp;
         }

         m_myHeaderCtrl.SetOrderArray(nCount, pnOrder);
         free(pnOrder);
      }

// </Snippet11>
   }

   {
// <Snippet13>
      HDLAYOUT  hdl;
      WINDOWPOS wpos;
      RECT      rc;

      // Reposition the header control so that it is placed at 
      // the top of its parent window's client area.
      m_myHeaderCtrl.GetParent()->GetClientRect(&rc);

      hdl.prc = &rc;
      hdl.pwpos = &wpos;
      if (m_myHeaderCtrl.Layout(&hdl))
      {
         m_myHeaderCtrl.SetWindowPos(
            CWnd::FromHandle(wpos.hwndInsertAfter),
            wpos.x,
            wpos.y,
            wpos.cx,
            wpos.cy,
            wpos.flags | SWP_SHOWWINDOW);
      }

// </Snippet13>
   }

// <Snippet15>
   int iFltr = m_myHeaderCtrl.SetFilterChangeTimeout(15);
// </Snippet15>
   UNREFERENCED_PARAMETER(iFltr);

// <Snippet7>
   int iFilter = m_myHeaderCtrl.EditFilter(1, TRUE);
// </Snippet7>
   UNREFERENCED_PARAMETER(iFilter);

// <Snippet14>
   int iOldMargin = m_myHeaderCtrl.SetBitmapMargin(15);
// </Snippet14>
   UNREFERENCED_PARAMETER(iOldMargin);

// <Snippet8>
   int iMargin = m_myHeaderCtrl.GetBitmapMargin();
// </Snippet8>
   UNREFERENCED_PARAMETER(iMargin);

// <Snippet3>
   int iFilt = m_myHeaderCtrl.ClearFilter(1);
// </Snippet3>
   UNREFERENCED_PARAMETER(iFilt);

// <Snippet2>
   m_myHeaderCtrl.ClearAllFilters();
// </Snippet2>

// <Snippet5>
   int nCount = m_myHeaderCtrl.GetItemCount();

   // Delete all of the items.
   for (int i=0;i < nCount;i++)
   {
      m_myHeaderCtrl.DeleteItem(0);
   }
// </Snippet5>

   InsertHeaderItems();

   return TRUE;  // return TRUE unless you set the focus to a control
}

BEGIN_MESSAGE_MAP(CMyHeaderCtrl, CHeaderCtrl)
   ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// <Snippet6>
// NOTE: CMyHeaderCtrl is a class derived from CHeaderCtrl.
// The CMyHeaderCtrl object was created as follows:
//
//   CMyHeaderCtrl m_myHeader;
//   myHeader.Create(WS_CHILD | WS_VISIBLE | HDS_HORZ,
//      CRect(10, 10, 600, 50), pParentWnd, 1);

// This example implements the DrawItem method for a 
// CHeaderCtrl-derived class that draws every item as a
// 3D button using the text color red.
void CMyHeaderCtrl::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
   // This code only works with header controls.
   ASSERT(lpDrawItemStruct->CtlType == ODT_HEADER);

   HDITEM hdi;
   const int c_cchBuffer = 256;
   TCHAR  lpBuffer[c_cchBuffer];

   hdi.mask = HDI_TEXT;
   hdi.pszText = lpBuffer;
   hdi.cchTextMax = c_cchBuffer;

   GetItem(lpDrawItemStruct->itemID, &hdi);

   // Draw the button frame.
   ::DrawFrameControl(lpDrawItemStruct->hDC, 
      &lpDrawItemStruct->rcItem, DFC_BUTTON, DFCS_BUTTONPUSH);

   // Draw the items text using the text color red.
   COLORREF crOldColor = ::SetTextColor(lpDrawItemStruct->hDC, 
      RGB(255,0,0));
   ::DrawText(lpDrawItemStruct->hDC, lpBuffer, 
      (int)_tcsnlen(lpBuffer, c_cchBuffer), 
      &lpDrawItemStruct->rcItem, DT_SINGLELINE|DT_VCENTER|DT_CENTER);
   ::SetTextColor(lpDrawItemStruct->hDC, crOldColor);
}
// </Snippet6>

// <Snippet16>
void CMyHeaderCtrl::OnMouseMove(UINT nFlags, CPoint point)
{
   SetHotDivider(point);   

   CHeaderCtrl::OnMouseMove(nFlags, point);
}
// </Snippet16>