// ListBoxDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CListBox.h"
#include "ListBoxDlg.h"

void CSyncListBox_Test(CWnd* pParentWnd);

// CListBoxDlg dialog

IMPLEMENT_DYNAMIC(CListBoxDlg, CDialog)

CListBoxDlg::CListBoxDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CListBoxDlg::IDD, pParent)
{

}

CListBoxDlg::~CListBoxDlg()
{
}

void CListBoxDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CListBoxDlg, CDialog)
END_MESSAGE_MAP()


// CListBoxDlg message handlers

BOOL CListBoxDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet1>
   // Declare a local CListBox object.
   CListBox myListBox;

   // Declare a dynamic CListBox object.
   CListBox* pmyListBox = new CListBox;
// </Snippet1>
   delete pmyListBox;
   pmyListBox = NULL;

   CWnd* pParentWnd = this;

// <Snippet2>
   // pParentWnd is a pointer to the parent window.
   m_myListBox.Create(WS_CHILD|WS_VISIBLE|LBS_STANDARD|WS_HSCROLL, 
      CRect(10,10,200,200), pParentWnd, IDC_MYLISTBOX);
// </Snippet2>

   m_myODListBox.Create(
      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
      CRect(10,210,200,410), pParentWnd, IDC_MYODLISTBOX);

   myListBox.Create(WS_CHILD|WS_VISIBLE|LBS_STANDARD|WS_HSCROLL|
      LBS_MULTICOLUMN|LBS_USETABSTOPS|LBS_MULTIPLESEL, 
      CRect(10,420,200,620), pParentWnd, IDC_MYLOCALLISTBOX);

   {
   for (int i = 0; i < 10; i++)
   {
      const int c_cchText = 24;
      LPTSTR pszText = (LPTSTR)malloc(c_cchText * sizeof(TCHAR));
      _stprintf_s(pszText, c_cchText, _T("OD item string %d"), i);
      m_myODListBox.AddString(pszText);
   }
   }

// <Snippet28>
   // Select half of the items.
   m_myODListBox.SelItemRange(TRUE, 0, m_myODListBox.GetCount()/2);
// </Snippet28>

// <Snippet38>
   // Select all of the items with an even index and
   // deselect all others.
   for (int i = 0; i < m_myODListBox.GetCount(); i++)
   {
      m_myODListBox.SetSel(i, ((i%2) == 0));
   }
// </Snippet38>

   {
// <Snippet20>
   // Get the indexes of all the selected items.
   int nCount = m_myODListBox.GetSelCount();
   CArray<int,int> aryListBoxSel;

   aryListBoxSel.SetSize(nCount);
   m_myODListBox.GetSelItems(nCount, aryListBoxSel.GetData()); 

   // Dump the selection array.
   AFXDUMP(aryListBoxSel);
// </Snippet20>
   }

   {
   CString str;
   for (int i = 0; i < 10; i++)
   {
      str.Format(_T("Some other item string %d"), i);
      myListBox.AddString( str );
   }
   }

   {
// <Snippet36>
   // Set the height of every item to be the
   // vertical size of the item's text extent.
   CString str;
   CSize   sz;
   CDC*    pDC = myListBox.GetDC();
   for (int i = 0; i < myListBox.GetCount(); i++)
   {
      myListBox.GetText(i, str);
      sz = pDC->GetTextExtent(str);

      myListBox.SetItemHeight(i, sz.cy);
   }
   myListBox.ReleaseDC(pDC);
// </Snippet36>
   }

   {
// <Snippet31>
   // Find the pixel width of the largest item.
   CString str;
   CSize   sz;
   int     dx = 0;
   CDC*    pDC = myListBox.GetDC();
   for (int i=0;i < myListBox.GetCount();i++)
   {
      myListBox.GetText( i, str );
      sz = pDC->GetTextExtent(str);

      if (sz.cx > dx)
         dx = sz.cx;
   }
   myListBox.ReleaseDC(pDC);

   // Set the column width of the first column to be one and 1/3 units
   // of the largest string. 
   myListBox.SetColumnWidth(dx*4/3);
// </Snippet31>
   }

   {
// <Snippet39>
   // Find the pixel width of the largest first substring.
   CString str;
   CSize   sz;
   int     nIndex, dx = 0;
   CDC*    pDC = myListBox.GetDC();
   for (int i = 0; i < myListBox.GetCount(); i++)
   {
      myListBox.GetText( i, str );

      if ((nIndex = str.Find('\t')) != -1)
         str = str.Right(nIndex);

      sz = pDC->GetTextExtent(str);

      if (sz.cx > dx)
         dx = sz.cx;
   }
   myListBox.ReleaseDC(pDC);

   // Set tab stops at every one and 1/3 units
   // of the largest string. 
   // NOTE: Convert pixels to dialog units.
   myListBox.SetTabStops((dx*4/3 * 4) / LOWORD(::GetDialogBaseUnits()));
// </Snippet39>
   }

   {
// <Snippet23>
   // Initialize the storage of the list box to be 256 strings with
   // about 10 characters per string, performance improvement.
   int n = m_myListBox.InitStorage(256, 10);
   ASSERT(n != LB_ERRSPACE);

   // Add 256 items to the list box.
   CString str;
   for (int i = 0; i < 256; i++)
   {
      str.Format(_T("item string %d"), i);
      m_myListBox.AddString( str );
   }
// </Snippet23>
   }

