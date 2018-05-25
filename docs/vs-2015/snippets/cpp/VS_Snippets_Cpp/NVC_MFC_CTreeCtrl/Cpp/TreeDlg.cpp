// TreeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CTreeCtrl.h"
#include "TreeDlg.h"


// CTreeDlg dialog

IMPLEMENT_DYNAMIC(CTreeDlg, CDialog)

CTreeDlg::CTreeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTreeDlg::IDD, pParent)
{

}

CTreeDlg::~CTreeDlg()
{
   m_TreeMenu.DestroyMenu();
}

void CTreeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTreeDlg, CDialog)
   ON_WM_RBUTTONDOWN()
   ON_COMMAND(ID_TREECTRL_CREATEDRAGIMAGE, &CTreeDlg::OnTreectrlCreatedragimage)
   ON_COMMAND(ID_TREECTRL_DELETEALLITEMS, &CTreeDlg::OnTreectrlDeleteallitems)
   ON_COMMAND(ID_TREECTRL_DELETEITEM, &CTreeDlg::OnTreectrlDeleteitem)
   ON_COMMAND(ID_TREECTRL_EDITLABEL, &CTreeDlg::OnTreectrlEditlabel)
   ON_COMMAND(ID_TREECTRL_ENSUREVISIBLE, &CTreeDlg::OnTreectrlEnsurevisible)
   ON_COMMAND(ID_TREECTRL_GETCHILDITEM, &CTreeDlg::OnTreectrlGetchilditem)
   ON_COMMAND(ID_TREECTRL_GETCOUNT, &CTreeDlg::OnTreectrlGetcount)
   ON_COMMAND(ID_TREECTRL_GETDROPHIGHLIGHTITEM, &CTreeDlg::OnTreectrlGetdrophighlightitem)
   ON_COMMAND(ID_TREECTRL_GETEDITCONTROL, &CTreeDlg::OnTreectrlGeteditcontrol)
   ON_COMMAND(ID_TREECTRL_GETIMAGELIST, &CTreeDlg::OnTreectrlGetimagelist)
   ON_COMMAND(ID_TREECTRL_GETINDENT, &CTreeDlg::OnTreectrlGetindent)
   ON_COMMAND(ID_TREECTRL_GETINSERTMARKCOLOR, &CTreeDlg::OnTreectrlGetinsertmarkcolor)
   ON_COMMAND(ID_TREECTRL_GETITEMDATA, &CTreeDlg::OnTreectrlGetitemdata)
   ON_COMMAND(ID_TREECTRL_GETITEMHEIGHT, &CTreeDlg::OnTreectrlGetitemheight)
   ON_COMMAND(ID_TREECTRL_GETITEMIMAGE, &CTreeDlg::OnTreectrlGetitemimage)
   ON_COMMAND(ID_TREECTRL_GETITEMRECT, &CTreeDlg::OnTreectrlGetitemrect)
   ON_COMMAND(ID_TREECTRL_GETITEMSTATE, &CTreeDlg::OnTreectrlGetitemstate)
   ON_COMMAND(ID_TREECTRL_GETLINECOLOR, &CTreeDlg::OnTreectrlGetlinecolor)
   ON_COMMAND(ID_TREECTRL_GETNEXTITEM, &CTreeDlg::OnTreectrlGetnextitem)
   ON_COMMAND(ID_TREECTRL_GETNEXTSIBLINGITEM, &CTreeDlg::OnTreectrlGetnextsiblingitem)
   ON_COMMAND(ID_TREECTRL_GETPREVSIBLINGITEM, &CTreeDlg::OnTreectrlGetprevsiblingitem)
   ON_COMMAND(ID_CHUNK2_GETPREVVISIBLEITEM, &CTreeDlg::OnChunk2Getprevvisibleitem)
   ON_COMMAND(ID_CHUNK2_GETSELECTEDITEM, &CTreeDlg::OnChunk2Getselecteditem)
   ON_COMMAND(ID_CHUNK2_GETTOOLTIPS, &CTreeDlg::OnChunk2Gettooltips)
   ON_COMMAND(ID_CHUNK2_HITTEST, &CTreeDlg::OnChunk2Hittest)
   ON_BN_CLICKED(IDC_BUTTON1, &CTreeDlg::OnResetTree)
   ON_COMMAND(ID_CHUNK2_SELECTSETFIRSTVISIBLE, &CTreeDlg::OnChunk2Selectsetfirstvisible)
   ON_COMMAND(ID_CHUNK2_SETCHECK, &CTreeDlg::OnChunk2Setcheck)
   ON_COMMAND(ID_CHUNK2_SETINSERTMARK, &CTreeDlg::OnChunk2Setinsertmark)
   ON_COMMAND(ID_CHUNK2_SETITEM, &CTreeDlg::OnChunk2Setitem)
   ON_COMMAND(ID_CHUNK2_SETITEMDATA, &CTreeDlg::OnChunk2Setitemdata)
   ON_COMMAND(ID_CHUNK2_SETITEMTEXT, &CTreeDlg::OnChunk2Setitemtext)
   ON_COMMAND(ID_CHUNK2_SETLINECOLOR, &CTreeDlg::OnChunk2Setlinecolor)
   ON_COMMAND(ID_CHUNK2_SETTEXTCOLOR, &CTreeDlg::OnChunk2Settextcolor)
   ON_COMMAND(ID_CHUNK2_SORTCHILDREN, &CTreeDlg::OnChunk2Sortchildren)
   ON_COMMAND(ID_CHUNK2_SORTCHILDRENCB, &CTreeDlg::OnChunk2Sortchildrencb)
