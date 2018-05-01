// ComboBoxDlg.cpp : implementation file
//
// Topic                                                          Snippet
// CComboBox::AddString												         3
// CComboBox::CComboBox												         1
// CComboBox::Clear													         4
// CComboBox::CompareItem											         5
// CComboBox::Copy													         6
// CComboBox::Create												            2
// CComboBox::Cut													            7
// CComboBox::DeleteItem											         8
// CComboBox::DeleteString											         9
// CComboBox::Dir													            10
// CComboBox::DrawItem												         11
// CComboBox::FindString											         12
// CComboBox::FindStringExact										         13
// CComboBox::GetCount												         14
// CComboBox::GetCurSel												         15
// CComboBox::GetDroppedControlRect									      16
// CComboBox::GetDroppedState										         17
// CComboBox::GetEditSel											         18
// CComboBox::GetExtendedUI											      19
// CComboBox::GetHorizontalExtent									      20
// CComboBox::GetItemData											         21
// CComboBox::GetItemDataPtr										         22
// CComboBox::GetItemHeight											      23
// CComboBox::GetLBText												         24
// CComboBox::GetTopIndex											         25
// CComboBox::InitStorage											         26
// CComboBox::InsertString											         27
// CComboBox::LimitText												         28
// CComboBox::MeasureItem											         29
// CComboBox::Paste													         30
// CComboBox::ResetContent											         31
// CComboBox::SelectString											         32
// CComboBox::SetCurSel												         33
// CComboBox::SetDroppedWidth										         34
// CComboBox::SetHorizontalExtent									      35
// CComboBox::SetItemData											         36
// CComboBox::SetItemDataPtr										         37
// CComboBox::SetItemHeight											      38
// CComboBox::SetLocale												         39
// CComboBox::SetTopIndex											         40

#include "stdafx.h"
#include "NVC_MFC_CComboBox.h"
#include "ComboBoxDlg.h"

void CComboBoxDlg::SetCBDroppedWidth()
{
// <Snippet34>
   // Find the longest string in the combo box.
   CString    str;
   CSize      sz;
   int        dx = 0;
   TEXTMETRIC tm;
   CDC*       pDC = m_pComboBox->GetDC();
   CFont*     pFont = m_pComboBox->GetFont();

   // Select the listbox font, save the old font
   CFont* pOldFont = pDC->SelectObject(pFont);
   // Get the text metrics for avg char width
   pDC->GetTextMetrics(&tm);

   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      m_pComboBox->GetLBText(i, str);
      sz = pDC->GetTextExtent(str);

      // Add the avg width to prevent clipping
      sz.cx += tm.tmAveCharWidth;

      if (sz.cx > dx)
         dx = sz.cx;
   }
   // Select the old font back into the DC
   pDC->SelectObject(pOldFont);
   m_pComboBox->ReleaseDC(pDC);

   // Adjust the width for the vertical scroll bar and the left and right border.
   dx += ::GetSystemMetrics(SM_CXVSCROLL) + 2*::GetSystemMetrics(SM_CXEDGE);

   // Set the width of the list box so that every item is completely visible.
   m_pComboBox->SetDroppedWidth(dx);
// </Snippet34>
}

void CComboBoxDlg::SetCBHorizontalExtent()
{
// <Snippet35>
   // Find the longest string in the combo box.
   CString     str;
   CSize       sz;
   int         dx = 0;
   TEXTMETRIC  tm;
   CDC*        pDC = m_pComboBox->GetDC();
   CFont*      pFont = m_pComboBox->GetFont();

   // Select the listbox font, save the old font
   CFont* pOldFont = pDC->SelectObject(pFont);
   // Get the text metrics for avg char width
   pDC->GetTextMetrics(&tm);

   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      m_pComboBox->GetLBText(i, str);
      sz = pDC->GetTextExtent(str);

      // Add the avg width to prevent clipping
      sz.cx += tm.tmAveCharWidth;

      if (sz.cx > dx)
         dx = sz.cx;
   }
   // Select the old font back into the DC
   pDC->SelectObject(pOldFont);
   m_pComboBox->ReleaseDC(pDC);

   // Set the horizontal extent so every character of all strings can 
   // be scrolled to.
   m_pComboBox->SetHorizontalExtent(dx);