// <Snippet26>
   // Delete all the items from the list box.
   m_myListBox.ResetContent();
   ASSERT(m_myListBox.GetCount() == 0);
// </Snippet26>

   {
// <Snippet3>
   // Add 10 items to the list box.
   CString str;
   for (int i = 0; i < 10; i++)
   {
      str.Format(_T("item string %d"), i);
      m_myListBox.AddString( str );
   }
// </Snippet3>
   }

// <Snippet30>
   // Set the caret to be the middle item.
   m_myListBox.SetCaretIndex(m_myListBox.GetCount()/2);
   ASSERT(m_myListBox.GetCaretIndex() == m_myListBox.GetCount()/2);
// </Snippet30>

// <Snippet7>
   // Delete every other item from the list box.
   for (int i = 0; i < m_myListBox.GetCount(); i++)
   {
      m_myListBox.DeleteString(i);
   }
// </Snippet7>

   {
// <Snippet24>
   // Insert items in between existing items.
   CString str;
   int n = m_myListBox.GetCount();
   for (int i = 0; i < n; i++)
   {
      str.Format(_T("item string %c"), (char)('A' + i));
      m_myListBox.InsertString(2 * i, str);
   }
// </Snippet24>
   }

   {
// <Snippet11>
   // The string to match.
   LPCTSTR lpszmyString = _T("item string 3");

   // Delete all items that exactly match the specified string.
   int nIndex = 0;
   while ((nIndex=m_myListBox.FindStringExact(nIndex, lpszmyString)) != LB_ERR)
   {
      m_myListBox.DeleteString(nIndex);
   }
// </Snippet11>
   }

   {
// <Snippet10>
      // The string to match.
   LPCTSTR lpszmyString = _T("item");

   // Delete all items that begin with the specified string.
   int nIndex = 0;
   while ((nIndex = m_myListBox.FindString(nIndex, lpszmyString)) != LB_ERR)
   {
      m_myListBox.DeleteString( nIndex );
   }
// </Snippet10>
   }

   {
// <Snippet12>
   // Add 10 items to the list box.
   CString str;
   for (int i = 0; i < 10; i++)
   {
      str.Format(_T("item %d"), i);
      m_myListBox.AddString(str);
   }

   // Verify that 10 items were added to the list box.
   ASSERT(m_myListBox.GetCount() == 10);
// </Snippet12>
   }

   {
// <Snippet27>
   // The string to match.
   LPCTSTR lpszmyString = _T("item 5");

   // Select the item that begins with the specified string.
   int nIndex = m_myListBox.SelectString(0, lpszmyString);
   ASSERT(nIndex != LB_ERR);
// </Snippet27>
   }

   {
// <Snippet13>
   // Select the next item of the currently selected one.
   int nIndex = m_myListBox.GetCurSel();
   int nCount = m_myListBox.GetCount();
   if ((nIndex != LB_ERR) && (nCount > 1))
   {
      if (++nIndex < nCount)
         m_myListBox.SetCurSel(nIndex);
      else
         m_myListBox.SetCurSel(0);
   }
// </Snippet13>
   }

   {
// <Snippet32>
   // Select the last item in the list box.
   int nCount = m_myListBox.GetCount();
   if (nCount > 0)
      m_myListBox.SetCurSel(nCount - 1);
// </Snippet32>
   }