END_MESSAGE_MAP()


// CTreeDlg message handlers

BOOL CTreeDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   m_TreeMenu.LoadMenu(IDR_TREEMENU);

// <Snippet1>
   // Assuming your window has a CTreeCtrl member named m_TreeCtrl,
   // you can create the tree control window with a child ID of ID_MYTREE
   // using a call like this:

   m_TreeCtrl.Create(WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER
      | TVS_HASBUTTONS | TVS_LINESATROOT | TVS_HASLINES
      | TVS_DISABLEDRAGDROP | TVS_NOTOOLTIPS | TVS_EDITLABELS,
      CRect(10, 10, 300, 100), this, ID_MYTREE);

   // The control will have the appropiate window styles, and the tree
   // control styles specified are those most commonly used.
// </Snippet1>

// <Snippet30>
   m_TreeCtrl.ModifyStyle(0, TVS_CHECKBOXES);

   HTREEITEM aItem = m_TreeCtrl.InsertItem(_T("AAA"));
   m_TreeCtrl.SetCheck(aItem);
// </Snippet30>

   return TRUE;  // return TRUE unless you set the focus to a control
}

void CTreeDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
   ClientToScreen(&point);
   CMenu* pSubMenu = m_TreeMenu.GetSubMenu(0);
   pSubMenu->TrackPopupMenu(TPM_LEFTALIGN, point.x, point.y, this);

   CDialog::OnRButtonDown(nFlags, point);
}

void CTreeDlg::OnTreectrlCreatedragimage()
{
// <Snippet2>
   HTREEITEM hItem =m_TreeCtrl.GetSelectedItem();

   CImageList* pImageList = m_TreeCtrl.CreateDragImage(hItem);

   // Do something with the image list.

   delete pImageList;
// </Snippet2>
}

void CTreeDlg::OnTreectrlDeleteallitems()
{
// <Snippet3>
   // The underlying Windows API always returns TRUE
   VERIFY(m_TreeCtrl.DeleteAllItems());
// </Snippet3>
}

