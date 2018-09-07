---
title: "CMFCListCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCListCtrl", "AFXLISTCTRL/CMFCListCtrl", "AFXLISTCTRL/CMFCListCtrl::EnableMarkSortedColumn", "AFXLISTCTRL/CMFCListCtrl::EnableMultipleSort", "AFXLISTCTRL/CMFCListCtrl::GetHeaderCtrl", "AFXLISTCTRL/CMFCListCtrl::IsMultipleSort", "AFXLISTCTRL/CMFCListCtrl::OnCompareItems", "AFXLISTCTRL/CMFCListCtrl::OnGetCellBkColor", "AFXLISTCTRL/CMFCListCtrl::OnGetCellFont", "AFXLISTCTRL/CMFCListCtrl::OnGetCellTextColor", "AFXLISTCTRL/CMFCListCtrl::RemoveSortColumn", "AFXLISTCTRL/CMFCListCtrl::SetSortColumn", "AFXLISTCTRL/CMFCListCtrl::Sort"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCListCtrl [MFC], EnableMarkSortedColumn", "CMFCListCtrl [MFC], EnableMultipleSort", "CMFCListCtrl [MFC], GetHeaderCtrl", "CMFCListCtrl [MFC], IsMultipleSort", "CMFCListCtrl [MFC], OnCompareItems", "CMFCListCtrl [MFC], OnGetCellBkColor", "CMFCListCtrl [MFC], OnGetCellFont", "CMFCListCtrl [MFC], OnGetCellTextColor", "CMFCListCtrl [MFC], RemoveSortColumn", "CMFCListCtrl [MFC], SetSortColumn", "CMFCListCtrl [MFC], Sort"]
ms.assetid: 50d16aee-138c-4f34-8690-cb75d544ef2e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCListCtrl Class
The `CMFCListCtrl` class extends the functionality of [CListCtrl Class](../../mfc/reference/clistctrl-class.md) class by supporting the advanced header control functionality of the [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md).  
  
## Syntax  
  
```  
class CMFCListCtrl : public CListCtrl  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCListCtrl::EnableMarkSortedColumn](#enablemarksortedcolumn)|Enables the ability to mark a sorted column with a different background color.|  
|[CMFCListCtrl::EnableMultipleSort](#enablemultiplesort)|Enables multiple sort mode.|  
|[CMFCListCtrl::GetHeaderCtrl](#getheaderctrl)|Returns a reference to the underlined header control.|  
|[CMFCListCtrl::IsMultipleSort](#ismultiplesort)|Checks if the list control is in multiple sort mode.|  
|[CMFCListCtrl::OnCompareItems](#oncompareitems)|Called by the framework when it must compare two list control items.|  
|[CMFCListCtrl::OnGetCellBkColor](#ongetcellbkcolor)|Called by the framework when it must determine the background color of an individual cell.|  
|[CMFCListCtrl::OnGetCellFont](#ongetcellfont)|Called by the framework when it must obtain the font for the cell being drawn.|  
|[CMFCListCtrl::OnGetCellTextColor](#ongetcelltextcolor)|Called by the framework when it must determine the text color of an individual cell.|  
|[CMFCListCtrl::RemoveSortColumn](#removesortcolumn)|Removes a sort column from the list of sorted columns.|  
|[CMFCListCtrl::SetSortColumn](#setsortcolumn)|Sets the current sorted column and the sort order.|  
|[CMFCListCtrl::Sort](#sort)|Sorts the list control.|  
  
## Remarks  
 `CMFCListCtrl` offers two enhancements to [CListCtrl Class](../../mfc/reference/clistctrl-class.md) class. First, it indicates that column sorting is an available option by automatically drawing a sort arrow on the header. Second, it supports data sorting on multiple columns at the same time.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCListCtrl` class. The example shows how to create a list control, insert columns, insert items, set the text of an item, and set the font of the list control. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#25](../../mfc/codesnippet/cpp/cmfclistctrl-class_1.h)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#26](../../mfc/codesnippet/cpp/cmfclistctrl-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListCtrl](../../mfc/reference/clistctrl-class.md)  
  
 [CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)  
  
## Requirements  
 **Header:** afxlistctrl.h  
  
##  <a name="enablemarksortedcolumn"></a>  CMFCListCtrl::EnableMarkSortedColumn  
 Marks the sorted columns with a different background color.  
  
```  
void EnableMarkSortedColumn(
    BOOL bMark = TRUE,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] *bMark*  
 A Boolean parameter that determines whether to enable a different background color.  
  
 [in] *bRedraw*  
 A Boolean parameter that determines whether to redraw the control immediately.  
  
### Remarks  
 `EnableMarkSortedColumn` uses the method `CDrawingManager::PixelAlpha` to calculate what color to use for sorted columns. The color picked is based upon the regular background color.  
  
##  <a name="enablemultiplesort"></a>  CMFCListCtrl::EnableMultipleSort  
 Enables sorting the rows of data in the list control by multiple columns.  
  
```  
void EnableMultipleSort(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] *bEnable*  
 A Boolean that specifies whether to enable multiple column sort mode.  
  
### Remarks  
 When you enable sorting based on multiple columns, the columns do have a hierarchy. The rows of data will first be sorted by the primary column. Any equivalent values are then sorted by each subsequent column based on priority.  
  
##  <a name="getheaderctrl"></a>  CMFCListCtrl::GetHeaderCtrl  
 Returns a reference to the header control.  
  
```  
virtual CMFCHeaderCtrl& GetHeaderCtrl();
```  
  
