---
description: "Learn more about: CMFCHeaderCtrl Class"
title: "CMFCHeaderCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCHeaderCtrl", "AFXHEADERCTRL/CMFCHeaderCtrl", "AFXHEADERCTRL/CMFCHeaderCtrl::CMFCHeaderCtrl", "AFXHEADERCTRL/CMFCHeaderCtrl::EnableMultipleSort", "AFXHEADERCTRL/CMFCHeaderCtrl::GetColumnState", "AFXHEADERCTRL/CMFCHeaderCtrl::GetSortColumn", "AFXHEADERCTRL/CMFCHeaderCtrl::IsAscending", "AFXHEADERCTRL/CMFCHeaderCtrl::IsDialogControl", "AFXHEADERCTRL/CMFCHeaderCtrl::IsMultipleSort", "AFXHEADERCTRL/CMFCHeaderCtrl::RemoveSortColumn", "AFXHEADERCTRL/CMFCHeaderCtrl::SetSortColumn", "AFXHEADERCTRL/CMFCHeaderCtrl::OnDrawItem", "AFXHEADERCTRL/CMFCHeaderCtrl::OnDrawSortArrow", "AFXHEADERCTRL/CMFCHeaderCtrl::OnFillBackground"]
helpviewer_keywords: ["CMFCHeaderCtrl [MFC], CMFCHeaderCtrl", "CMFCHeaderCtrl [MFC], EnableMultipleSort", "CMFCHeaderCtrl [MFC], GetColumnState", "CMFCHeaderCtrl [MFC], GetSortColumn", "CMFCHeaderCtrl [MFC], IsAscending", "CMFCHeaderCtrl [MFC], IsDialogControl", "CMFCHeaderCtrl [MFC], IsMultipleSort", "CMFCHeaderCtrl [MFC], RemoveSortColumn", "CMFCHeaderCtrl [MFC], SetSortColumn", "CMFCHeaderCtrl [MFC], OnDrawItem", "CMFCHeaderCtrl [MFC], OnDrawSortArrow", "CMFCHeaderCtrl [MFC], OnFillBackground"]
ms.assetid: 2f5fbf7b-5c75-42db-9216-640b1628f777
---
# CMFCHeaderCtrl Class

The `CMFCHeaderCtrl` class supports sorting multiple columns in a header control.

## Syntax