void CTreeDlg::OnTreectrlDeleteitem()
{
// <Snippet4>
   // Look at all of the root-level items
   HTREEITEM hCurrent = m_TreeCtrl.GetChildItem(TVI_ROOT);
   while (hCurrent != NULL) 
   {
      // Get the text for the item. Notice we use TVIF_TEXT because
      // we want to retrieve only the text, but also specify TVIF_HANDLE
      // because we're getting the item by its handle.
      TVITEM item;
      TCHAR szText[1024];
      item.hItem = hCurrent;
      item.mask = TVIF_TEXT | TVIF_HANDLE;
      item.pszText = szText;
      item.cchTextMax = 1024;

      BOOL bWorked = m_TreeCtrl.GetItem(&item);

      // Try to get the next item
      hCurrent = m_TreeCtrl.GetNextItem(hCurrent, TVGN_NEXT);

      // If we successfuly retrieved an item, and the item's text
      // contains a lowercase letter 'e', delete the item.
      if (bWorked && _tcschr(item.pszText, 'e'))
         m_TreeCtrl.DeleteItem(item.hItem);
   }
// </Snippet4>
}

void CTreeDlg::OnTreectrlEditlabel()
{
// <Snippet5>
   // Make sure the focus is set to the tree control.
   m_TreeCtrl.SetFocus();

   // Show the edit control on the label of the selected item.
   // The tree control must have the TVS_EDITLABELS style set.
   HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
   CEdit* pmyEdit = m_TreeCtrl.EditLabel(hSel);
   ASSERT(pmyEdit != NULL);
// </Snippet5>
}

void CTreeDlg::OnTreectrlEnsurevisible()
{
// <Snippet6>
   HTREEITEM hItem = m_TreeCtrl.GetSelectedItem();
   // hmyItem is the item that I want to ensure is visible.
   HTREEITEM hmyItem = m_TreeCtrl.GetChildItem(hItem);
      
   // Expand the parent, if possible.
   HTREEITEM hParent = m_TreeCtrl.GetParentItem(hmyItem);
   if (hParent != NULL)
      m_TreeCtrl.Expand(hParent, TVE_EXPAND);

   // Ensure the item is visible.
   m_TreeCtrl.EnsureVisible(hmyItem);
// </Snippet6>
}

void CTreeDlg::OnTreectrlGetchilditem()
{
// <Snippet7>
   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // Delete all of the children of hmyItem.
   if (m_TreeCtrl.ItemHasChildren(hmyItem))
   {
      HTREEITEM hNextItem;
      HTREEITEM hChildItem = m_TreeCtrl.GetChildItem(hmyItem);

      while (hChildItem != NULL)
      {
         hNextItem = m_TreeCtrl.GetNextItem(hChildItem, TVGN_NEXT);
         m_TreeCtrl.DeleteItem(hChildItem);
         hChildItem = hNextItem;
      }
   }
// </Snippet7>
}

void CTreeDlg::OnTreectrlGetcount()
{
// <Snippet8>
   // Delete all of the items from the tree control.
   m_TreeCtrl.DeleteAllItems();
   ASSERT(m_TreeCtrl.GetCount() == 0);
// </Snippet8>
}

void CTreeDlg::OnTreectrlGetdrophighlightitem()
{
   HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
   CRect rect;
   m_TreeCtrl.GetItemRect(hSel, &rect, TRUE);
   CPoint myPoint(rect.left + 3, rect.top + 3);

// <Snippet9>
   // Set the item at the point myPoint as the drop target.
   UINT uFlags;
   HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

   if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
   {
      m_TreeCtrl.SelectDropTarget(hItem);
      ASSERT(m_TreeCtrl.GetDropHilightItem() == hItem);
   }
// </Snippet9>
}

void CTreeDlg::OnTreectrlGeteditcontrol()
{
// <Snippet10>
   // The string replacing the text in the edit control.
   LPCTSTR lpszmyString = _T("New text!");

   // Replace the text in the label edit control, if possible.
   CEdit* pEdit = m_TreeCtrl.GetEditControl();

   if (pEdit != NULL)
   {
      pEdit->SetWindowText(lpszmyString);
   }
// </Snippet10>
}

