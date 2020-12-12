---
description: "Learn more about: CMFCRibbonStatusBar Class"
title: "CMFCRibbonStatusBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonStatusBar", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddDynamicElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddExtendedElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddSeparator", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::Create", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::CreateEx", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::FindByID", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::FindElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetCount", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExCount", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExtendedArea", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetSpace", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsBottomFrame", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsExtendedElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsInformationMode", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RecalcLayout", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RemoveAll", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RemoveElement", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::SetInformation", "AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::OnDrawInformation"]
helpviewer_keywords: ["CMFCRibbonStatusBar [MFC], AddDynamicElement", "CMFCRibbonStatusBar [MFC], AddElement", "CMFCRibbonStatusBar [MFC], AddExtendedElement", "CMFCRibbonStatusBar [MFC], AddSeparator", "CMFCRibbonStatusBar [MFC], Create", "CMFCRibbonStatusBar [MFC], CreateEx", "CMFCRibbonStatusBar [MFC], FindByID", "CMFCRibbonStatusBar [MFC], FindElement", "CMFCRibbonStatusBar [MFC], GetCount", "CMFCRibbonStatusBar [MFC], GetElement", "CMFCRibbonStatusBar [MFC], GetExCount", "CMFCRibbonStatusBar [MFC], GetExElement", "CMFCRibbonStatusBar [MFC], GetExtendedArea", "CMFCRibbonStatusBar [MFC], GetSpace", "CMFCRibbonStatusBar [MFC], IsBottomFrame", "CMFCRibbonStatusBar [MFC], IsExtendedElement", "CMFCRibbonStatusBar [MFC], IsInformationMode", "CMFCRibbonStatusBar [MFC], RecalcLayout", "CMFCRibbonStatusBar [MFC], RemoveAll", "CMFCRibbonStatusBar [MFC], RemoveElement", "CMFCRibbonStatusBar [MFC], SetInformation", "CMFCRibbonStatusBar [MFC], OnDrawInformation"]
ms.assetid: 921eb57f-3b40-49fa-a38c-3f2fb6dc2893
---
# CMFCRibbonStatusBar Class

The `CMFCRibbonStatusBar` class implements a status bar control that can display ribbon elements.

## Syntax

```
class CMFCRibbonStatusBar : public CMFCRibbonBar
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonStatusBar::AddDynamicElement](#adddynamicelement)|Adds a dynamic element to the ribbon status bar.|
|[CMFCRibbonStatusBar::AddElement](#addelement)|Adds a new ribbon element to the ribbon status bar.|
|[CMFCRibbonStatusBar::AddExtendedElement](#addextendedelement)|Adds a ribbon element to the extended area of the ribbon status bar.|
|[CMFCRibbonStatusBar::AddSeparator](#addseparator)|Adds a separator to the ribbon status bar.|
|[CMFCRibbonStatusBar::Create](#create)|Creates a ribbon status bar.|
|[CMFCRibbonStatusBar::CreateEx](#createex)|Creates a ribbon status bar with an extended style.|
|[CMFCRibbonStatusBar::FindByID](#findbyid)||
|[CMFCRibbonStatusBar::FindElement](#findelement)|Returns a pointer to the element that has the specified command ID.|
|[CMFCRibbonStatusBar::GetCount](#getcount)|Returns the number of elements that are located in the main area of the ribbon status bar.|
|[CMFCRibbonStatusBar::GetElement](#getelement)|Returns a pointer to the element that is located at a specified index.|
|[CMFCRibbonStatusBar::GetExCount](#getexcount)|Returns the number of elements that are located in the extended area of the ribbon status bar.|
|[CMFCRibbonStatusBar::GetExElement](#getexelement)|Returns a pointer to the element that is located at a specified index in the extended area of the ribbon status bar.|
|[CMFCRibbonStatusBar::GetExtendedArea](#getextendedarea)||
|[CMFCRibbonStatusBar::GetSpace](#getspace)||
|[CMFCRibbonStatusBar::IsBottomFrame](#isbottomframe)||
|[CMFCRibbonStatusBar::IsExtendedElement](#isextendedelement)||
|[CMFCRibbonStatusBar::IsInformationMode](#isinformationmode)|Determines whether information mode is enabled for the ribbon status bar.|
|[CMFCRibbonStatusBar::RecalcLayout](#recalclayout)|(Overrides [CMFCRibbonBar::RecalcLayout](../../mfc/reference/cmfcribbonbar-class.md#recalclayout).)|
|[CMFCRibbonStatusBar::RemoveAll](#removeall)|Removes all elements from the ribbon status bar.|
|[CMFCRibbonStatusBar::RemoveElement](#removeelement)|Removes the element that has a specified command ID from the ribbon status bar.|
|[CMFCRibbonStatusBar::SetInformation](#setinformation)|Enables or disables the information mode for the ribbon status bar.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonStatusBar::OnDrawInformation](#ondrawinformation)|Displays the information string that appears on the ribbon status bar when the information mode is enabled.|

## Remarks

Users can change the visibility of ribbon elements on a ribbon status bar by using the built-in context menu for the ribbon status bar. You can add or remove elements dynamically.

A ribbon status bar has two areas: a main area and an extended area. The extended area is displayed on the right side of the ribbon status bar and appears in a different color than the main area does.

Typically, the main area of the status bar displays status notifications, and the extended area displays view controls. The extended area remains visible as long as possible when the user resizes the ribbon status bar.

## Example

The following example demonstrates how to use various methods in the `CMFCRibbonStatusBar` class. The example shows how to add a new ribbon element to the ribbon status bar, add a ribbon element to the extended area of the ribbon status bar, add a separator, and enable the regular mode for the ribbon status bar.

[!code-cpp[NVC_MFC_RibbonApp#15](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_1.cpp)]
[!code-cpp[NVC_MFC_RibbonApp#16](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)

[CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)

## Requirements

**Header:** afxribbonstatusbar.h

## <a name="adddynamicelement"></a> CMFCRibbonStatusBar::AddDynamicElement

Adds a dynamic element to the ribbon status bar.

```cpp
void AddDynamicElement(CMFCRibbonBaseElement* pElement);
```

### Parameters

*pElement*<br/>
[in] A pointer to a dynamic element.

### Remarks

Unlike regular elements, dynamic elements are not customizable and the customize menu of the status bar does not display them.

## <a name="addelement"></a> CMFCRibbonStatusBar::AddElement

Adds a new ribbon element to the ribbon status bar.

```cpp
void AddElement(
    CMFCRibbonBaseElement* pElement,
    LPCTSTR lpszLabel,
    BOOL bIsVisible=TRUE);
