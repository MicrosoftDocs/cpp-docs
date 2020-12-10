---
description: "Learn more about: CRecentDockSiteInfo Class"
title: "CRecentDockSiteInfo Class"
ms.date: "11/04/2016"
f1_keywords: ["CRecentDockSiteInfo", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::CleanUp", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDefaultPaneDivider", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedPercent", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedRect", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentListOfPanes", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentPaneContainer", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentTabContainer", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::Init", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::IsRecentLeftPane", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SaveListOfRecentPanes", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SetInfo", "AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::StoreDockInfo"]
helpviewer_keywords: ["CRecentDockSiteInfo [MFC], CleanUp", "CRecentDockSiteInfo [MFC], GetRecentDefaultPaneDivider", "CRecentDockSiteInfo [MFC], GetRecentDockedPercent", "CRecentDockSiteInfo [MFC], GetRecentDockedRect", "CRecentDockSiteInfo [MFC], GetRecentListOfPanes", "CRecentDockSiteInfo [MFC], GetRecentPaneContainer", "CRecentDockSiteInfo [MFC], GetRecentTabContainer", "CRecentDockSiteInfo [MFC], Init", "CRecentDockSiteInfo [MFC], IsRecentLeftPane", "CRecentDockSiteInfo [MFC], SaveListOfRecentPanes", "CRecentDockSiteInfo [MFC], SetInfo", "CRecentDockSiteInfo [MFC], StoreDockInfo"]
ms.assetid: 2dd14f95-d5a2-4461-a7a5-2c6c36a3a165
---
# CRecentDockSiteInfo Class

The `CRecentDockSiteInfo` class is a helper class that stores recent state information for the [CPane Class](../../mfc/reference/cpane-class.md).

## Syntax

```
class CRecentDockSiteInfo : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CRecentDockSiteInfo::CRecentDockSiteInfo`|Default constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRecentDockSiteInfo::CleanUp](#cleanup)||
|[CRecentDockSiteInfo::GetRecentDefaultPaneDivider](#getrecentdefaultpanedivider)||
|[CRecentDockSiteInfo::GetRecentDockedPercent](#getrecentdockedpercent)||
|[CRecentDockSiteInfo::GetRecentDockedRect](#getrecentdockedrect)||
|[CRecentDockSiteInfo::GetRecentListOfPanes](#getrecentlistofpanes)||
|[CRecentDockSiteInfo::GetRecentPaneContainer](#getrecentpanecontainer)||
|[CRecentDockSiteInfo::GetRecentTabContainer](#getrecenttabcontainer)||
|[CRecentDockSiteInfo::Init](#init)||
|[CRecentDockSiteInfo::IsRecentLeftPane](#isrecentleftpane)||
|[CRecentDockSiteInfo::operator =](#operator_eq)||
|[CRecentDockSiteInfo::SaveListOfRecentPanes](#savelistofrecentpanes)||
|[CRecentDockSiteInfo::SetInfo](#setinfo)||
|[CRecentDockSiteInfo::StoreDockInfo](#storedockinfo)||

## Remarks

The `CRecentDockSiteInfo` class is a data management class. It tracks the last state of a `CPane` as it transitions between being docked and floating. When a user double clicks a floating dockable pane, it becomes docked. Double clicking the docked pane returns it to its previous location, size, and state. Similarly, when the pane is re-docked it returns to its previous docking location. This data class is what makes that possible. Since the members of this class store state information for the docked pane, they should not be directly modified by your application.

A `CRecentDockSiteInfo` object is created every time that a pane is created. Each `CPane` object has a member variable, [CPane::m_recentDockInfo](../../mfc/reference/cpane-class.md#m_recentdockinfo), to store this information.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CRecentDockSiteInfo](../../mfc/reference/crecentdocksiteinfo-class.md)

## Requirements

**Header:** afxrecentDockSiteInfo.h

## <a name="cleanup"></a> CRecentDockSiteInfo::CleanUp

```cpp
void CleanUp();
```

### Remarks

## <a name="crecentdocksiteinfo"></a> CRecentDockSiteInfo::CRecentDockSiteInfo

```
CRecentDockSiteInfo(CPane* pBar);
```

### Parameters

[in] *pBar*<br/>

### Remarks

## <a name="getrecentdefaultpanedivider"></a> CRecentDockSiteInfo::GetRecentDefaultPaneDivider

```
CPaneDivider* GetRecentDefaultPaneDivider();
```

### Return Value

### Remarks

## <a name="getrecentdockedpercent"></a> CRecentDockSiteInfo::GetRecentDockedPercent

```
int GetRecentDockedPercent(BOOL bForSlider);
```

### Parameters

[in] *bForSlider*<br/>

### Return Value

### Remarks

## <a name="getrecentdockedrect"></a> CRecentDockSiteInfo::GetRecentDockedRect

```
CRect& GetRecentDockedRect(BOOL bForSlider);
```

### Parameters

[in] *bForSlider*<br/>

### Return Value

### Remarks

## <a name="getrecentlistofpanes"></a> CRecentDockSiteInfo::GetRecentListOfPanes

```
CList<HWND, HWND>& GetRecentListOfPanes(BOOL bForSlider);
```

### Parameters

[in] *bForSlider*<br/>

### Return Value

### Remarks

## <a name="getrecentpanecontainer"></a> CRecentDockSiteInfo::GetRecentPaneContainer

```
CPaneContainer* GetRecentPaneContainer(BOOL bForSlider);
```

### Parameters

[in] *bForSlider*<br/>

### Return Value

### Remarks

## <a name="getrecenttabcontainer"></a> CRecentDockSiteInfo::GetRecentTabContainer

```
CPaneContainer* GetRecentTabContainer(BOOL bForSlider);
```

### Parameters

[in] *bForSlider*<br/>

### Return Value

### Remarks

## <a name="init"></a> CRecentDockSiteInfo::Init

```cpp
void Init();
```

### Remarks

## <a name="isrecentleftpane"></a> CRecentDockSiteInfo::IsRecentLeftPane

```
BOOL IsRecentLeftPane(BOOL bForSlider);
```

### Parameters

[in] *bForSlider*<br/>

### Return Value

### Remarks

## <a name="operator_eq"></a> CRecentDockSiteInfo::operator =

```
CRecentDockSiteInfo& operator=(CRecentDockSiteInfo& src);
```

### Parameters

[in] *src*<br/>

### Return Value

### Remarks

## <a name="savelistofrecentpanes"></a> CRecentDockSiteInfo::SaveListOfRecentPanes

```cpp
void SaveListOfRecentPanes(CList<HWND,
    HWND>& lstOrg,
    BOOL bForSlider);
```

### Parameters

[in] *CList<HWND*<br/>
[in] *lstOrg*<br/>
[in] *bForSlider*<br/>

### Remarks

## <a name="setinfo"></a> CRecentDockSiteInfo::SetInfo

```
virtual void SetInfo(
    BOOL bForSlider,
    CRecentDockSiteInfo& srcInfo);
```

### Parameters

[in] *bForSlider*<br/>
[in] *srcInfo*<br/>

### Remarks

## <a name="storedockinfo"></a> CRecentDockSiteInfo::StoreDockInfo

```
virtual void StoreDockInfo(
    CPaneContainer* pRecentContainer,
    CDockablePane* pTabbedBar = NULL);
```

### Parameters

[in] *pRecentContainer*<br/>
[in] *pTabbedBar*<br/>

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CDockSite Class](../../mfc/reference/cdocksite-class.md)