void CTreeDlg::OnTreectrlGetimagelist()
{
   if (NULL == m_TreeImages.m_hImageList)
   {
      m_bmpUp.LoadBitmap(IDB_UP);
      m_bmpDown.LoadBitmap(IDB_DOWN);
      m_TreeImages.Create(34, 13, ILC_COLOR, 2, 2);
      m_TreeImages.Add(&m_bmpUp, (CBitmap*)NULL);
      m_TreeImages.Add(&m_bmpDown, (CBitmap*)NULL);
   }

// <Snippet11>
   ASSERT(m_TreeCtrl.GetImageList(TVSIL_NORMAL) == NULL);

   m_TreeCtrl.SetImageList(&m_TreeImages, TVSIL_NORMAL);
   ASSERT(m_TreeCtrl.GetImageList(TVSIL_NORMAL) == &m_TreeImages);
// </Snippet11>
}

void CTreeDlg::OnTreectrlGetindent()
{
// <Snippet12>
   // Double the indent.
   UINT uIndent = m_TreeCtrl.GetIndent();
   m_TreeCtrl.SetIndent(2 * uIndent);
// </Snippet12>
}

void CTreeDlg::OnTreectrlGetinsertmarkcolor()
{
// <Snippet13>
   // Use the highliight color for the insert mark color.
   COLORREF crColor = ::GetSysColor(COLOR_HIGHLIGHT);
   m_TreeCtrl.SetInsertMarkColor(crColor);
   ASSERT(m_TreeCtrl.GetInsertMarkColor() == crColor);
// </Snippet13>
}

void CTreeDlg::OnTreectrlGetitemdata()
{
// <Snippet14>
   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // Delete all of the children of hmyItem whose item data is
   // not equal to zero.
   if (m_TreeCtrl.ItemHasChildren(hmyItem))
   {
      HTREEITEM hNextItem;
      HTREEITEM hChildItem = m_TreeCtrl.GetChildItem(hmyItem);

      while (hChildItem != NULL)
      {
         hNextItem = m_TreeCtrl.GetNextItem(hChildItem, TVGN_NEXT);
      
         if (m_TreeCtrl.GetItemData(hChildItem) != 0)
         {
            m_TreeCtrl.DeleteItem(hChildItem);
         }

         hChildItem = hNextItem;
      }
   }
// </Snippet14>
}

void CTreeDlg::OnTreectrlGetitemheight()
{
// <Snippet15>
   // Double the height of the items.
   SHORT sHeight = m_TreeCtrl.GetItemHeight();
   m_TreeCtrl.SetItemHeight(2 * sHeight);
// </Snippet15>
}

void CTreeDlg::OnTreectrlGetitemimage()
{
// <Snippet16>
   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // If the selected image is the same as the nonselected image
   // then make the selected image one more than the nonselected image.
   if (m_TreeCtrl.ItemHasChildren(hmyItem))
   {
      HTREEITEM hItem = m_TreeCtrl.GetChildItem(hmyItem);
      int nImage, nSelectedImage;

      while (hItem != NULL)
      {
         m_TreeCtrl.GetItemImage(hItem, nImage, nSelectedImage);

         if (nImage == nSelectedImage)
         {
            m_TreeCtrl.SetItemImage(hItem, nImage, nImage + 1);
         }

         hItem = m_TreeCtrl.GetNextSiblingItem(hItem);
      }
   }
// </Snippet16>
}

void CTreeDlg::OnTreectrlGetitemrect()
{
// <Snippet17>
   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // Dump the bounds of hmyItem.
   if (hmyItem != NULL)
   {
      RECT r;

      m_TreeCtrl.GetItemRect(hmyItem, &r, FALSE);

      TRACE(TEXT("left = %d, top = %d, right = %d, bottom = %d\r\n"),
         r.left,
         r.top,
         r.right,
         r.bottom);
   }
// </Snippet17>
}