```

### Parameters

*pElement*<br/>
[in] A pointer to the added element.

*lpszLabel*<br/>
[in] A text label of the element.

*bIsVisible*<br/>
[in] TRUE if you want to add the element as visible, FALSE if you want to add the element as hidden.

## <a name="addextendedelement"></a> CMFCRibbonStatusBar::AddExtendedElement

Adds a ribbon element to the extended area of the ribbon status bar.

```cpp
void AddExtendedElement(
    CMFCRibbonBaseElement* pElement,
    LPCTSTR lpszLabel,
    BOOL bIsVisible=TRUE);
```

### Parameters

*pElement*<br/>
[in] A pointer to the added element.

*lpszLabel*<br/>
[in] The text label of the element.

*bIsVisible*<br/>
[in] TRUE if you want to add the element as visible, FALSE if you want to add the element as hidden.

### Remarks

The extended area is on the right side of the status bar control.

## <a name="addseparator"></a> CMFCRibbonStatusBar::AddSeparator

Adds a separator to the ribbon status bar.

```cpp
void AddSeparator();
```

### Remarks

The framework adds a separator after the method [CMFCRibbonStatusBar::AddElement](#addelement). inserts the last element.

## <a name="create"></a> CMFCRibbonStatusBar::Create

Creates a ribbon status bar.

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,
    UINT nID=AFX_IDW_STATUS_BAR);
```

### Parameters

*pParentWnd*<br/>
[in] A pointer to the parent window.

*dwStyle*<br/>
[in] A logical OR combination of control styles.

*nID*<br/>
[in] The control ID of the status bar.

### Return Value

TRUE if the status bar is created successfully, FALSE otherwise.

## <a name="createex"></a> CMFCRibbonStatusBar::CreateEx

Creates a ribbon status bar that has an extended style.

```
BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle=0,
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,
    UINT nID=AFX_IDW_STATUS_BAR);
```

### Parameters

*pParentWnd*<br/>
A pointer to the parent window.

*dwCtrlStyle*<br/>
A logical OR combination of additional styles for creating the status bar object.

*dwStyle*<br/>
The control style of the status bar.

*nID*<br/>
The control ID of the status bar.

### Return Value

TRUE if the status bar is created successfully, FALSE otherwise.