// </Snippet35>
}

void CComboBoxDlg::SetCBItemHeight()
{
// <Snippet38>
   // Set the height of every item to be the
   // vertical size of the item's text extent.
   CString str;
   CSize   sz;
   CDC*    pDC = m_pComboBox->GetDC();
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      m_pComboBox->GetLBText(i, str);
      sz = pDC->GetTextExtent(str);

      m_pComboBox->SetItemHeight(i, sz.cy);
   }
   m_pComboBox->ReleaseDC(pDC);
// </Snippet38>
}

// CComboBoxDlg dialog

IMPLEMENT_DYNAMIC(CComboBoxDlg, CDialog)

CComboBoxDlg::CComboBoxDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CComboBoxDlg::IDD, pParent)
   , m_pComboBox(NULL)
{

}

CComboBoxDlg::~CComboBoxDlg()
{
   delete m_pComboBox;
}

void CComboBoxDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CComboBoxDlg, CDialog)
END_MESSAGE_MAP()


// CComboBoxDlg message handlers

BOOL CComboBoxDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CWnd* pParentWnd = this;

// <Snippet1>
   // Declare a local CComboBox object.
   CComboBox myComboBox;

   // Declare a dynamic CComboBox object.
   CComboBox* pmyComboBox = new CComboBox;
// </Snippet1>

   m_pComboBox = pmyComboBox;

// <Snippet2>
   m_pComboBox->Create(
      WS_CHILD|WS_VISIBLE|WS_VSCROLL|CBS_DROPDOWNLIST,
      CRect(10,10,200,100), pParentWnd, 1);
// </Snippet2>

   m_MyComboBox.Create(
      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
      CBS_SORT|CBS_OWNERDRAWVARIABLE,
      CRect(10, 110, 200, 200), pParentWnd, 1);

// <Snippet3>
   // Add 20 items to the combo box.
   CString str;
   for (int i = 0; i < 20; i++)
   {
      str.Format(_T("item string %d"), i);
      m_pComboBox->AddString(str);
   }
// </Snippet3>

   // Add 10 items to my combo box.
   CString s;
   for (int i = 0; i < 10; i++)
   {
      s.Format(_T("item string %d"), i);
      m_MyComboBox.AddString(s);
   }

   m_MyComboBox.SetCurSel(3);
   m_MyComboBox.SetEditSel(0, 2);

// <Snippet18>
   DWORD dwSel;

   // Set the selection to be all characters after the current selection.
   if ((dwSel = m_MyComboBox.GetEditSel()) != CB_ERR)
   {
      m_MyComboBox.SetEditSel(HIWORD(dwSel), -1);
   }
// </Snippet18>

// <Snippet6>
   // Copy all of the text from the combo box's edit control 
   // to the clipboard.
   m_MyComboBox.SetEditSel(0, -1);
   m_MyComboBox.Copy();
// </Snippet6>

// <Snippet7>
   // Delete all of the text from the combo box's edit control and copy it
   // to the clipboard.
   m_MyComboBox.SetEditSel(0, -1);
   m_MyComboBox.Cut();
// </Snippet7>

// <Snippet4>
   // Delete all of the text from the combo box's edit control.
   m_MyComboBox.SetEditSel(0, -1);
   m_MyComboBox.Clear();
// </Snippet4>

// <Snippet30>
   // Replace all of the text in the combo box's edit control with the text
   // in the clipboard.
   m_MyComboBox.SetEditSel(0, -1);
   m_MyComboBox.Paste();
// </Snippet30>

// <Snippet9>
   // Delete every item from the combo box.
   for (int i = m_pComboBox->GetCount() - 1; i >= 0; i--)
   {
      m_pComboBox->DeleteString(i);
   }
// </Snippet9>