void CTreeDlg::OnTreectrlGetitemstate()
{
// <Snippet18>
   // Show all of the visible items in bold.
   HTREEITEM hItem = m_TreeCtrl.GetFirstVisibleItem();

   while (hItem != NULL)
   {
      m_TreeCtrl.SetItemState(hItem, TVIS_BOLD, TVIS_BOLD);
      ASSERT(TVIS_BOLD & m_TreeCtrl.GetItemState(hItem, TVIS_BOLD));
      hItem = m_TreeCtrl.GetNextVisibleItem(hItem);
   }
// </Snippet18>
}

void CTreeDlg::OnTreectrlGetlinecolor()
{
// <Snippet19>
   COLORREF cr = m_TreeCtrl.GetLineColor();
// </Snippet19>
   UNREFERENCED_PARAMETER(cr);
}

void CTreeDlg::OnTreectrlGetnextitem()
{
// <Snippet20>
   // find the currently selected item
   HTREEITEM hCurSel = m_TreeCtrl.GetNextItem(TVI_ROOT, TVGN_CARET);

   // report it to the user
   if (hCurSel == NULL)
   {
      AfxMessageBox(_T("There is no selected item"));
   }
   else
   {
      CString str;
      str.Format(_T("The currently selected item is \"%s\""),
         (LPCTSTR)m_TreeCtrl.GetItemText(hCurSel));
      AfxMessageBox((LPCTSTR)str);
   }
// </Snippet20>
}

void CTreeDlg::OnTreectrlGetnextsiblingitem()
{
// <Snippet21>
   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // Show all of the children of hmyItem in bold.
   if (m_TreeCtrl.ItemHasChildren(hmyItem))
   {
      HTREEITEM hItem = m_TreeCtrl.GetChildItem(hmyItem);

      while (hItem != NULL)
      {
         m_TreeCtrl.SetItemState(hItem, TVIS_BOLD, TVIS_BOLD);
         hItem = m_TreeCtrl.GetNextSiblingItem(hItem);
      }
   }
// </Snippet21>
}

void CTreeDlg::OnTreectrlGetprevsiblingitem()
{
// <Snippet22>
   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // Show all of the previous siblings of hmyItem in bold.
   HTREEITEM hItem = hmyItem;

   while (hItem != NULL)
   {
      m_TreeCtrl.SetItemState(hItem, TVIS_BOLD, TVIS_BOLD);
      hItem = m_TreeCtrl.GetPrevSiblingItem(hItem);
   }
// </Snippet22>
}

void CTreeDlg::OnChunk2Getprevvisibleitem()
{
// <Snippet23>
   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // Show all of the previous visible items of hmyItem in bold.
   HTREEITEM hItem = hmyItem;

   while (hItem != NULL)
   {
      m_TreeCtrl.SetItemState(hItem, TVIS_BOLD, TVIS_BOLD);
      hItem = m_TreeCtrl.GetPrevVisibleItem(hItem);
   }
// </Snippet23>
}

void CTreeDlg::OnChunk2Getselecteditem()
{
// <Snippet24>
   // Expand the selected item and make it visible, if possible.
   HTREEITEM hItem = m_TreeCtrl.GetSelectedItem();

   if ((hItem != NULL) && m_TreeCtrl.ItemHasChildren(hItem))
   {
      m_TreeCtrl.Expand(hItem, TVE_EXPAND);
      m_TreeCtrl.EnsureVisible(hItem);
   }
// </Snippet24>
}

void CTreeDlg::OnChunk2Gettooltips()
{
   if (!::IsWindow(m_ToolTips.m_hWnd))
   {
      m_ToolTips.Create(this);
      m_ToolTips.AddTool(&m_TreeCtrl, _T("Treezy."));
   }

// <Snippet25>
   // If the tree control does not have a tooltips control,
   // then use m_ToolTips as the tooltips for the tree control.
   if (m_TreeCtrl.GetToolTips() == NULL)
   {
      m_TreeCtrl.SetToolTips(&m_ToolTips);
   }
// </Snippet25>
}