// <Snippet15>
   // If any item's data is equal to zero then reset it to -1.
   for (int i=0; i < m_myListBox.GetCount(); i++)
   {
      if (m_myListBox.GetItemData(i) == 0)
      {
         m_myListBox.SetItemData(i, (DWORD) -1);
      }
   }
// </Snippet15>

// <Snippet34>
   // Set the data of each item to be equal to its index.
   for (int i=0;i < m_myListBox.GetCount();i++)
   {
      m_myListBox.SetItemData(i, i);
   }
// </Snippet34>

   m_myListBox.SetItemDataPtr(3, pParentWnd);

   {
// <Snippet16>
   LPVOID lpmyPtr = pParentWnd;

   // Check all the items in the list box; if an item's
   // data pointer is equal to my pointer then reset it to NULL.
   for (int i=0; i < m_myListBox.GetCount(); i++)
   {
      if (m_myListBox.GetItemDataPtr(i) == lpmyPtr)
      {
         m_myListBox.SetItemDataPtr(i, NULL);
      }
   }
// </Snippet16>
   }

// <Snippet35>
   // Set the data pointer of each item to be NULL.
   for (int i=0;i < m_myListBox.GetCount();i++)
   {
      m_myListBox.SetItemDataPtr(i, NULL);
   }
// </Snippet35>

   {
// <Snippet18>
   // Dump all of the items bounds.
   CString str;
   RECT r;
   for (int i = 0; i < m_myListBox.GetCount(); i++)
   {
      m_myListBox.GetItemRect(i, &r);

      str.Format(_T("item %d: left = %d, top = %d, right = %d, ")
         _T("bottom = %d\r\n"),
         i,
         r.left,
         r.top,
         r.right,
         r.bottom);
      AFXDUMP(str);
   }
// </Snippet18>
   }

   {
// <Snippet19>
// Dump all of the items select state.
   CString str;
   for (int i=0;i < m_myListBox.GetCount();i++)
   {
      str.Format(_T("item %d: select state is %s\r\n"),
         i,
         m_myListBox.GetSel( i ) > 0 ? _T("true") : _T("false"));
      AFXDUMP(str);
   }
// </Snippet19>
   }

   {
// <Snippet8>
   // Add all the files and directories in the windows directory.
   TCHAR lpszWinPath[MAX_PATH], lpszOldPath[MAX_PATH];
   ::GetWindowsDirectory(lpszWinPath, MAX_PATH);

   ::GetCurrentDirectory(MAX_PATH, lpszOldPath);
   ::SetCurrentDirectory(lpszWinPath);

   m_myListBox.ResetContent();
   m_myListBox.Dir(DDL_READWRITE|DDL_DIRECTORY, _T("*.*"));

   ::SetCurrentDirectory(lpszOldPath);
// </Snippet8>
   }

   {
// <Snippet14>
   // Find the longest string in the list box.
   CString str;
   CSize   sz;
   int     dx=0;
   CDC*    pDC = m_myListBox.GetDC();
   for (int i=0;i < m_myListBox.GetCount();i++)
   {
      m_myListBox.GetText( i, str );
      sz = pDC->GetTextExtent(str);

      if (sz.cx > dx)
         dx = sz.cx;
   }
   m_myListBox.ReleaseDC(pDC);

   // Set the horizontal extent only if the current extent is not large enough.
   if (m_myListBox.GetHorizontalExtent() < dx)
   {
      m_myListBox.SetHorizontalExtent(dx);
      ASSERT(m_myListBox.GetHorizontalExtent() == dx);
   }
// </Snippet14>
   }

   {
// <Snippet33>
   // Find the longest string in the list box.
   CString    str;
   CSize      sz;
   int        dx = 0;
   TEXTMETRIC tm;
   CDC*       pDC = m_myListBox.GetDC();
   CFont*     pFont = m_myListBox.GetFont();

   // Select the listbox font, save the old font
   CFont* pOldFont = pDC->SelectObject(pFont);
   // Get the text metrics for avg char width
   pDC->GetTextMetrics(&tm); 

   for (int i = 0; i < m_myListBox.GetCount(); i++)
   {
      m_myListBox.GetText(i, str);
      sz = pDC->GetTextExtent(str);

      // Add the avg width to prevent clipping
      sz.cx += tm.tmAveCharWidth;

      if (sz.cx > dx)
         dx = sz.cx;
   }
   // Select the old font back into the DC
   pDC->SelectObject(pOldFont);
   m_myListBox.ReleaseDC(pDC);

   // Set the horizontal extent so every character of all strings 
   // can be scrolled to.
   m_myListBox.SetHorizontalExtent(dx);
// </Snippet33>
   }

   {
// <Snippet17>
   // Set the height of every item so the item
   // is completely visible.
   CString str;
   CSize   sz;
   CDC*    pDC = m_myListBox.GetDC();
   for (int i=0;i < m_myListBox.GetCount();i++)
   {
      m_myListBox.GetText( i, str );
      sz = pDC->GetTextExtent(str);

      // Only want to set the item height if the current height
      // is not big enough.
      if (m_myListBox.GetItemHeight(i) < sz.cy)
         m_myListBox.SetItemHeight( i, sz.cy );
   }
   m_myListBox.ReleaseDC(pDC);
// </Snippet17>
   }

   {
// <Snippet21>
   // Dump all of the items in the list box.
   CString str, str2;
   int n;
   for (int i = 0; i < m_myListBox.GetCount(); i++)
   {
      n = m_myListBox.GetTextLen(i);
      m_myListBox.GetText(i, str.GetBuffer(n));
      str.ReleaseBuffer();

      str2.Format(_T("item %d: %s\r\n"), i, str.GetBuffer(0));
      AFXDUMP(str2);
   }
// </Snippet21>
   }

   {
// <Snippet22>
   // Want an item in the bottom half to be the first visible item.
   int n = m_myListBox.GetCount()/2;
   if (m_myListBox.GetTopIndex() < n)
   {
      m_myListBox.SetTopIndex(n);
      ASSERT(m_myListBox.GetTopIndex() == n);
   }
// </Snippet22>
   }