```
class CMFCHeaderCtrl : public CHeaderCtrl
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCHeaderCtrl::CMFCHeaderCtrl](#cmfcheaderctrl)|Constructs a `CMFCHeaderCtrl` object.|
|`CMFCHeaderCtrl::~CMFCHeaderCtrl`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort)|Enables or disables *multiple column sort* mode for the current header control.|
|[CMFCHeaderCtrl::GetColumnState](#getcolumnstate)|Indicates whether a column is not sorted, or is sorted in ascending or descending order.|
|[CMFCHeaderCtrl::GetSortColumn](#getsortcolumn)|Retrieves the zero-based index of the first sorted column in the header control.|
|`CMFCHeaderCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCHeaderCtrl::IsAscending](#isascending)|Indicates whether any column in the header control is sorted in ascending order.|
|[CMFCHeaderCtrl::IsDialogControl](#isdialogcontrol)|Indicates whether the parent window of the current header control is a dialog box.|
|[CMFCHeaderCtrl::IsMultipleSort](#ismultiplesort)|Indicates whether the current header control is in *multiple column sort* mode.|
|[CMFCHeaderCtrl::RemoveSortColumn](#removesortcolumn)|Removes the specified column from the list of sort columns.|
|[CMFCHeaderCtrl::SetSortColumn](#setsortcolumn)|Sets the sort order of a specified column in a header control.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCHeaderCtrl::OnDrawItem](#ondrawitem)|Called by the framework to draw a header control column.|
|[CMFCHeaderCtrl::OnDrawSortArrow](#ondrawsortarrow)|Called by the framework to draw the sort arrow.|
|[CMFCHeaderCtrl::OnFillBackground](#onfillbackground)|Called by the framework to fill the background of a header control column.|

## Example

The following example demonstrates how to construct an object of the `CMFCHeaderCtrl` class, and how to enable *multiple column sort* mode for the current header control.

[!code-cpp[NVC_MFC_RibbonApp#24](../../mfc/reference/codesnippet/cpp/cmfcheaderctrl-class_1.cpp)]

## Remarks

The `CMFCHeaderCtrl` class draws a sort arrow on a header control column to indicate that the column is sorted. Use *multiple column sort* mode if a set of columns in the parent list control ( [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md)) can be sorted at the same time.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)

[CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md)

## Requirements

**Header:** afxheaderctrl.h

## <a name="cmfcheaderctrl"></a> CMFCHeaderCtrl::CMFCHeaderCtrl

Constructs a `CMFCHeaderCtrl` object.

```
CMFCHeaderCtrl::CMFCHeaderCtrl()
```

### Remarks

This constructor initializes the following member variables to the specified values:

|Member variable|Value|
|---------------------|-----------|
|`m_bIsMousePressed`|FALSE|
|`m_bMultipleSort`|FALSE|
|`m_bAscending`|TRUE|
|`m_nHighlightedItem`|-1|
|`m_bTracked`|FALSE|
|`m_bIsDlgControl`|FALSE|
|`m_hFont`|NULL|

## <a name="enablemultiplesort"></a> CMFCHeaderCtrl::EnableMultipleSort

Enables or disables *multiple column sort* mode for the current header control.

```cpp
void EnableMultipleSort(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable multiple column sort mode; FALSE to disable multiple column sort mode and to remove any columns from the list of sorted columns. The default value is TRUE.

### Remarks

Use this method to enable or disable multiple column sort mode. Two or more columns can participate in a sort if the header control is in multiple column sort mode.

## <a name="getcolumnstate"></a> CMFCHeaderCtrl::GetColumnState

Indicates whether a column is unsorted, or is sorted in ascending or descending order.

```
int GetColumnState(int iColumn) const;
```

### Parameters

*iColumn*<br/>
[in] The zero-based index of a column.

### Return Value

A value that indicate the sort status of the specified column. The following table lists the possible values:

|Value|Description|
|-----------|-----------------|
|-1|Sorted in descending order.|
|0|Not sorted.|
|1|Sorted in ascending order.|

### Remarks

## <a name="getsortcolumn"></a> CMFCHeaderCtrl::GetSortColumn

Retrieves the zero-based index of the first sorted column in the header control.

```
int GetSortColumn() const;
```

### Return Value

The index of a sorted column, or -1 if no sorted column is found.

### Remarks

If the header control is in *multiple column sort* mode and you compiled the application in debug mode, this method asserts and advises you to use the [CMFCHeaderCtrl::GetColumnState](#getcolumnstate) method instead. If the header control is in multiple column sort mode and you compiled the application in retail mode, this method returns -1.

## <a name="isascending"></a> CMFCHeaderCtrl::IsAscending

Indicates whether any column in the header control is sorted in ascending order.

```
BOOL IsAscending() const;
```

### Return Value

TRUE if any column in the header control is sorted in ascending order; otherwise, FALSE.

### Remarks

The value that this method returns is used to display the appropriate sort arrow on the header control item. Use the [CMFCHeaderCtrl::SetSortColumn](#setsortcolumn) method to set the sort order.

## <a name="isdialogcontrol"></a> CMFCHeaderCtrl::IsDialogControl

Indicates whether the parent window of the current header control is a dialog box.

```
BOOL IsDialogControl() const;
```

### Return Value

TRUE if the parent window of the current header control is a dialog box; otherwise, FALSE.

## <a name="ismultiplesort"></a> CMFCHeaderCtrl::IsMultipleSort

Indicates whether the current header control is in *multiple column sort* mode.

```
BOOL IsMultipleSort() const;
```

### Return Value

TRUE if multiple column sort mode is enabled; otherwise, FALSE.

### Remarks

Use the [CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort) method to enable or disable multiple column sort mode. Two or more columns can participate in a sort if the header control is in multiple column sort mode.

## <a name="ondrawitem"></a> CMFCHeaderCtrl::OnDrawItem

Called by the framework to draw a header control column.

```
virtual void OnDrawItem(
    CDC* pDC,
    int iItem,
    CRect rect,
    BOOL bIsPressed,
    BOOL bIsHighlighted);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*iItem*<br/>
[in] The zero-based index of the item to draw.

*rect*<br/>
[in] The bounding rectangle of the item to draw.

*bIsPressed*<br/>
[in] TRUE to draw the item in pressed state; otherwise, FALSE.

*bIsHighlighted*<br/>
[in] TRUE to draw the item in highlighted state; otherwise, FALSE.

## <a name="ondrawsortarrow"></a> CMFCHeaderCtrl::OnDrawSortArrow

Called by the framework to draw the sort arrow.

```
virtual void OnDrawSortArrow(
    CDC* pDC,
    CRect rectArrow);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectArrow*<br/>
[in] The bounding rectangle of the sort arrow.

## <a name="onfillbackground"></a> CMFCHeaderCtrl::OnFillBackground

Called by the framework to fill the background of a header control column.

```
virtual void OnFillBackground(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

### Remarks

## <a name="removesortcolumn"></a> CMFCHeaderCtrl::RemoveSortColumn

Removes the specified column from the list of sort columns.

```cpp
void RemoveSortColumn(int iColumn);
```

### Parameters

*iColumn*<br/>
[in] The zero-based index of the column to remove.

## <a name="setsortcolumn"></a> CMFCHeaderCtrl::SetSortColumn

Sets the sort order of a specified column in a header control.

```cpp
void SetSortColumn(
    int iColumn,
    BOOL bAscending=TRUE,
    BOOL bAdd=FALSE);
```

### Parameters

*iColumn*<br/>
[in] The zero-based index of a header control column. If this parameter is less than zero, this method removes all columns from the list of sort columns.

*bAscending*<br/>
[in] Specifies the sort order of the column that the *iColumn* parameter specifies. TRUE to set ascending order; FALSE to set descending order. The default value is TRUE.

*bAdd*<br/>
[in] TRUE to set the sort order of the column that the *iColumn* parameter specifies.

If the current header control is in *multiple column sort* mode, this method adds the specified column to the list of sort columns. Use [CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort) to set multiple column sort mode.

If multiple column sort mode is not set and this method is compiled in debug mode, this method asserts. If multiple column sort mode is not set and this method is compiled in retail mode, this method first removes all columns from the list of sort columns, and then adds the specified column to the list.

FALSE to first remove all columns from the list of sort columns, and then add the specified column to the list. The default value is FALSE.

### Remarks

Use this method to set the sort order of a column. If necessary, this method adds the column to the list of sort columns. The header control uses the sort order to draw a sort arrow that points up or down.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md)