void CTreeDlg::OnChunk2Hittest()
{
   HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
   HTREEITEM hChild = m_TreeCtrl.GetChildItem(hSel);
   CRect rect;
   m_TreeCtrl.GetItemRect(hChild, &rect, TRUE);
   CPoint myPoint(rect.left + 3, rect.top + 3);

// <Snippet26>
   // Select the item that is at the point myPoint.
   UINT uFlags;
   HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

   if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
   {
      m_TreeCtrl.SelectItem(hItem);
   }
// </Snippet26>
}

void CTreeDlg::OnResetTree()
{
   m_TreeCtrl.DeleteAllItems();

// <Snippet27>
   // Insert a root item using the structure. We must
   // initialize a TVINSERTSTRUCT structure and pass its
   // address to the call. 

   TVINSERTSTRUCT tvInsert;
   tvInsert.hParent = NULL;
   tvInsert.hInsertAfter = NULL;
   tvInsert.item.mask = TVIF_TEXT;
   tvInsert.item.pszText = _T("United States");

   HTREEITEM hCountry = m_TreeCtrl.InsertItem(&tvInsert);

   // Insert subitems of that root. Pennsylvania is
   // a state in the United States, so its item will be a child
   // of the United States item. We won't set any image or states,
   // so we supply only the TVIF_TEXT mask flag. This
   // override provides nearly complete control over the
   // insertion operation without the tedium of initializing
   // a structure. If you're going to add lots of items
   // to a tree, you might prefer the structure override
   // as it affords you a performance win by allowing you
   // to initialize some fields of the structure only once,
   // outside of your insertion loop.

   HTREEITEM hPA = m_TreeCtrl.InsertItem(TVIF_TEXT,
      _T("Pennsylvania"), 0, 0, 0, 0, 0, hCountry, NULL);

   // Insert the "Washington" item and assure that it is
   // inserted after the "Pennsylvania" item. This override is 
   // more appropriate for conveniently inserting items with 
   // images.

   HTREEITEM hWA = m_TreeCtrl.InsertItem(_T("Washington"),
      0, 0, hCountry, hPA);

   // We'll add some cities under each of the states.
   // The override used here is most appropriate
   // for inserting text-only items.

   m_TreeCtrl.InsertItem(_T("Pittsburgh"), hPA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Harrisburg"), hPA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Altoona"), hPA, TVI_SORT);

   m_TreeCtrl.InsertItem(_T("Seattle"), hWA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Kalaloch"), hWA, TVI_SORT);
   m_TreeCtrl.InsertItem(_T("Yakima"), hWA, TVI_SORT);
// </Snippet27>
}

void CTreeDlg::OnChunk2Selectsetfirstvisible()
{
   HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
   CRect rect;
   m_TreeCtrl.GetItemRect(hSel, &rect, TRUE);
   CPoint myPoint(rect.left + 3, rect.top + 3);

// <Snippet28>
   // Select the item at the point myPoint as the first visible item.
   UINT uFlags;
   HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

   if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
   {
      m_TreeCtrl.SelectSetFirstVisible(hItem);
   }
// </Snippet28>
}

void CTreeDlg::OnChunk2Setcheck()
{
// <Snippet29>
   UINT uCount = m_TreeCtrl.GetVisibleCount();
   HTREEITEM hItem = m_TreeCtrl.GetFirstVisibleItem();

   // Toggle the check state of all the visible items.
   for (UINT i = 0; i < uCount; i++)
   {
      ASSERT(hItem != NULL);
      m_TreeCtrl.SetCheck(hItem, !m_TreeCtrl.GetCheck(hItem));
      hItem = m_TreeCtrl.GetNextVisibleItem(hItem);
   }
// </Snippet29>
}

void CTreeDlg::OnChunk2Setinsertmark()
{
   HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
   CRect rect;
   m_TreeCtrl.GetItemRect(hSel, &rect, TRUE);
   CPoint myPoint(rect.left + 3, rect.top + 3);

// <Snippet31>
   // Set the insert mark to be before the item at the point myPoint.
   UINT uFlags;
   HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

   if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
   {
      m_TreeCtrl.SetInsertMark(hItem, FALSE);
   }
// </Snippet31>
}

