// ListCtrlDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CListCtrl.h"
#include "ListCtrlDlg.h"


// CListCtrlDlg dialog

IMPLEMENT_DYNAMIC(CListCtrlDlg, CDialog)

	CListCtrlDlg::CListCtrlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CListCtrlDlg::IDD, pParent)
{

}

CListCtrlDlg::~CListCtrlDlg()
{
}

void CListCtrlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CListCtrlDlg, CDialog)
	ON_NOTIFY(NM_CLICK, IDD_MYLISTCTRL, &CListCtrlDlg::OnClick)
	ON_NOTIFY(NM_RCLICK, IDD_MYLISTCTRL, &CListCtrlDlg::OnRClick)
	ON_NOTIFY(NM_DBLCLK, IDD_MYLISTCTRL, &CListCtrlDlg::OnDblClk)
END_MESSAGE_MAP()


// CListCtrlDlg message handlers

BOOL CListCtrlDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	CWnd* pParentWnd = this;

	// <Snippet1>
	m_myListCtrl.Create(
		WS_CHILD|WS_VISIBLE|WS_BORDER|LVS_REPORT|LVS_EDITLABELS,
		CRect(10,10,400,200), pParentWnd, IDD_MYLISTCTRL);   
	// </Snippet1>

	m_myVirtualListCtrl.Create(WS_CHILD|WS_VISIBLE|WS_BORDER|LVS_REPORT|
		LVS_OWNERDATA, CRect(10, 250, 400, 450), this, IDD_MYVIRTUALLISTCTRL);

	// <Snippet16>
	// Allow the header controls item to be movable by the user.
	m_myListCtrl.SetExtendedStyle
		(m_myListCtrl.GetExtendedStyle()|LVS_EX_HEADERDRAGDROP);
	// </Snippet16>

	m_myListCtrl.SetExtendedStyle
		(m_myListCtrl.GetExtendedStyle()|LVS_EX_TRACKSELECT);

	m_lcImageList.Create(32, 32, ILC_COLOR, 2, 2);
	m_lcImageList.Add(AfxGetApp()->LoadIcon(IDI_LARGEICON1));
	m_lcImageList.Add(AfxGetApp()->LoadIcon(IDI_LARGEICON2));

	{
		// <Snippet20>
		ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == NULL);

		m_myListCtrl.SetImageList(&m_lcImageList, LVSIL_NORMAL);
		ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == &m_lcImageList);
		// </Snippet20>
	}

	{
		// <Snippet35>
		CString str;

		// Add 1024 items to the list view control.
		m_myListCtrl.SetItemCount(1024);

		for (int i = 0; i < 1024; i++)
		{
			str.Format(TEXT("item %d"), i);
			m_myListCtrl.InsertItem(i, str);
		}
		// </Snippet35>
	}

	{
		// <Snippet36>
		CString str;

		// Add 1024 items to the list view control.

		// Force my virtual list view control to allocate 
		// enough memory for my 1024 items.
		m_myVirtualListCtrl.SetItemCountEx(1024, LVSICF_NOSCROLL|
			LVSICF_NOINVALIDATEALL);

		for (int i = 0; i < 1024; i++)
		{
			str.Format(TEXT("item %d"), i);
			m_myVirtualListCtrl.InsertItem(i, str);
		}
		// </Snippet36>
	}

	m_myListCtrl.SetView(LV_VIEW_ICON);

	// <Snippet2>
	// Align all of the list view control items along the top
	// of the window (the list view control must be in icon or
	// small icon mode).
	m_myListCtrl.Arrange(LVA_ALIGNTOP);
	// </Snippet2>

	{
		CPoint point(0, 0);
		int nItem = 0;
		// <Snippet3>
		CImageList* pImageList = m_myListCtrl.CreateDragImage(nItem, &point);

		// do something

		delete pImageList;
		// </Snippet3>
	}

	{
		// <Snippet9>
		LVFINDINFO info;
		int nIndex;

		info.flags = LVFI_PARTIAL|LVFI_STRING;
		info.psz = _T("item");

		// Delete all of the items that begin with the string.
		while ((nIndex = m_myListCtrl.FindItem(&info)) != -1)
		{
			m_myListCtrl.DeleteItem(nIndex);
		}
		// </Snippet9>
	}

	{
		CString str;
		for (int i = 0; i < 10; i++)
		{
			str.Format(TEXT("item %d"), i);
			m_myListCtrl.InsertItem(i, str);
		}
	}

	{
		// <Snippet10>
		LVBKIMAGE bki;

		// If no background image is set for the list view control use
		// the Microsoft homepage image as the background image.
		if (m_myListCtrl.GetBkImage(&bki) && (bki.ulFlags == LVBKIF_SOURCE_NONE))
		{
			m_myListCtrl.SetBkImage(
				_T("http://www.microsoft.com/library/images/gifs/homepage/microsoft.gif"),
				TRUE);
		}
		// </Snippet10>
	}

	m_myListCtrl.SetView(LV_VIEW_DETAILS);

	m_myListCtrl.InsertColumn(0, _T("Column 0"));
	m_myListCtrl.InsertColumn(1, _T("Column 1"));

	{
		// <Snippet11>
		LVCOLUMN col;

		col.mask = LVCF_WIDTH;

		// Double the column width of the first column.
		if (m_myListCtrl.GetColumn(0, &col))
		{
			col.cx *= 2;
			m_myListCtrl.SetColumn(0, &col);
		}
		// </Snippet11>
	}

	{
		// <Snippet13>
		// Increase the column width of the second column by 20.
		int nWidth = m_myListCtrl.GetColumnWidth(1);
		m_myListCtrl.SetColumnWidth(1, 20 + nWidth);
		// </Snippet13>
	}

	{
		// <Snippet12>
		// Reverse the order of the columns in the list view control
		// (i.e. make the first column the last, the last column
		// the first, and so on...).
		CHeaderCtrl* pHeaderCtrl = m_myListCtrl.GetHeaderCtrl();

		if (pHeaderCtrl != NULL)
		{
			int  nColumnCount = pHeaderCtrl->GetItemCount();
			LPINT pnOrder = (LPINT) malloc(nColumnCount*sizeof(int));
			ASSERT(pnOrder != NULL);

			m_myListCtrl.GetColumnOrderArray(pnOrder, nColumnCount);

			int i, j, nTemp;
			for (i = 0, j = nColumnCount-1; i < j; i++, j--)
			{
				nTemp = pnOrder[i];
				pnOrder[i] = pnOrder[j];
				pnOrder[j] = nTemp;
			}

			m_myListCtrl.SetColumnOrderArray(nColumnCount, pnOrder);
			free(pnOrder);
		}
		// </Snippet12>
	}

	{
		m_myListCtrl.SetItem(3, 0, LVIF_STATE, NULL, 0, LVIS_SELECTED,
			LVIS_SELECTED, 0);
	}

	{
		// <Snippet15>
		POSITION pos = m_myListCtrl.GetFirstSelectedItemPosition();
		if (pos == NULL)
		{
			TRACE(_T("No items were selected!\n"));
		}
		else
		{
			while (pos)
			{
				int nItem = m_myListCtrl.GetNextSelectedItem(pos);
				TRACE(_T("Item %d was selected!\n"), nItem);
				// you could do your own processing on nItem here
			}
		}
		// </Snippet15>
	}

	{
		// <Snippet17>
		// Set the hot cursor to be the system app starting cursor.
		HCURSOR hCursor = ::LoadCursor(NULL, IDC_APPSTARTING);
		m_myListCtrl.SetHotCursor(hCursor);
		ASSERT(m_myListCtrl.GetHotCursor() == hCursor);
		// </Snippet17>
	}

	// <Snippet18>
	// Set the hot item to the first item only if no other item is 
	// highlighted.
	if (m_myListCtrl.GetHotItem() == -1)
		m_myListCtrl.SetHotItem(0);
	// </Snippet18>

	{
		// <Snippet19>
		// If the hover time is the default set to 1 sec.
		DWORD dwTime = m_myListCtrl.GetHoverTime();
		if (dwTime == -1)
			m_myListCtrl.SetHoverTime(1000);
		// </Snippet19>
	}

	{
		// <Snippet8>
		// Ensure that the last item is visible.
		int nCount = m_myListCtrl.GetItemCount();
		if (nCount > 0)
			m_myListCtrl.EnsureVisible(nCount-1, FALSE);
		// </Snippet8>
	}

	// <Snippet21>
	// If any item's data is equal to zero then reset it to -1.
	for (int i=0; i < m_myListCtrl.GetItemCount(); i++)
	{
		if (m_myListCtrl.GetItemData(i) == 0)
		{
			m_myListCtrl.SetItemData(i, (DWORD) -1);
		}
	}
	// </Snippet21>

	// <Snippet37>
	// Set the data of each item to be equal to its index.
	for (int i = 0; i < m_myListCtrl.GetItemCount(); i++)
	{
		m_myListCtrl.SetItemData(i, i);
	}
	// </Snippet37>

	{
		// <Snippet22>
		POINT pt;

		// Move all items in the list control 100 pixels to the right.
		UINT i, nCount = m_myListCtrl.GetItemCount();

		for (i=0; i < nCount; i++)
		{
			m_myListCtrl.GetItemPosition(i, &pt);
			pt.x += 100;
			m_myListCtrl.SetItemPosition(i, pt);
		}   
		// </Snippet22>
	}

	CRect aRects[] = { CRect(0, 0, 10, 10), CRect(0, 10, 10, 20) };
	m_myListCtrl.SetWorkAreas((int)(sizeof(aRects) / sizeof(aRects[0])), aRects);

	{
		// <Snippet25>
		UINT i, uCount = m_myListCtrl.GetNumberOfWorkAreas();
		LPRECT lpRects = (LPRECT) malloc(uCount*sizeof(RECT));

		if (lpRects != NULL)
		{
			// Dump all of the work area dimensions.
			m_myListCtrl.GetWorkAreas(uCount, lpRects);

			for (i=0; i < uCount; i++)
			{
				TRACE(_T("Work area %d; left = %d, top = %d, right = %d, ")
					_T("bottom = %d\r\n"),
					i, lpRects[i].left, lpRects[i].top, lpRects[i].right, 
					lpRects[i].bottom);
			}

			free(lpRects);
		}
		else
		{
			TRACE(_T("Couldn't allocate enough memory!"));   
		}

		// </Snippet25>
	}

	{
		// <Snippet26>
		UINT i, uSelectedCount = m_myListCtrl.GetSelectedCount();
		int  nItem = -1;

		// Update all of the selected items.
		if (uSelectedCount > 0)
		{
			for (i=0; i < uSelectedCount; i++)
			{
				nItem = m_myListCtrl.GetNextItem(nItem, LVNI_SELECTED);
				ASSERT(nItem != -1);
				m_myListCtrl.Update(nItem); 
			}
		}
		// </Snippet26>
	}

	// <Snippet27>
	// Set the selection mark to the first item only if no other item is 
	// selected.
	if (m_myListCtrl.GetSelectionMark() == -1)
		m_myListCtrl.SetSelectionMark(0);
	// </Snippet27>

	{
		// <Snippet28>
		CString strColumn;
		int nWidth;

		// Insert six columns in the list view control. Make the width of
		// the column be the width of the column header plus 50%.
		for (int i = 0; i < 6; i++)
		{
			strColumn.Format(_T("column %d"), i);
			nWidth = 3*m_myListCtrl.GetStringWidth(strColumn)/2;
			m_myListCtrl.InsertColumn(i, strColumn, LVCFMT_LEFT, nWidth);
		}
		// </Snippet28>
	}

	{
		// <Snippet29>
		CToolTipCtrl* pTip = m_myListCtrl.GetToolTips();
		if (NULL != pTip)
		{
			pTip->UpdateTipText(_T("I'm a list view!"), &m_myListCtrl,
				IDD_MYLISTCTRL);
		}
		// </Snippet29>
	}

	{
		// <Snippet30>
		// Make sure the focus is set to the list view control.
		m_myListCtrl.SetFocus();

		// Select all of the items that are completely visible.
		int n = m_myListCtrl.GetTopIndex();
		int nLast = n + m_myListCtrl.GetCountPerPage();

		for (; n < nLast; n++)
		{
			m_myListCtrl.SetItemState(n, LVIS_SELECTED, LVIS_SELECTED);
			ASSERT(m_myListCtrl.GetItemState(n, LVIS_SELECTED) == LVIS_SELECTED); 
		}
		// </Snippet30>
	}

	{
		// <Snippet32>
		// Use the 3D button face color for the background.
		COLORREF crBkColor = ::GetSysColor(COLOR_3DFACE);
		m_myListCtrl.SetBkColor(crBkColor);
		ASSERT(m_myListCtrl.GetBkColor() == crBkColor);
		// </Snippet32>
	}

	{
		// <Snippet24>
		// Use the 3D button face color for the background.
		COLORREF crBkColor = ::GetSysColor(COLOR_3DFACE);
		m_myListCtrl.SetTextBkColor(crBkColor);
		ASSERT(m_myListCtrl.GetTextBkColor() == crBkColor);
		// </Snippet24>
	}


	// <Snippet38>
	// Use the window text color for
	// the item text of the list view control.
	COLORREF crTextColor = ::GetSysColor(COLOR_WINDOWTEXT);
	m_myListCtrl.SetTextColor(crTextColor);
	ASSERT(m_myListCtrl.GetTextColor() == crTextColor);
	// </Snippet38>

	m_myListCtrl.SortItems(&CListCtrlDlg::MyCompareProc, 0);

	// <Snippet33>
	// Set the callback mask so that only the selected and focused states
	// are stored for each item.
	m_myListCtrl.SetCallbackMask(LVIS_SELECTED|LVIS_FOCUSED);
	ASSERT(m_myListCtrl.GetCallbackMask() == 
		(LVIS_SELECTED|LVIS_FOCUSED));
	// </Snippet33>

	// <Snippet34>
	// Leave lots of space between icons.
	m_myListCtrl.SetIconSpacing(CSize(100, 100));
	// </Snippet34>

	{
		// <Snippet7>
		// Make sure the focus is set to the list view control.
		m_myListCtrl.SetFocus();

		// Show the edit control on the label of the first
		// item in the list view control.
		CEdit* pmyEdit = m_myListCtrl.EditLabel(1);
		ASSERT(pmyEdit != NULL);
		// </Snippet7>
	}

	{
		// <Snippet14>
		// The string replacing the text in the edit control.
		LPCTSTR lpszmyString = _T("custom label!");

		// If possible, replace the text in the label edit control.
		CEdit* pEdit = m_myListCtrl.GetEditControl();

		if (pEdit != NULL)
		{
			pEdit->SetWindowText(lpszmyString);
		}
		// </Snippet14>
	}

	{
		// <Snippet6>
		int nCount = m_myListCtrl.GetItemCount();

		// Delete all of the items from the list view control.
		for (int i=0; i < nCount; i++)
		{
			m_myListCtrl.DeleteItem(0);
		}
		// </Snippet6>
	}

	// <Snippet39>
	// Remove all working areas.
	m_myListCtrl.SetWorkAreas(0, NULL);
	// </Snippet39>

	{
		// <Snippet5>
		int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

		// Delete all of the columns.
		for (int i=0; i < nColumnCount; i++)
		{
			m_myListCtrl.DeleteColumn(0);
		}
		// </Snippet5>
	}

	// <Snippet4>
	// Delete all of the items from the list view control.
	m_myListCtrl.DeleteAllItems();
	ASSERT(m_myListCtrl.GetItemCount() == 0);
	// </Snippet4>

	{
		CString strColumn;
		int nWidth;
		for (int i = 0; i < 3; i++)
		{
			strColumn.Format(_T("column %d"), i);
			nWidth = 3*m_myListCtrl.GetStringWidth(strColumn)/2;
			m_myListCtrl.InsertColumn(i, strColumn, LVCFMT_LEFT, nWidth);
		}

		// <Snippet42>
		CString strText;
		int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

		// Insert 10 items in the list view control.
		for (int i = 0; i < 10; i++)
		{
			strText.Format(TEXT("item %d"), i);

			// Insert the item, select every other item.
			m_myListCtrl.InsertItem(LVIF_TEXT | LVIF_STATE, i, strText, 
				(i % 2) == 0 ? LVIS_SELECTED : 0, LVIS_SELECTED, 0, 0);

			// Initialize the text of the subitems.
			for (int j = 1; j < nColumnCount; j++)
			{
				strText.Format(TEXT("sub-item %d %d"), i, j);
				m_myListCtrl.SetItemText(i, j, strText);
			}
		}
		// </Snippet42>
	}

	{
		// <Snippet43>
		int nCount = m_myListCtrl.GetItemCount();
		BOOL fCheck = FALSE;

		// Set the check state of every other item to TRUE and 
		// all others to FALSE.
		for (int i = 0; i < nCount; i++)
		{
			m_myListCtrl.SetCheck(i, fCheck);
			ASSERT((m_myListCtrl.GetCheck(i) && fCheck) || 
				(!m_myListCtrl.GetCheck(i) && !fCheck));
			fCheck = !fCheck;
		}
		// </Snippet43>
	}


	return TRUE;  // return TRUE unless you set the focus to a control
}

