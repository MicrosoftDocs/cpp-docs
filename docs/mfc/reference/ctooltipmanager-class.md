---
description: "Learn more about: CTooltipManager Class"
title: "CTooltipManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CTooltipManager", "AFXTOOLTIPMANAGER/CTooltipManager", "AFXTOOLTIPMANAGER/CTooltipManager::CreateToolTip", "AFXTOOLTIPMANAGER/CTooltipManager::DeleteToolTip", "AFXTOOLTIPMANAGER/CTooltipManager::SetTooltipParams", "AFXTOOLTIPMANAGER/CTooltipManager::SetTooltipText", "AFXTOOLTIPMANAGER/CTooltipManager::UpdateTooltips"]
helpviewer_keywords: ["CTooltipManager [MFC], CreateToolTip", "CTooltipManager [MFC], DeleteToolTip", "CTooltipManager [MFC], SetTooltipParams", "CTooltipManager [MFC], SetTooltipText", "CTooltipManager [MFC], UpdateTooltips"]
ms.assetid: c71779d7-8b6e-47ef-8500-d4552731fe86
---
# CTooltipManager Class

Maintains runtime information about tooltips. The `CTooltipManager` class is instantiated one time per application.

## Syntax

```
class CTooltipManager : public CObject
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CTooltipManager::CreateToolTip](#createtooltip)|Creates a tooltip control for the specified Windows control type(s).|
|[CTooltipManager::DeleteToolTip](#deletetooltip)|Deletes a tooltip control.|
|[CTooltipManager::SetTooltipParams](#settooltipparams)|Customizes the visual appearance of the tooltip control for the specified Windows control type(s).|
|[CTooltipManager::SetTooltipText](#settooltiptext)|Sets the text and description for a tooltip control.|
|[CTooltipManager::UpdateTooltips](#updatetooltips)||

## Remarks

Use [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo`, and `CTooltipManager` together to implement customized tooltips in your application. For an example of how to use these tooltip classes, see the [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md) topic.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)

## Requirements

**Header:** afxtooltipmanager.h

## <a name="createtooltip"></a> CTooltipManager::CreateToolTip

Creates a tooltip control.

```
static BOOL CreateToolTip(
    CToolTipCtrl*& pToolTip,
    CWnd* pWndParent,
    UINT nType);
```

### Parameters

*pToolTip*<br/>
[out] A reference to a tooltip pointer. It is set to point to the newly created tooltip when the function returns.

*pWndParent*<br/>
[in] Parent of the tooltip.

*nType*<br/>
[in] Type of the tooltip.

### Return Value

Nonzero if a tooltip has been created successfully.

### Remarks

You must call [CTooltipManager::DeleteToolTip](#deletetooltip) to delete the tooltip control that is passed back in *pToolTip*.

The [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) sets the visual display parameters of each tooltip it creates based on the tooltip type that *nType* specifies. To change the parameters for one or more tooltip types, call [CTooltipManager::SetTooltipParams](#settooltipparams).

Valid tooltip types are listed in the following table:

|Tooltip type|Control category|Example types|
|------------------|----------------------|-------------------|
|AFX_TOOLTIP_TYPE_BUTTON|A button.|CMFCButton|
|AFX_TOOLTIP_TYPE_CAPTIONBAR|A caption bar.|CMFCCaptionBar|
|AFX_TOOLTIP_TYPE_DEFAULT|Any control that does not fit another category.|None.|
|AFX_TOOLTIP_TYPE_DOCKBAR|A dockable pane.|CDockablePane|
|AFX_TOOLTIP_TYPE_EDIT|A text box.|None.|
|AFX_TOOLTIP_TYPE_MINIFRAME|A miniframe.|CPaneFrameWnd|
|AFX_TOOLTIP_TYPE_PLANNER|A planner.|None.|
|AFX_TOOLTIP_TYPE_RIBBON|A ribbon bar.|CMFCRibbonBar, CMFCRibbonPanelMenuBar|
|AFX_TOOLTIP_TYPE_TAB|A tab control.|CMFCTabCtrl|
|AFX_TOOLTIP_TYPE_TOOLBAR|A toolbar.|CMFCToolBar, CMFCPopupMenuBar|
|AFX_TOOLTIP_TYPE_TOOLBOX|A toolbox.|None.|

## <a name="deletetooltip"></a> CTooltipManager::DeleteToolTip

Deletes a tooltip control.

```
static void DeleteToolTip(CToolTipCtrl*& pToolTip);
```

### Parameters

*pToolTip*<br/>
[in, out] A reference to a pointer to a tooltip to be destroyed.

### Remarks

Call this method for each [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md) that was created by [CTooltipManager::CreateToolTip](#createtooltip). The parent control should call this method from its `OnDestroy` handler. This is required to correctly remove the tooltip from the framework. This method sets *pToolTip* to NULL before it returns.

## <a name="settooltipparams"></a> CTooltipManager::SetTooltipParams

Customizes the appearance of the tooltip control for the specified Windows control types.

```cpp
void SetTooltipParams(
    UINT nTypes,
    CRuntimeClass* pRTC=RUNTIME_CLASS(CMFCToolTipCtrl),
    CMFCToolTipInfo* pParams=NULL);
```

### Parameters

*nTypes*<br/>
[in] Specifies control types.

*pRTC*<br/>
[in] Runtime class of custom tooltip.

*pParams*<br/>
[in] Tooltip parameters.

### Remarks

This method sets the runtime class and initial parameters that the [CToolTipManager](../../mfc/reference/ctooltipmanager-class.md) uses when it creates tooltips. When a control calls [CTooltipManager::CreateToolTip](#createtooltip) and passes in a tooltip type that is one of the types indicated by *nTypes*, the tooltip manager creates a tooltip control that is an instance of the runtime class specified by *pRTC* and passes the parameters specified by *pParams* to the new tooltip.

When you call this method, all existing tooltip owners receive the AFX_WM_UPDATETOOLTIPS message and they must re-create their tooltips by using [CTooltipManager::CreateToolTip](#createtooltip).

*nTypes* can be any combination of the valid tooltip types that [CTooltipManager::CreateToolTip](#createtooltip) uses, or it can be AFX_TOOLTIP_TYPE_ALL. If you pass AFX_TOOLTIP_TYPE_ALL, all tooltip types are affected.

### Example

The following example demonstrates how to use the `SetTooltipParams` method of the `CTooltipManager` class. This code snippet is part of the [Draw Client sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#11](../../mfc/reference/codesnippet/cpp/ctooltipmanager-class_1.cpp)]

## <a name="settooltiptext"></a> CTooltipManager::SetTooltipText

Sets the text and description for a tooltip.

```
static void SetTooltipText(
    TOOLINFO* pTI,
    CToolTipCtrl* pToolTip,
    UINT nType,
    const CString strText,
    LPCTSTR lpszDescr=NULL);
```

### Parameters

*pTI*<br/>
[in] A pointer to a TOOLINFO object.

*pToolTip*<br/>
[in, out] A pointer to the tooltip control for which to set the text and description.

*nType*<br/>
[in] Specifies the type of control with which this tooltip is associated.

*strText*<br/>
[in] The text to set as the tooltip text.

*lpszDescr*<br/>
[in] A pointer to the tooltip description. Can be NULL.

### Remarks

The value of *nType* must be the same value as the *nType* parameter of [CTooltipManager::CreateToolTip](#createtooltip) when you created the tooltip.

## <a name="updatetooltips"></a> CTooltipManager::UpdateTooltips

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```cpp
void UpdateTooltips();
```

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md)<br/>
[CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md)