### Return Value  
 A reference to the underlying [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) object.  
  
### Remarks  
 The header control for a list control is the window that contains the titles for the columns. It is usually positioned directly above the columns.  
  
##  <a name="ismultiplesort"></a>  CMFCListCtrl::IsMultipleSort  
 Checks whether the list control currently supports sorting on multiple columns.  
  
```  
BOOL IsMultipleSort() const;  
```  
  
### Return Value  
 TRUE if the list control supports multiple sort; FALSE otherwise.  
  
### Remarks  
 When a [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md) supports multiple sorting, the user can sort the data in the list control by multiple columns. To enable multiple sorting, call [CMFCListCtrl::EnableMultipleSort](#enablemultiplesort).  
  
##  <a name="oncompareitems"></a>  CMFCListCtrl::OnCompareItems  
 The framework calls this method when it compares two items.  
  
```  
virtual int OnCompareItems(
    LPARAM lParam1,  
    LPARAM lParam2,  
    int iColumn);
```  
  
### Parameters  
 [in] *lParam1*  
 The first item to compare.  
  
 [in] *lParam2*  
 The second item to compare.  
  
 [in] *iColumn*  
 The index of the column that this method is sorting.  
  
### Return Value  
 An integer that indicates the relative position of the two items. A negative value indicates that the first item should precede the second, positive value indicates that the first item should follow the second, and zero means that the two items are equivalent.  
  
### Remarks  
 The default implementation always returns 0. You must override this function to provide a sorting algorithm.  
  
##  <a name="ongetcellbkcolor"></a>  CMFCListCtrl::OnGetCellBkColor  
 The framework calls this method when it must determine the background color of an individual cell.  
  
```  
virtual COLORREF OnGetCellBkColor(
    int nRow,  
    int nColumn);
```  
  
### Parameters  
 [in] *nRow*  
 The row of the cell in question.  
  
 [in] *nColumn*  
 The column of the cell in question.  
  
### Return Value  
 A COLOREF value that specifies the background color of the cell.  
  
### Remarks  
 The default implementation of `OnGetCellBkColor` does not use the supplied input parameters and instead simply calls `GetBkColor`. Therefore, by default, the whole list control will have the same background color. You can override `OnGetCellBkColor` in a derived class to mark individual cells with a separate background color.  
  
##  <a name="ongetcellfont"></a>  CMFCListCtrl::OnGetCellFont  
 The framework calls this method when it obtains the font for an individual cell.  
  
```  
virtual HFONT OnGetCellFont(
    int nRow,  
    int nColumn,  
    DWORD dwData = 0);
```  
  
### Parameters  
 [in] *nRow*  
 The row of the cell in question.  
  
 [in] *nColumn*  
 The column of the cell in question.  
  
 [in] *dwData*  
 User-defined data. The default implementation does not use this parameter.  
  
### Return Value  
 A handle to the font that is used for the current cell.  
  
### Remarks  
 By default, this method returns NULL. All of the cells in a list control have the same font. Override this method in order to provide different fonts for different cells.  
  
##  <a name="ongetcelltextcolor"></a>  CMFCListCtrl::OnGetCellTextColor  
 The framework calls this method when it must determine the text color of an individual cell.  
  
```  
virtual COLORREF OnGetCellTextColor(
    int nRow,  
    int nColumn);
```  
  
### Parameters  
 [in] *nRow*  
 The row of the cell in question.  
  
 [in] *nColumn*  
 The column of the cell in question.  
  
### Return Value  
 A COLOREF value that specifies the text color of the cell.  
  
### Remarks  
 By default, this method calls `GetTextColor` regardless of input parameters. The whole list control will have the same text color. You can override `OnGetCellTextColor` in a derived class to mark individual cells with a separate text color.  
  
##  <a name="removesortcolumn"></a>  CMFCListCtrl::RemoveSortColumn  
 Removes a sort column from the list of sorted columns.  
  
```  
void RemoveSortColumn(int iColumn);
```  
  
### Parameters  
 [in] *iColumn*  
 The column to remove.  
  
### Remarks  
 This method removes a sort column from the header control. It calls [CMFCHeaderCtrl::RemoveSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#removesortcolumn).  
  
##  <a name="setsortcolumn"></a>  CMFCListCtrl::SetSortColumn  
 Sets the current sorted column and the sort order.  
  
```  
void SetSortColumn(
    int iColumn,  
    BOOL bAscending = TRUE,  
    BOOL bAdd = FALSE);
```  
  
### Parameters  
 [in] *iColumn*  
 The column to sort.  
  
 [in] *bAscending*  
 A Boolean that specifies the sort order.  
  
 [in] *bAdd*  
 A Boolean that specifies whether the method adds the column indicated by *iColumn* to the list of sort columns.  
  
### Remarks  
 This method passes the input parameters to the header control by using the method [CMFCHeaderCtrl::SetSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#setsortcolumn).  
  
##  <a name="sort"></a>  CMFCListCtrl::Sort  
 Sorts the list control.  
  
```  
virtual void Sort(
    int iColumn,  
    BOOL bAscending = TRUE,  
    BOOL bAdd = FALSE);
```  
  
### Parameters  
 [in] *iColumn*  
 The column to sort.  
  
 [in] *bAscending*  
 A Boolean that specifies the sort order.  
  
 [in] *bAdd*  
 A Boolean that specifies whether this method adds the column indicated by *iColumn* to the list of sort columns.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CListCtrl Class](../../mfc/reference/clistctrl-class.md)