// <Snippet23>
// OnClick is the handler for the NM_CLICK notification
void CListCtrlDlg::OnClick(NMHDR* pNMHDR, LRESULT* pResult)
{
	UNREFERENCED_PARAMETER(pResult);

	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;

	// Get the current mouse location and convert it to client
	// coordinates.
	CPoint pos( ::GetMessagePos() ); 
	ScreenToClient(&pos);

	// Get indexes of the first and last visible items in 
	// the listview control.
	int index = m_myListCtrl.GetTopIndex();
	int last_visible_index = index + m_myListCtrl.GetCountPerPage();
	if (last_visible_index > m_myListCtrl.GetItemCount())
		last_visible_index = m_myListCtrl.GetItemCount();

	// Loop until number visible items has been reached.
	while (index <= last_visible_index)
	{
		// Get the bounding rectangle of an item. If the mouse
		// location is within the bounding rectangle of the item,
		// you know you have found the item that was being clicked.
		CRect r;
		m_myListCtrl.GetItemRect(index, &r, LVIR_BOUNDS);
		if (r.PtInRect(pia->ptAction))
		{
			UINT flag = LVIS_SELECTED | LVIS_FOCUSED;
			m_myListCtrl.SetItemState(index, flag, flag);
			break;
		}

		// Get the next item in listview control.
		index++;
	}
}
// </Snippet23>