// <Snippet10>
   // Add all the files and directories in the windows directory.
   TCHAR lpszWinPath[MAX_PATH], lpszOldPath[MAX_PATH];
   VERIFY(0 < ::GetWindowsDirectory(lpszWinPath, MAX_PATH));

   // Make the windows directory the current directory.
   ::GetCurrentDirectory(MAX_PATH, lpszOldPath);
   ::SetCurrentDirectory(lpszWinPath);

   m_pComboBox->ResetContent();
   m_pComboBox->Dir(DDL_READWRITE|DDL_DIRECTORY, _T("*.*"));

   // Reset the current directory to its previous path.
   ::SetCurrentDirectory(lpszOldPath);
// </Snippet10>

   m_pComboBox->ResetContent();

// <Snippet14>
   // Add 10 items to the combo box.
   CString strItem;
   for (int i = 0; i < 10; i++)
   {
      strItem.Format(_T("item %d"), i);
      m_pComboBox->AddString(strItem);
   }

   // Verify the 10 items were added to the combo box.
   ASSERT(m_pComboBox->GetCount() == 10);
// </Snippet14>

   m_pComboBox->SetCurSel(0);

// <Snippet15>
   // Select the next item of the currently selected item 
   // in the combo box.
   int nIndex = m_pComboBox->GetCurSel();
   int nCount = m_pComboBox->GetCount();
   if ((nIndex != CB_ERR) && (nCount > 1))
   {
      if (++nIndex < nCount)
         m_pComboBox->SetCurSel(nIndex);
      else
         m_pComboBox->SetCurSel(0);
   }
// </Snippet15>

// <Snippet16>
   // This example move a combo box so that the upper left
   // corner of the combo box is at a specific point.

   // The point to move the combo box to.
   CPoint myPoint(30, 10);

   CRect r;

   m_pComboBox->GetDroppedControlRect(&r);

   m_pComboBox->GetParent()->ScreenToClient(&r);
   r.OffsetRect(myPoint - r.TopLeft());
   m_pComboBox->MoveWindow(&r);
// </Snippet16>

// <Snippet17>
   // Show the dropdown list box if it is not already dropped.
   if (!m_pComboBox->GetDroppedState())
      m_pComboBox->ShowDropDown(TRUE);
// </Snippet17>

// <Snippet19>
   // Use the extended UI if it is not already set.
   if (!m_pComboBox->GetExtendedUI())
      m_pComboBox->SetExtendedUI(TRUE);
// </Snippet19>

// <Snippet20>
   // Find the longest string in the combo box.
   CString strText;
   CSize   sz;
   UINT    dxText = 0;
   CDC*    pDCCombo = m_pComboBox->GetDC();
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      m_pComboBox->GetLBText(i, strText);
      sz = pDCCombo->GetTextExtent(strText);

      if (sz.cx > (LONG)dxText)
        dxText = sz.cx;
   }
   m_pComboBox->ReleaseDC(pDCCombo);

   // Set the horizontal extent only if the current extent is not large enough.
   if (m_pComboBox->GetHorizontalExtent() < dxText)
   {
      m_pComboBox->SetHorizontalExtent(dxText);
      ASSERT(m_pComboBox->GetHorizontalExtent() == dxText);
   }
// </Snippet20>

// <Snippet36>
   // Set the data of each item to be equal to its index.
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      m_pComboBox->SetItemData(i, i);
   }
// </Snippet36>

// <Snippet21>
   // If any item's data is equal to zero then reset it to -1.
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      if (m_pComboBox->GetItemData(i) == 0)
      {
        m_pComboBox->SetItemData(i, (DWORD) -1);
      }
   }
// </Snippet21>

// <Snippet22>
   LPVOID    lpmyPtr = m_pComboBox->GetItemDataPtr(5);

   // Check all the items in the combo box; if an item's
   // data pointer is equal to my pointer then reset it to NULL.
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      if (m_pComboBox->GetItemDataPtr(i) == lpmyPtr)
      {
        m_pComboBox->SetItemDataPtr(i, NULL);
      }
   }
// </Snippet22>

// <Snippet37>
   // Set the data pointer of each item to be NULL.
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      m_pComboBox->SetItemDataPtr(i, NULL);
   }
// </Snippet37>

