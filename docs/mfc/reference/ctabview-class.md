---
description: "Learn more about: CTabView Class"
title: "CTabView Class"
ms.date: "11/04/2016"
f1_keywords: ["CTabView", "AFXTABVIEW/CTabView", "AFXTABVIEW/CTabView::AddView", "AFXTABVIEW/CTabView::FindTab", "AFXTABVIEW/CTabView::GetActiveView", "AFXTABVIEW/CTabView::GetTabControl", "AFXTABVIEW/CTabView::RemoveView", "AFXTABVIEW/CTabView::SetActiveView", "AFXTABVIEW/CTabView::IsScrollBar", "AFXTABVIEW/CTabView::OnActivateView"]
helpviewer_keywords: ["CTabView [MFC], AddView", "CTabView [MFC], FindTab", "CTabView [MFC], GetActiveView", "CTabView [MFC], GetTabControl", "CTabView [MFC], RemoveView", "CTabView [MFC], SetActiveView", "CTabView [MFC], IsScrollBar", "CTabView [MFC], OnActivateView"]
ms.assetid: 8e6ecd9d-d28d-432b-8ec8-0446f0204d52
---
# CTabView Class

The `CTabView` class simplifies the use of the tab control class ( [CMFCTabCtrl](../../mfc/reference/ctabview-class.md)) in applications that use MFC's document/view architecture.

## Syntax

```
class CTabbedView : public CView
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CTabView::AddView](#addview)|Adds a new view to the tab control.|
|[CTabView::FindTab](#findtab)|Returns the index of the specified view in the tab control.|
|[CTabView::GetActiveView](#getactiveview)|Returns a pointer to the currently active view|
|[CTabView::GetTabControl](#gettabcontrol)|Returns a reference to the tab control associated with the view.|
|[CTabView::RemoveView](#removeview)|Removes the view from the tab control.|
|[CTabView::SetActiveView](#setactiveview)|Makes a view active.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CTabView::IsScrollBar](#isscrollbar)|Called by the framework when creating a tab view to determine whether the tab view has a shared horizontal scroll bar.|
|[CTabView::OnActivateView](#onactivateview)|Called by the framework when the tab view is made active or inactive.|

## Remarks

This class makes it easy to put a tabbed view into a document/view application. `CTabView` is a `CView`-derived class that contains an embedded `CMFCTabCtrl` object. `CTabView` handles all messages required to support the `CMFCTabCtrl` object. Simply derive a class from `CTabView` and plug it into your application, then add `CView`-derived classes by using the `AddView` method. The tab control will display those views as tabs.

For example, you might have a document that can be represented in different ways: as a spreadsheet, a chart, an editable form, and so on. You can create individual views drawing the data as needed, insert them into your `CTabView`-derived object and have them tabbed without any additional coding.

[TabbedView Sample: MFC Tabbed View Application](../../overview/visual-cpp-samples.md) illustrates usage of `CTabView`.

## Example

The following example shows how `CTabView` is used in the TabbedView sample.

[!code-cpp[NVC_MFC_TabbedView#1](../../mfc/reference/codesnippet/cpp/ctabview-class_1.h)]

## Requirements

**Header:** afxTabView.h

## <a name="addview"></a> CTabView::AddView

Adds a view to the tab control.

```
int AddView(
    CRuntimeClass* pViewClass,
    const CString& strViewLabel,
    int iIndex=-1,
    CCreateContext* pContext=NULL);
```

### Parameters

*pViewClass*<br/>
[in] A pointer to a runtime class of the inserted view.

*strViewLabel*<br/>
[in] Specifies the tab's text.

*iIndex*<br/>
[in] Specifies the zero-based position at which to insert the view. If the position is -1 the new tab is inserted at the end.

*pContext*<br/>
[in] A pointer to the `CCreateContext` of the view.

### Return Value

A view index if this method succeeds. Otherwise, -1.

### Remarks

Call this function to add a view to the tab control that is embedded in a frame.

## <a name="findtab"></a> CTabView::FindTab

Returns the index of the specified view in the tab control.

```
int FindTab(HWND hWndView) const;
```

### Parameters

*hWndView*<br/>
[in] The handle of the view.

### Return Value

The index of the view if it is found; otherwise, -1.

### Remarks

Call this function to retrieve the index of a view that has a specified handle.

## <a name="getactiveview"></a> CTabView::GetActiveView

Returns a pointer to the currently active view.

```
CView* GetActiveView() const;
```

### Return Value

A valid pointer to the active view, or NULL if there is no active view.

### Remarks

## <a name="gettabcontrol"></a> CTabView::GetTabControl

Returns a reference to the tab control associated with the view.

```
DECLARE_DYNCREATE CMFCTabCtrl& GetTabControl();
```

### Return Value

A reference to the tab control associated with the view.

## <a name="isscrollbar"></a> CTabView::IsScrollBar

Called by the framework when creating a tab view to determine whether the tab view has a shared horizontal scroll bar.

```
virtual BOOL IsScrollBar() const;
```

### Return Value

TRUE if the tab view should be created together with a shared scroll bar. Otherwise, FALSE.

### Remarks

The framework calls this method when a *CTabView* object is being created.

Override the *IsScrollBar* method in a *CTabView*-derived class and return TRUE if you want to create a view that has a shared horizontal scroll bar.

## <a name="onactivateview"></a> CTabView::OnActivateView

Called by the framework when the tab view is made active or inactive.

```
virtual void OnActivateView(CView* view);
```

### Parameters

*view*<br/>
[in] A pointer to the view.

### Remarks

The default implementation does nothing. Override this method in a `CTabView`-derived class to process this notification.

## <a name="removeview"></a> CTabView::RemoveView

Removes the view from the tab control.

```
BOOL RemoveView(int iTabNum);
```

### Parameters

*iTabNum*<br/>
[in] The index of the view to remove.

### Return Value

The index of the removed view if this method succeeds. Otherwise -1.

### Remarks

## <a name="setactiveview"></a> CTabView::SetActiveView

Makes a view active.

```
BOOL SetActiveView(int iTabNum);
```

### Parameters

*iTabNum*<br/>
[in] The zero-based index of the tab view.

### Return Value

TRUE if the specified view was made active, FALSE if the view's index is invalid.

### Remarks

For more information see [CMFCTabCtrl::SetActiveTab](../../mfc/reference/cmfctabctrl-class.md#setactivetab).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCTabCtrl](../../mfc/reference/ctabview-class.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)