// <Snippet40>
   // Set the first visible item in the list box to be the middle item
   m_myListBox.SetTopIndex(m_myListBox.GetCount()/2);
// </Snippet40>

   {
// <Snippet37>
   // My LCID to use.
   LCID mylcid = MAKELCID(MAKELANGID(LANG_SPANISH, SUBLANG_SPANISH_MEXICAN), 
      SORT_DEFAULT);

   // Force the list box to use my locale.
   m_myListBox.SetLocale(mylcid);
   ASSERT(m_myListBox.GetLocale() == mylcid);
// </Snippet37>
   }

   CSyncListBox_Test(this);

   return TRUE;  // return TRUE unless you set the focus to a control
}

// CMyODListBox

IMPLEMENT_DYNAMIC(CMyODListBox, CListBox)

CMyODListBox::CMyODListBox()
{

}

CMyODListBox::~CMyODListBox()
{
}


BEGIN_MESSAGE_MAP(CMyODListBox, CListBox)
   ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()



// CMyODListBox message handlers


// <Snippet4>
// CMyODListBox is my owner-drawn list box derived from CListBox. This 
// example moves the caret down one item on a numeric key and up one item 
// on an alphabetic key. The list box control was created with the 
// following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
int CMyODListBox::CharToItem(UINT nChar, UINT nIndex)
{
   // On a numeric key, move the caret up one item.
   if (isdigit(nChar) && (nIndex > 0))
   {
      SetCaretIndex(nIndex-1);
   }
   // On an alphabetic key, move the caret down one item.
   else if (isalpha(nChar) && (nIndex < (UINT)GetCount()))
   {
      SetCaretIndex(nIndex+1);
   }

   // Do not perform any default processing.
   return -1;
}
// </Snippet4>