## <a name="findbyid"></a> CMFCRibbonStatusBar::FindByID

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
CMFCRibbonBaseElement* FindByID(UINT uiCmdID, BOOL = TRUE);
```

### Parameters

[in] *uiCmdID*<br/>
[in] *BOOL*<br/>

### Return Value

### Remarks

## <a name="findelement"></a> CMFCRibbonStatusBar::FindElement

Returns a pointer to the element that has the specified command ID.

```
CMFCRibbonBaseElement* FindElement(UINT uiID);
```

### Parameters

*uiID*<br/>
[in] The ID of the element.

### Return Value

A pointer to the element that has the specified command ID. NULL if there is no such element.

## <a name="getcount"></a> CMFCRibbonStatusBar::GetCount

Returns the number of elements that are located in the main area of the ribbon status bar.

```
int GetCount() const;
```

### Return Value

The number of elements that are located in the main area of the ribbon status bar.

## <a name="getelement"></a> CMFCRibbonStatusBar::GetElement

Returns a pointer to the element that is located at a specified index.

```
CMFCRibbonBaseElement* GetElement(int nIndex);
```

### Parameters

*nIndex*<br/>
[in] Specifies a zero-based index of an element that is located in the main area of the status bar control.

### Return Value

A pointer to the element that is located at the specified index. NULL if the index is negative or exceeds the number of elements in the status bar.

### Remarks

## <a name="getexcount"></a> CMFCRibbonStatusBar::GetExCount

Returns the number of elements that are located in the extended area of the ribbon status bar.

```
int GetExCount() const;
```

### Return Value

The number of elements that are located in the extended area of the ribbon status bar.

## <a name="getexelement"></a> CMFCRibbonStatusBar::GetExElement

Returns a pointer to the element that is located at a specified index in the extended area of the ribbon status bar. The extended area is on the right side of the status bar control.

```
CMFCRibbonBaseElement* GetExElement(int nIndex);
```

### Parameters

*nIndex*<br/>
[in] Specifies the zero-based index of an element that is located in the extended area of the status bar control.

### Return Value

A pointer to the element that is located at a specified index in the extended area of the ribbon status bar. NULL if *nIndex* is negative or exceeds the number of elements in the extended area of the ribbon status bar.

### Remarks

## <a name="getextendedarea"></a> CMFCRibbonStatusBar::GetExtendedArea

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual BOOL GetExtendedArea(CRect& rect) const;
```

### Parameters

[in] *rect*<br/>

### Return Value

### Remarks

## <a name="getspace"></a> CMFCRibbonStatusBar::GetSpace

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
int GetSpace() const;
```

### Return Value

### Remarks

## <a name="isbottomframe"></a> CMFCRibbonStatusBar::IsBottomFrame

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
BOOL IsBottomFrame() const;
```

### Return Value

### Remarks

## <a name="isextendedelement"></a> CMFCRibbonStatusBar::IsExtendedElement

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
BOOL IsExtendedElement(CMFCRibbonBaseElement* pElement) const;
```

### Parameters

[in] *pElement*<br/>

### Return Value

### Remarks

## <a name="isinformationmode"></a> CMFCRibbonStatusBar::IsInformationMode

Determines whether information mode is enabled for the ribbon status bar.

```
BOOL IsInformationMode() const;
```

### Return Value

TRUE if the status bar can work in information mode; otherwise FALSE.

### Remarks

In information mode, the status bar hides all regular panes and displays a message string.

## <a name="ondrawinformation"></a> CMFCRibbonStatusBar::OnDrawInformation

Displays the string that appears on the ribbon status bar when the information mode is enabled.

```
virtual void OnDrawInformation(
    CDC* pDC,
    CString& strInfo,
    CRect rectInfo);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*strInfo*<br/>
[in] The information string.

*rectInfo*<br/>
[in] The bounding rectangle.

### Remarks

Override this method in a derived class if you want to customize the appearance of the information string on the status bar. Use the [CMFCRibbonStatusBar::SetInformation](#setinformation) method to put the status bar in information mode. In this mode, the status bar hides all panes and displays the information string specified by *strInfo*.

## <a name="recalclayout"></a> CMFCRibbonStatusBar::RecalcLayout

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual void RecalcLayout();
```

### Remarks

## <a name="removeall"></a> CMFCRibbonStatusBar::RemoveAll

Removes all elements from the ribbon status bar.

```cpp
void RemoveAll();
```

## <a name="removeelement"></a> CMFCRibbonStatusBar::RemoveElement

Removes the element that has a specified command ID from the ribbon status bar.

```
BOOL RemoveElement(UINT uiID);
```

### Parameters

*uiID*<br/>
[in] The ID of the element to remove from the status bar.

### Return Value

TRUE if an element with the specified *uiID* is removed. FALSE otherwise.

## <a name="setinformation"></a> CMFCRibbonStatusBar::SetInformation

Enables or disables the information mode for the ribbon status bar.

```cpp
void SetInformation(LPCTSTR lpszInfo);
```

### Parameters

*lpszInfo*<br/>
[in] The information string.

### Remarks

Use this method to put the status bar in the information mode. In this mode, the status bar hides all panes and displays the information string specified by *lpszInfo*.

When lpszInfo is NULL, the status bar reverts to regular mode.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)<br/>
[CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)<br/>
[CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)