// <Snippet23>
   // Set the height of every item so the item
   // is completely visible.
   CString strLBText;
   CSize   size;
   CDC*    pDC = m_pComboBox->GetDC();
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      m_pComboBox->GetLBText(i, strLBText);
      size = pDC->GetTextExtent(strLBText);

      // Only want to set the item height if the current height
      // is not big enough.
      if (m_pComboBox->GetItemHeight(i) < size.cy)
         m_pComboBox->SetItemHeight( i, size.cy );
   }
   m_pComboBox->ReleaseDC(pDC);
// </Snippet23>

// <Snippet24>
   // Dump all of the items in the combo box.
   CString str1, str2;
   int n;
   for (int i = 0; i < m_pComboBox->GetCount(); i++)
   {
      n = m_pComboBox->GetLBTextLen(i);
      m_pComboBox->GetLBText(i, str1.GetBuffer(n));
      str1.ReleaseBuffer();

      str2.Format(_T("item %d: %s\r\n"), i, str1.GetBuffer(0));
      AFXDUMP(str2);
   }
// </Snippet24>

// <Snippet25>
   // Want an item in the bottom half to be the first visible item.
   int nTop = m_pComboBox->GetCount() / 2;
   if (m_pComboBox->GetTopIndex() < nTop)
   {
      m_pComboBox->SetTopIndex(nTop);
      ASSERT(m_pComboBox->GetTopIndex() == nTop);
   }
// </Snippet25>

// <Snippet13>
   // The string to match.
   LPCTSTR lpszmyExactString = _T("item 5");

   // Delete all items that exactly match the specified string.
   int nDex = 0;
   while ((nDex = m_pComboBox->FindStringExact(nDex, lpszmyExactString)) 
      != CB_ERR)
   {
      m_pComboBox->DeleteString(nDex);
   }
// </Snippet13>

// <Snippet12>
   // The string to match.
   LPCTSTR lpszmyString = _T("item");

   // Delete all items that begin with the specified string.
   int nItem = 0;
   while ((nItem = m_pComboBox->FindString(nItem, lpszmyString)) != CB_ERR)
   {
      m_pComboBox->DeleteString(nItem);
   }
// </Snippet12>

   m_pComboBox->ResetContent();

// <Snippet26>
   // Initialize the storage of the combo box to be 256 strings with
   // about 10 characters per string, performance improvement.
   int nAlloc = pmyComboBox->InitStorage(256, 10);
   ASSERT(nAlloc != CB_ERRSPACE);

   // Add 256 items to the combo box.
   CString strAdd;
   for (int i = 0; i < 256; i++)
   {
      strAdd.Format(_T("item string %d"), i);
      m_pComboBox->AddString(strAdd);
   }
// </Snippet26>

// <Snippet27>
   // Insert items in between existing items.
   CString strIns;
   int nItems = m_pComboBox->GetCount();
   for (int i = 0; i < nItems; i++)
   {
      strIns.Format(_T("item string %c"), (char)('A'+i));
      m_pComboBox->InsertString(2*i, strIns);
   }
// </Snippet27>

// <Snippet28>
   // Limit the number of characters in the combo box's edit control to
   // be the maximum number visible.

   // Get the text metrics for the combo box; needed for the
   // average character width.
   TEXTMETRIC tm;
   CDC* pDCCB = m_pComboBox->GetDC();
   pDCCB->GetTextMetrics(&tm);
   m_pComboBox->ReleaseDC(pDCCB);

   CRect rect;
   m_pComboBox->GetClientRect(&rect);

   m_pComboBox->LimitText(rect.Width() / tm.tmAveCharWidth);
// </Snippet28>

// <Snippet32>
   // The string to match.
   LPCTSTR lpszSelect = _T("item");

   // Select the item that begins with the specified string.
   int nSel = m_pComboBox->SelectString(0, lpszSelect);
   ASSERT(nSel != CB_ERR);
// </Snippet32>

// <Snippet33>
   // Select the last item in the combo box.
   int nLast = pmyComboBox->GetCount() - 1;
   if (nLast >= 0)
      m_pComboBox->SetCurSel(nLast);
// </Snippet33>

   SetCBDroppedWidth();

   SetCBHorizontalExtent();

   SetCBItemHeight();