// <Snippet5>
// CMyODListBox is my owner-drawn list box derived from CListBox. This 
// example compares two items using _tcscmp to sort items in reverse 
// alphabetical order. The list box control was created with the 
// following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
int CMyODListBox::CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct)
{
   ASSERT(lpCompareItemStruct->CtlType == ODT_LISTBOX);
   LPCTSTR lpszText1 = (LPCTSTR) lpCompareItemStruct->itemData1;
   ASSERT(lpszText1 != NULL);
   LPCTSTR lpszText2 = (LPCTSTR) lpCompareItemStruct->itemData2;
   ASSERT(lpszText2 != NULL);

   return _tcscmp(lpszText2, lpszText1);
}
// </Snippet5>

// <Snippet6>
// CMyODListBox is my owner-drawn list box derived from CListBox. This 
// example simply frees the item's text. The list box control was created 
// with the following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
void CMyODListBox::DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct)
{
   ASSERT(lpDeleteItemStruct->CtlType == ODT_LISTBOX);
   LPVOID lpszText = (LPVOID) lpDeleteItemStruct->itemData;
   ASSERT(lpszText != NULL);

   free(lpszText);

   CListBox::DeleteItem(lpDeleteItemStruct);
}
// </Snippet6>

// <Snippet9>
// CMyODListBox is my owner-drawn list box derived from CListBox. This 
// example draws an item's text centered vertically and horizontally. The 
// list box control was created with the following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
void CMyODListBox::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
   ASSERT(lpDrawItemStruct->CtlType == ODT_LISTBOX);
   LPCTSTR lpszText = (LPCTSTR) lpDrawItemStruct->itemData;
   ASSERT(lpszText != NULL);
   CDC dc;

   dc.Attach(lpDrawItemStruct->hDC);

   // Save these value to restore them when done drawing.
   COLORREF crOldTextColor = dc.GetTextColor();
   COLORREF crOldBkColor = dc.GetBkColor();

   // If this item is selected, set the background color 
   // and the text color to appropriate values. Also, erase
   // rect by filling it with the background color.
   if ((lpDrawItemStruct->itemAction | ODA_SELECT) &&
      (lpDrawItemStruct->itemState & ODS_SELECTED))
   {
      dc.SetTextColor(::GetSysColor(COLOR_HIGHLIGHTTEXT));
      dc.SetBkColor(::GetSysColor(COLOR_HIGHLIGHT));
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, 
         ::GetSysColor(COLOR_HIGHLIGHT));
   }
   else
   {
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, crOldBkColor);
   }

   // If this item has the focus, draw a red frame around the
   // item's rect.
   if ((lpDrawItemStruct->itemAction | ODA_FOCUS) &&
      (lpDrawItemStruct->itemState & ODS_FOCUS))
   {
      CBrush br(RGB(255, 0, 0));
      dc.FrameRect(&lpDrawItemStruct->rcItem, &br);
   }

   // Draw the text.
   dc.DrawText(
      lpszText,
      (int)_tcslen(lpszText),
      &lpDrawItemStruct->rcItem,
      DT_CENTER|DT_SINGLELINE|DT_VCENTER);

   // Reset the background color and the text color back to their
   // original values.
   dc.SetTextColor(crOldTextColor);
   dc.SetBkColor(crOldBkColor);

   dc.Detach();
}
// </Snippet9>

// <Snippet25>
// CMyODListBox is my owner-drawn list box derived from CListBox. This 
// example measures an item and sets the height of the item to twice the 
// vertical extent of its text. The list box control was created with the 
// following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
void CMyODListBox::MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct)
{
   ASSERT(lpMeasureItemStruct->CtlType == ODT_LISTBOX);
   LPCTSTR lpszText = (LPCTSTR) lpMeasureItemStruct->itemData;
   ASSERT(lpszText != NULL);
   CSize   sz;
   CDC*    pDC = GetDC();

   sz = pDC->GetTextExtent(lpszText);

   ReleaseDC(pDC);

   lpMeasureItemStruct->itemHeight = 2*sz.cy;
}
// </Snippet25>