// <Snippet31>
void CListCtrlDlg::OnRClick(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
	CPoint point(pia->ptAction);

	// Select the item the user clicked on.
	UINT uFlags;
	int nItem = m_myListCtrl.HitTest(point, &uFlags);

	if (uFlags & LVHT_ONITEMLABEL)
	{
		m_myListCtrl.SetItem(nItem, 0, LVIF_STATE, NULL, 0, LVIS_SELECTED, 
			LVIS_SELECTED, 0);
	}

	*pResult = 0;
}
// </Snippet31>

// <Snippet40>
// Sort items by associated lParam
int CALLBACK CListCtrlDlg::MyCompareProc(LPARAM lParam1, LPARAM lParam2, 
	LPARAM lParamSort)
{
	UNREFERENCED_PARAMETER(lParamSort);

	return (int)(lParam1 - lParam2);
}
// </Snippet40>

// <Snippet44>
// Sort the items by passing in the comparison function.
void CListCtrlDlg::Sort()
{
	m_myListCtrl.SortItems(&CListCtrlDlg::MyCompareProc, 0);
}
// </Snippet44>

// <Snippet41>
void CListCtrlDlg::OnDblClk(NMHDR* pNMHDR, LRESULT* pResult)
{
	UNREFERENCED_PARAMETER(pResult);

	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
	LVHITTESTINFO lvhti;

	// Clear the subitem text the user clicked on.
	lvhti.pt = pia->ptAction;
	m_myListCtrl.SubItemHitTest(&lvhti);

	if (lvhti.flags & LVHT_ONITEMLABEL)
	{
		m_myListCtrl.SetItemText(lvhti.iItem, lvhti.iSubItem, NULL);
	}
}
// </Snippet41>