---
description: "Learn more about: CMFCToolBarInfo Class"
title: "CMFCToolBarInfo Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolBarInfo", "AFXTOOLBAR/CMFCToolBarInfo", "AFXTOOLBAR/CMFCToolBarInfo::m_uiColdResID", "AFXTOOLBAR/CMFCToolBarInfo::m_uiDisabledResID", "AFXTOOLBAR/CMFCToolBarInfo::m_uiHotResID", "AFXTOOLBAR/CMFCToolBarInfo::m_uiLargeColdResID", "AFXTOOLBAR/CMFCToolBarInfo::m_uiLargeDisabledResID", "AFXTOOLBAR/CMFCToolBarInfo::m_uiLargeHotResID", "AFXTOOLBAR/CMFCToolBarInfo::m_uiMenuDisabledResID", "AFXTOOLBAR/CMFCToolBarInfo::m_uiMenuResID"]
helpviewer_keywords: ["CMFCToolBarInfo [MFC], m_uiColdResID", "CMFCToolBarInfo [MFC], m_uiDisabledResID", "CMFCToolBarInfo [MFC], m_uiHotResID", "CMFCToolBarInfo [MFC], m_uiLargeColdResID", "CMFCToolBarInfo [MFC], m_uiLargeDisabledResID", "CMFCToolBarInfo [MFC], m_uiLargeHotResID", "CMFCToolBarInfo [MFC], m_uiMenuDisabledResID", "CMFCToolBarInfo [MFC], m_uiMenuResID"]
ms.assetid: 6dc84482-eaaa-491f-aa5d-dd7a57886b46
---
# CMFCToolBarInfo Class

Contains the resource IDs of toolbar images in various states. `CMFCToolBarInfo` is a helper class that is used as a parameter of the [CMFCToolBar::LoadToolBarEx](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) method.

## Syntax

```
class CMFCToolBarInfo
```

## Members

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCToolBarInfo::m_uiColdResID](#m_uicoldresid)|Resource ID of the toolbar bitmap that contains regular (cold) toolbar images.|
|[CMFCToolBarInfo::m_uiDisabledResID](#m_uidisabledresid)|Resource ID of the toolbar bitmap that contains disabled toolbar images.|
|[CMFCToolBarInfo::m_uiHotResID](#m_uihotresid)|Resource ID of the toolbar bitmap that contains selected (hot) toolbar images.|
|[CMFCToolBarInfo::m_uiLargeColdResID](#m_uilargecoldresid)|Resource ID of the toolbar bitmap that contains large, regular toolbar images.|
|[CMFCToolBarInfo::m_uiLargeDisabledResID](#m_uilargedisabledresid)|Resource ID of the toolbar bitmap that contains large, disabled toolbar images.|
|[CMFCToolBarInfo::m_uiLargeHotResID](#m_uilargehotresid)|Resource ID of the toolbar bitmap that contains large, selected toolbar images.|
|[CMFCToolBarInfo::m_uiMenuDisabledResID](#m_uimenudisabledresid)|Resource ID of the toolbar bitmap that contains disabled menu images.|
|[CMFCToolBarInfo::m_uiMenuResID](#m_uimenuresid)|Resource ID of the toolbar bitmap that contains menu images.|

## Remarks

A full toolbar bitmap consists of small toolbar images (buttons) of a fixed size. Each resource ID that is stored in a `CMFCToolBarInfo` object is a bitmap that contains a full set of toolbar images in a single state (for example, selected, disabled, large, or menu images).

## Inheritance Hierarchy

[CMFCToolBarInfo](../../mfc/reference/cmfctoolbarinfo-class.md)

## Requirements

**Header:** afxtoolbar.h

## <a name="m_uicoldresid"></a> CMFCToolBarInfo::m_uiColdResID

Specifies a resource ID for all the regular button images of a toolbar.

```
UINT m_uiColdResID;
```

## <a name="m_uidisabledresid"></a> CMFCToolBarInfo::m_uiDisabledResID

Specifies a resource ID for the button-unavailable images of a toolbar.

```
UINT m_uiDisabledResID;
```

## <a name="m_uihotresid"></a> CMFCToolBarInfo::m_uiHotResID

Specifies a resource ID for all the highlighted button images of a toolbar.

```
UINT m_uiHotResID
```

## <a name="m_uilargecoldresid"></a> CMFCToolBarInfo::m_uiLargeColdResID

Specifies a resource ID for all the large regular button images of a toolbar.

```
UINT m_uiLargeColdResID
```

## <a name="m_uilargedisabledresid"></a> CMFCToolBarInfo::m_uiLargeDisabledResID

Specifies a resource ID for all the large disabled button images of a toolbar.

```
UINT m_uiLargeDisabledResID;
```

## <a name="m_uilargehotresid"></a> CMFCToolBarInfo::m_uiLargeHotResID

Specifies a resource ID for all the large highlighted images of a toolbar.

```
UINT m_uiLargeHotResID;
```

## <a name="m_uimenudisabledresid"></a> CMFCToolBarInfo::m_uiMenuDisabledResID

Specifies a resource ID for the command-unavailable images of a toolbar.

```
UINT m_uiMenuDisabledResID;
```

## <a name="m_uimenuresid"></a> CMFCToolBarInfo::m_uiMenuResID

Specifies a resource ID for all the regular menu item images of a toolbar.

```
UINT m_uiMenuResID;
```

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)