void CTreeDlg::OnChunk2Setitem()
{
   HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
   CRect rect;
   m_TreeCtrl.GetItemRect(hSel, &rect, TRUE);
   CPoint myPoint(rect.left + 3, rect.top + 3);

// <Snippet32>
   // Show the item at the point myPoint in bold.
   UINT uFlags;
   HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

   if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
   {
      m_TreeCtrl.SetItem(hItem, TVIF_STATE, NULL, 0, 0, TVIS_BOLD, 
         TVIS_BOLD, 0);
   }
// </Snippet32>
}

void CTreeDlg::OnChunk2Setitemdata()
{
// <Snippet33>
   CString   str;
   HTREEITEM hItem;

   // Insert 20 items into the tree control making every item's
   // data be the handle of the item.
   for (int i = 0; i < 20; i++)
   {
      str.Format(TEXT("item %d"), i);
      hItem = m_TreeCtrl.InsertItem(str);

      if (hItem != NULL)
      {
         m_TreeCtrl.SetItemData(hItem, (DWORD_PTR)hItem);
      }
   }
// </Snippet33>
}

void CTreeDlg::OnChunk2Setitemtext()
{
   HTREEITEM hSel = m_TreeCtrl.GetSelectedItem();
   CRect rect;
   m_TreeCtrl.GetItemRect(hSel, &rect, TRUE);
   CPoint myPoint(rect.left + 3, rect.top + 3);

// <Snippet34>
   // Clear the text of the item at point myPoint.
   UINT uFlags;
   HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

   if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
   {
      m_TreeCtrl.SetItemText(hItem, NULL);
   }
// </Snippet34>
}

void CTreeDlg::OnChunk2Setlinecolor()
{
// <Snippet35>
   COLORREF clrPrev = m_TreeCtrl.SetLineColor(RGB(255, 0, 0));
// </Snippet35>
   UNREFERENCED_PARAMETER(clrPrev);
}

void CTreeDlg::OnChunk2Settextcolor()
{
// <Snippet36>
   // change text color to white and background to dark blue
   m_TreeCtrl.SetTextColor(RGB(255, 255, 255));
   ASSERT(m_TreeCtrl.GetTextColor() == RGB(255, 255, 255));
   m_TreeCtrl.SetBkColor(RGB(0, 0, 128));
   ASSERT(m_TreeCtrl.GetBkColor() == RGB(0, 0, 128));

   // force repaint immediately
   m_TreeCtrl.Invalidate();
// </Snippet36>
}

void CTreeDlg::OnChunk2Sortchildren()
{
// <Snippet37>
   // Sort all of the items in the tree control.
   m_TreeCtrl.SortChildren(TVI_ROOT);
// </Snippet37>
}

// <Snippet38>
// Sort the item in reverse alphabetical order.
int CALLBACK MyCompareProc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort)
{
   // lParamSort contains a pointer to the tree control.
   // The lParam of an item is just its handle, 
   // as specified with SetItemData
   CTreeCtrl* pmyTreeCtrl = (CTreeCtrl*)lParamSort;
   CString strItem1 = pmyTreeCtrl->GetItemText((HTREEITEM)lParam1);
   CString strItem2 = pmyTreeCtrl->GetItemText((HTREEITEM)lParam2);

   return strItem2.Compare(strItem1);
}
// </Snippet38>

void CTreeDlg::OnChunk2Sortchildrencb()
{
// <Snippet39>
   TVSORTCB tvs;

   // Sort the tree control's items using my
   // callback procedure.
   tvs.hParent = TVI_ROOT;
   tvs.lpfnCompare = MyCompareProc;
   tvs.lParam = (LPARAM)&m_TreeCtrl;

   m_TreeCtrl.SortChildrenCB(&tvs);
// </Snippet39>
}
