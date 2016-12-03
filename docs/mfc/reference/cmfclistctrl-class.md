---
title: "CMFCListCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCListCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCListCtrl class"
ms.assetid: 50d16aee-138c-4f34-8690-cb75d544ef2e
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CMFCListCtrl::EnableMarkSortedColumn](#cmfclistctrl__enablemarksortedcolumn)|Enables the ability to mark a sorted column with a different background color.|  
|[CMFCListCtrl::EnableMultipleSort](#cmfclistctrl__enablemultiplesort)|Enables multiple sort mode.|  
|[CMFCListCtrl::GetHeaderCtrl](#cmfclistctrl__getheaderctrl)|Returns a reference to the underlined header control.|  
|[CMFCListCtrl::IsMultipleSort](#cmfclistctrl__ismultiplesort)|Checks if the list control is in multiple sort mode.|  
|[CMFCListCtrl::OnCompareItems](#cmfclistctrl__oncompareitems)|Called by the framework when it must compare two list control items.|  
|[CMFCListCtrl::OnGetCellBkColor](#cmfclistctrl__ongetcellbkcolor)|Called by the framework when it must determine the background color of an individual cell.|  
|[CMFCListCtrl::OnGetCellFont](#cmfclistctrl__ongetcellfont)|Called by the framework when it must obtain the font for the cell being drawn.|  
|[CMFCListCtrl::OnGetCellTextColor](#cmfclistctrl__ongetcelltextcolor)|Called by the framework when it must determine the text color of an individual cell.|  
|[CMFCListCtrl::RemoveSortColumn](#cmfclistctrl__removesortcolumn)|Removes a sort column from the list of sorted columns.|  
|[CMFCListCtrl::SetSortColumn](#cmfclistctrl__setsortcolumn)|Sets the current sorted column and the sort order.|  
|[CMFCListCtrl::Sort](#cmfclistctrl__sort)|Sorts the list control.|  
  
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
  
##  <a name="cmfclistctrl__enablemarksortedcolumn"></a>  CMFCListCtrl::EnableMarkSortedColumn  
 Marks the sorted columns with a different background color.  
  
```  
void EnableMarkSortedColumn(
    BOOL bMark = TRUE,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] `bMark`  
 A Boolean parameter that determines whether to enable a different background color.  
  
 [in] `bRedraw`  
 A Boolean parameter that determines whether to redraw the control immediately.  
  
### Remarks  
 `EnableMarkSortedColumn` uses the method `CDrawingManager::PixelAlpha` to calculate what color to use for sorted columns. The color picked is based upon the regular background color.  
  
##  <a name="cmfclistctrl__enablemultiplesort"></a>  CMFCListCtrl::EnableMultipleSort  
 Enables sorting the rows of data in the list control by multiple columns.  
  
```  
void EnableMultipleSort(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean that specifies whether to enable multiple column sort mode.  
  
### Remarks  
 When you enable sorting based on multiple columns, the columns do have a hierarchy. The rows of data will first be sorted by the primary column. Any equivalent values are then sorted by each subsequent column based on priority.  
  
##  <a name="cmfclistctrl__getheaderctrl"></a>  CMFCListCtrl::GetHeaderCtrl  
 Returns a reference to the header control.  
  
```  
virtual CMFCHeaderCtrl& GetHeaderCtrl();
```  
  
### Return Value  
 A reference to the underlying [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md) object.  
  
### Remarks  
 The header control for a list control is the window that contains the titles for the columns. It is usually positioned directly above the columns.  
  
##  <a name="cmfclistctrl__ismultiplesort"></a>  CMFCListCtrl::IsMultipleSort  
 Checks whether the list control currently supports sorting on multiple columns.  
  
```  
BOOL IsMultipleSort() const;

 
```  
  
### Return Value  
 `TRUE` if the list control supports multiple sort; `FALSE` otherwise.  
  
### Remarks  
 When a [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md) supports multiple sorting, the user can sort the data in the list control by multiple columns. To enable multiple sorting, call [CMFCListCtrl::EnableMultipleSort](#cmfclistctrl__enablemultiplesort).  
  
##  <a name="cmfclistctrl__oncompareitems"></a>  CMFCListCtrl::OnCompareItems  
 The framework calls this method when it compares two items.  
  
```  
virtual int OnCompareItems(
    LPARAM lParam1,  
    LPARAM lParam2,  
    int iColumn);
```  
  
### Parameters  
 [in] `lParam1`  
 The first item to compare.  
  
 [in] `lParam2`  
 The second item to compare.  
  
 [in] `iColumn`  
 The index of the column that this method is sorting.  
  
### Return Value  
 An integer that indicates the relative position of the two items. A negative value indicates that the first item should precede the second, positive value indicates that the first item should follow the second, and zero means that the two items are equivalent.  
  
### Remarks  
 The default implementation always returns 0. You must override this function to provide a sorting algorithm.  
  
##  <a name="cmfclistctrl__ongetcellbkcolor"></a>  CMFCListCtrl::OnGetCellBkColor  
 The framework calls this method when it must determine the background color of an individual cell.  
  
```  
virtual COLORREF OnGetCellBkColor(
    int nRow,  
    int nColumn);
```  
  
### Parameters  
 [in] `nRow`  
 The row of the cell in question.  
  
 [in] `nColumn`  
 The column of the cell in question.  
  
### Return Value  
 A `COLOREF` value that specifies the background color of the cell.  
  
### Remarks  
 The default implementation of `OnGetCellBkColor` does not use the supplied input parameters and instead simply calls `GetBkColor`. Therefore, by default, the whole list control will have the same background color. You can override `OnGetCellBkColor` in a derived class to mark individual cells with a separate background color.  
  
##  <a name="cmfclistctrl__ongetcellfont"></a>  CMFCListCtrl::OnGetCellFont  
 The framework calls this method when it obtains the font for an individual cell.  
  
```  
virtual HFONT OnGetCellFont(
    int nRow,  
    int nColumn,  
    DWORD dwData = 0);
```  
  
### Parameters  
 [in] `nRow`  
 The row of the cell in question.  
  
 [in] `nColumn`  
 The column of the cell in question.  
  
 [in] `dwData`  
 User-defined data. The default implementation does not use this parameter.  
  
### Return Value  
 A handle to the font that is used for the current cell.  
  
### Remarks  
 By default, this method returns `NULL`. All of the cells in a list control have the same font. Override this method in order to provide different fonts for different cells.  
  
##  <a name="cmfclistctrl__ongetcelltextcolor"></a>  CMFCListCtrl::OnGetCellTextColor  
 The framework calls this method when it must determine the text color of an individual cell.  
  
```  
virtual COLORREF OnGetCellTextColor(
    int nRow,  
    int nColumn);
```  
  
### Parameters  
 [in] `nRow`  
 The row of the cell in question.  
  
 [in] `nColumn`  
 The column of the cell in question.  
  
### Return Value  
 A `COLOREF` value that specifies the text color of the cell.  
  
### Remarks  
 By default, this method calls `GetTextColor` regardless of input parameters. The whole list control will have the same text color. You can override `OnGetCellTextColor` in a derived class to mark individual cells with a separate text color.  
  
##  <a name="cmfclistctrl__removesortcolumn"></a>  CMFCListCtrl::RemoveSortColumn  
 Removes a sort column from the list of sorted columns.  
  
```  
void RemoveSortColumn(int iColumn);
```  
  
### Parameters  
 [in] `iColumn`  
 The column to remove.  
  
### Remarks  
 This method removes a sort column from the header control. It calls [CMFCHeaderCtrl::RemoveSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#cmfcheaderctrl__removesortcolumn).  
  
##  <a name="cmfclistctrl__setsortcolumn"></a>  CMFCListCtrl::SetSortColumn  
 Sets the current sorted column and the sort order.  
  
```  
void SetSortColumn(
    int iColumn,  
    BOOL bAscending = TRUE,  
    BOOL bAdd = FALSE);
```  
  
### Parameters  
 [in] `iColumn`  
 The column to sort.  
  
 [in] `bAscending`  
 A Boolean that specifies the sort order.  
  
 [in] `bAdd`  
 A Boolean that specifies whether the method adds the column indicated by `iColumn` to the list of sort columns.  
  
### Remarks  
 This method passes the input parameters to the header control by using the method [CMFCHeaderCtrl::SetSortColumn](../../mfc/reference/cmfcheaderctrl-class.md#cmfcheaderctrl__setsortcolumn).  
  
##  <a name="cmfclistctrl__sort"></a>  CMFCListCtrl::Sort  
 Sorts the list control.  
  
```  
virtual void Sort(
    int iColumn,  
    BOOL bAscending = TRUE,  
    BOOL bAdd = FALSE);
```  
  
### Parameters  
 [in] `iColumn`  
 The column to sort.  
  
 [in] `bAscending`  
 A Boolean that specifies the sort order.  
  
 [in] `bAdd`  
 A Boolean that specifies whether this method adds the column indicated by `iColumn` to the list of sort columns.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CListCtrl Class](../../mfc/reference/clistctrl-class.md)