// <Snippet39>
   // My LCID to use.
   LCID mylcid = MAKELCID(MAKELANGID(LANG_SPANISH, SUBLANG_SPANISH_MEXICAN), 
      SORT_DEFAULT);

   // Force the list box to use my locale.
   m_pComboBox->SetLocale(mylcid);
   ASSERT(m_pComboBox->GetLocale() == mylcid);
// </Snippet39>

// <Snippet40>
   // Set the first visible item in the combo box to be the middle item
   m_pComboBox->SetTopIndex(m_pComboBox->GetCount() / 2);
// </Snippet40>

// <Snippet31>
   // Delete all the items from the combo box.
   m_pComboBox->ResetContent();
   ASSERT(m_pComboBox->GetCount() == 0);
// </Snippet31>

   return TRUE;  // return TRUE unless you set the focus to a control
}

// <Snippet5>
// CMyComboBox is my owner-drawn combo box derived from CComboBox. This 
// example compares two items using strcmp to sort items in reverse 
// alphabetical order. The combo box control was created with the 
// following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
int CMyComboBox::CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct)
{
   int iComp = 0;
   ASSERT(lpCompareItemStruct->CtlType == ODT_COMBOBOX);
   LPCTSTR lpszText1 = (LPCTSTR) lpCompareItemStruct->itemData1;
   ASSERT(lpszText1 != NULL);
   LPCTSTR lpszText2 = (LPCTSTR) lpCompareItemStruct->itemData2;
   ASSERT(lpszText2 != NULL);

   if (NULL != lpszText1 && NULL != lpszText2)
   {
      iComp = _tcscmp(lpszText2, lpszText1);	
   }

   return iComp;
}
// </Snippet5>

// <Snippet8>
// CMyComboBox is my owner-drawn combo box derived from CComboBox. This 
// example simply dumps the item's text. The combo box control was 
// created with the following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
void CMyComboBox::DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct) 
{
   ASSERT(lpDeleteItemStruct->CtlType == ODT_COMBOBOX);
   LPTSTR lpszText = (LPTSTR) lpDeleteItemStruct->itemData;
   ASSERT(lpszText != NULL);

   AFXDUMP(lpszText);
}
// </Snippet8>

// <Snippet11>
// CMyComboBox is my owner-drawn combo box derived from CComboBox. This 
// example draws an item's text centered vertically and horizontally. The 
// combo box control was created with the following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
void CMyComboBox::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
   ASSERT(lpDrawItemStruct->CtlType == ODT_COMBOBOX);
   LPCTSTR lpszText = (LPCTSTR) lpDrawItemStruct->itemData;
   ASSERT(lpszText != NULL);
   CDC dc;

   dc.Attach(lpDrawItemStruct->hDC);

   // Save these value to restore them when done drawing.
   COLORREF crOldTextColor = dc.GetTextColor();
   COLORREF crOldBkColor = dc.GetBkColor();

   // If this item is selected, set the background color 
   // and the text color to appropriate values. Erase
   // the rect by filling it with the background color.
   if ((lpDrawItemStruct->itemAction & ODA_SELECT) &&
      (lpDrawItemStruct->itemState  & ODS_SELECTED))
   {
      dc.SetTextColor(::GetSysColor(COLOR_HIGHLIGHTTEXT));
      dc.SetBkColor(::GetSysColor(COLOR_HIGHLIGHT));
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, ::GetSysColor(COLOR_HIGHLIGHT));
   }
   else
   {
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, crOldBkColor);
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
// </Snippet11>

// <Snippet29>
// CMyComboBox is my owner-drawn combo box derived from CComboBox. This 
// example measures an item and sets the height of the item to twice the 
// vertical extent of its text. The combo box control was created with 
// the following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
void CMyComboBox::MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct) 
{
   ASSERT(lpMeasureItemStruct->CtlType == ODT_COMBOBOX);

   if (lpMeasureItemStruct->itemID != (UINT) -1)
   {
      LPCTSTR lpszText = (LPCTSTR) lpMeasureItemStruct->itemData;
      ASSERT(lpszText != NULL);
      CSize   sz;
      CDC*    pDC = GetDC();

      sz = pDC->GetTextExtent(lpszText);

      ReleaseDC(pDC);

      lpMeasureItemStruct->itemHeight = 2*sz.cy;
   }
}
// </Snippet29>