// <Snippet29>
void CMyODListBox::OnLButtonDown(UINT nFlags, CPoint point)
{
   BOOL bOutside = TRUE;
   UINT uItem = ItemFromPoint(point, bOutside);

   if (!bOutside)
   {
      // Set the anchor to be the middle item.
      SetAnchorIndex(uItem);
      ASSERT((UINT)GetAnchorIndex() == uItem);
   }

   CListBox::OnLButtonDown(nFlags, point);
}
// </Snippet29>

// <Snippet41>
// CMyODListBox is my owner-drawn list box derived from CListBox. This 
// example moves the caret down one item on the down key and up one item 
// on the up key. The list box control was created with the following 
// code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
int CMyODListBox::VKeyToItem(UINT nKey, UINT nIndex)
{
   // On key up, move the caret up one item.
   if ((nKey == VK_UP) && (nIndex > 0))
   {
      SetCaretIndex(nIndex-1);
   }
   // On key down, move the caret down one item.
   else if ((nKey == VK_DOWN) && (nIndex < (UINT)GetCount()))
   {
      SetCaretIndex(nIndex+1);
   }
   
   // Do not perform any default processing.
   return -2;
}
// </Snippet41>

// <Snippet44>
// Template function for converting an element within a collection
// to a CString object
template<typename CollectionT>
CString StringizeElement(CollectionT* pCollection, INT iIndex);
// </Snippet44>

// <Snippet45>
#define LBN_SYNCHRONIZE (WM_USER + 1)
// </Snippet45>

// <Snippet46>
BEGIN_TEMPLATE_MESSAGE_MAP(CSyncListBox, CollectionT, CListBox)
   ON_WM_PAINT()
   ON_WM_DESTROY()
   ON_MESSAGE(LBN_SYNCHRONIZE, OnSynchronize)
END_MESSAGE_MAP()
// </Snippet46>

template <class CollectionT>
CSyncListBox<CollectionT>::CSyncListBox()
{}

template <class CollectionT>
CSyncListBox<CollectionT>::~CSyncListBox()
{}

template <class CollectionT>
void CSyncListBox<CollectionT>::OnPaint()
{
   CListBox::OnPaint();
}

template <class CollectionT>
void CSyncListBox<CollectionT>::OnDestroy()
{}

// <Snippet43>
template <class CollectionT> 
LRESULT CSyncListBox<CollectionT>::OnSynchronize(WPARAM, LPARAM lParam)
{
   CollectionT* pCollection = (CollectionT*)(lParam);

   ResetContent();

   if(pCollection != NULL)
   {
      INT nCount = (INT)pCollection->GetCount();
      for(INT n = 0; n < nCount; n++)
      {
         CString s = StringizeElement(pCollection, n);
         AddString(s);
      }
   }

   return 0L;
}
// </Snippet43>

// <Snippet48>
template<>
CString StringizeElement(CStringList* pStringList, INT iIndex)
{
   if (pStringList != NULL && iIndex < pStringList->GetCount())
   {
      POSITION pos = pStringList->GetHeadPosition();
      for( INT i = 0; i < iIndex; i++ )
      {
         pStringList->GetNext(pos);
      }
      return pStringList->GetAt(pos);
   }
   return CString(); // or throw, depending on application requirements
}
// </Snippet48>

// <Snippet47>
void CSyncListBox_Test(CWnd* pParentWnd)
{
   CSyncListBox<CStringList> ctlStringLB;
   ctlStringLB.Create(WS_CHILD | WS_VISIBLE | LBS_STANDARD | WS_HSCROLL, 
      CRect(10,10,200,200), pParentWnd, IDC_MYSYNCLISTBOX);

   // Create a CStringList object and add a few strings
   CStringList stringList;
   stringList.AddTail(_T("A"));
   stringList.AddTail(_T("B"));
   stringList.AddTail(_T("C"));

   // Send a message to the list box control to synchronize its
   // contents with the string list
   ctlStringLB.SendMessage(LBN_SYNCHRONIZE, 0, (LPARAM)&stringList);

   // Verify the contents of the list box by printing out its contents
   INT nCount = ctlStringLB.GetCount();
   for( INT n = 0; n < nCount; n++ )
   {
      TCHAR szText[256];
      ctlStringLB.GetText(n, szText);
      TRACE(_T("%s\n"), szText);
   }
}
// </Snippet47>