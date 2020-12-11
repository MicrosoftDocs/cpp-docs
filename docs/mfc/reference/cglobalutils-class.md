---
description: "Learn more about: CGlobalUtils Class"
title: "CGlobalUtils Class"
ms.date: "10/18/2018"
f1_keywords: ["CGlobalUtils", "AFXGLOBALUTILS/CGlobalUtils", "AFXGLOBALUTILS/CGlobalUtils::AdjustRectToWorkArea", "AFXGLOBALUTILS/CGlobalUtils::CalcExpectedDockedRect", "AFXGLOBALUTILS/CGlobalUtils::CanBeAttached", "AFXGLOBALUTILS/CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd", "AFXGLOBALUTILS/CGlobalUtils::CheckAlignment", "AFXGLOBALUTILS/CGlobalUtils::CyFromString", "AFXGLOBALUTILS/CGlobalUtils::DecimalFromString", "AFXGLOBALUTILS/CGlobalUtils::FlipRect", "AFXGLOBALUTILS/CGlobalUtils::ForceAdjustLayout", "AFXGLOBALUTILS/CGlobalUtils::GetDockingManager", "AFXGLOBALUTILS/CGlobalUtils::GetOppositeAlignment", "AFXGLOBALUTILS/CGlobalUtils::GetPaneAndAlignFromPoint", "AFXGLOBALUTILS/CGlobalUtils::GetWndIcon", "AFXGLOBALUTILS/CGlobalUtils::SetNewParent", "AFXGLOBALUTILS/CGlobalUtils::StringFromCy", "AFXGLOBALUTILS/CGlobalUtils::StringFromDecimal"]
helpviewer_keywords: ["CGlobalUtils [MFC], AdjustRectToWorkArea", "CGlobalUtils [MFC], CalcExpectedDockedRect", "CGlobalUtils [MFC], CanBeAttached", "CGlobalUtils [MFC], CanPaneBeInFloatingMultiPaneFrameWnd", "CGlobalUtils [MFC], CheckAlignment", "CGlobalUtils [MFC], CyFromString", "CGlobalUtils [MFC], DecimalFromString", "CGlobalUtils [MFC], FlipRect", "CGlobalUtils [MFC], ForceAdjustLayout", "CGlobalUtils [MFC], GetDockingManager", "CGlobalUtils [MFC], GetOppositeAlignment", "CGlobalUtils [MFC], GetPaneAndAlignFromPoint", "CGlobalUtils [MFC], GetWndIcon", "CGlobalUtils [MFC], SetNewParent", "CGlobalUtils [MFC], StringFromCy", "CGlobalUtils [MFC], StringFromDecimal"]
ms.assetid: 2c5bd1a6-f80c-4e79-a476-b4ceebabfb2f
---
# CGlobalUtils Class

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CGlobalUtils
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CGlobalUtils::AdjustRectToWorkArea](#adjustrecttoworkarea)||
|[CGlobalUtils::CalcExpectedDockedRect](#calcexpecteddockedrect)||
|[CGlobalUtils::CanBeAttached](#canbeattached)||
|[CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd](#canpanebeinfloatingmultipaneframewnd)||
|[CGlobalUtils::CheckAlignment](#checkalignment)||
|[CGlobalUtils::CyFromString](#cyfromstring)||
|[CGlobalUtils::DecimalFromString](#decimalfromstring)||
|[CGlobalUtils::FlipRect](#fliprect)||
|[CGlobalUtils::ForceAdjustLayout](#forceadjustlayout)||
|[CGlobalUtils::GetDockingManager](#getdockingmanager)||
|[CGlobalUtils::GetOppositeAlignment](#getoppositealignment)||
|[CGlobalUtils::GetPaneAndAlignFromPoint](#getpaneandalignfrompoint)||
|[CGlobalUtils::GetWndIcon](#getwndicon)||
|[CGlobalUtils::SetNewParent](#setnewparent)||
|[CGlobalUtils::StringFromCy](#stringfromcy)||
|[CGlobalUtils::StringFromDecimal](#stringfromdecimal)||

## Remarks

## Inheritance Hierarchy

[CGlobalUtils](../../mfc/reference/cglobalutils-class.md)

## Requirements

**Header:** afxglobalutils.h

## <a name="adjustrecttoworkarea"></a> CGlobalUtils::AdjustRectToWorkArea

```cpp
void AdjustRectToworkArea(
    CRect& rect,
    CRect* pRectDelta = NULL);
```

### Parameters

[in, out] *rect*<br/>
[in] *pRectDelta*<br/>

### Remarks

## <a name="calcexpecteddockedrect"></a> CGlobalUtils::CalcExpectedDockedRect

```cpp
void CalcExpectedDockedRect(
    CPaneContainerManager& barContainerManager,
    CWnd* pWndTodock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### Parameters

[in] *barContainerManager*<br/>

[in] *pWndTodock*<br/>

[in] *ptMouse*<br/>

[out] *rectResult*<br/>

[out] *bDrawTab*<br/>

[out] *ppTargetBar*<br/>

### Remarks

## <a name="canbeattached"></a> CGlobalUtils::CanBeAttached

```
BOOL CanBeAttached(CWnd* pWnd) const;
```

### Parameters

[in] *pWnd*<br/>

### Return Value

### Remarks

## <a name="canpanebeinfloatingmultipaneframewnd"></a> CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd

```
BOOL CanPaneBeInFloatingMultiPaneFrameWnd(CWnd* pWnd) const;
```

### Parameters

[in] *pWnd*<br/>

### Return Value

### Remarks

## <a name="checkalignment"></a> CGlobalUtils::CheckAlignment

```
BOOL CheckAlignment(
    CPoint point,
    CBasePane* pBar,
    int nSensitivity,
    const CDockingManager* pDockManager,
    BOOL bOuterEdge,
    DWORD& dwAlignment,
    DWORD dwEnabledDockBars = CBRS_ALIGN_ANY,
    LPCRECT lpRectBounds = NULL) const;
```

### Parameters

[in] *point*<br/>

[in] *pBar*<br/>

[in] *nSensitivity*<br/>

[in] *pDockManager*<br/>

[in] *bOuterEdge*<br/>

[out] *dwAlignment*<br/>

[in] *dwEnabledDockBars*<br/>

[in] *lpRectBounds*<br/>

### Return Value

### Remarks

## <a name="cyfromstring"></a> CGlobalUtils::CyFromString

```
BOOL CyFromString(
    CY& cy,
    LPCTSTR psz);
```

### Parameters

[out] *cy*<br/>

[in] *psz*<br/>

### Return Value

### Remarks

## <a name="decimalfromstring"></a> CGlobalUtils::DecimalFromString

```
BOOL DecimalFromString(
    DECIMAL& decimal,
    LPCTSTR psz);
```

### Parameters

[out] *decimal*<br/>

[in] *psz*<br/>

### Return Value

### Remarks

## <a name="fliprect"></a> CGlobalUtils::FlipRect

```cpp
void FlipRect(
    CRect& rect,
    int nDegrees);
```

### Parameters

[in, out] *rect*<br/>
[in] *nDegrees*<br/>

### Remarks

## <a name="forceadjustlayout"></a> CGlobalUtils::ForceAdjustLayout

```cpp
void ForceAdjustLayout(
    CDockingManager* pDockManager,
    BOOL bForce = FALSE,
    BOOL bForceInvisible = FALSE);
```

### Parameters

[in, out] *pDockManager*<br/>

[in] *bForce*<br/>

[in] *bForceInvisible*<br/>

### Remarks

## <a name="getdockingmanager"></a> CGlobalUtils::GetDockingManager

```
CDockingManager* GetDockingManager(CWnd* pWnd);
```

### Parameters

[in] *pWnd*<br/>

### Return Value

### Remarks

## <a name="getoppositealignment"></a> CGlobalUtils::GetOppositeAlignment

```
DWORD GetOppositeAlignment(DWORD dwAlign);
```

### Parameters

[in] *dwAlign*<br/>

### Return Value

### Remarks

## <a name="getpaneandalignfrompoint"></a> CGlobalUtils::GetPaneAndAlignFromPoint

```
BOOL GetPaneAndAlignFromPoint(
    CPaneContainerManager& barContainerManager,
    CPoint pt,
    CDockablePane** ppTargetControlBar,
    DWORD& dwAlignment,
    BOOL& bTabArea,
    BOOL& bCaption);
```

### Parameters

[in] *barContainerManager*<br/>

[in] *pt*<br/>

[out] *ppTargetControlBar*<br/>

[out] *dwAlignment*<br/>

[out] *bTabArea*<br/>

[out] *bCaption*<br/>

### Return Value

### Remarks

## <a name="getwndicon"></a> CGlobalUtils::GetWndIcon

```
HICON GetWndIcon(CWnd* pWnd);
```

### Parameters

[in] *pWnd*<br/>

### Return Value

### Remarks

## <a name="setnewparent"></a> CGlobalUtils::SetNewParent

```cpp
void SetNewParent(
    CObList& lstControlBars,
    CWnd* pNewParent,
    BOOL bCheckVisibility = TRUE);
```

### Parameters

[in] *lstControlBars*<br/>

[in] *pNewParent*<br/>

[in] *bCheckVisibility*<br/>

### Remarks

## <a name="stringfromcy"></a> CGlobalUtils::StringFromCy

```
BOOL StringFromCy(
    CString& str,
    CY& cy);
```

### Parameters

[out] *str*<br/>

[in] *cy*<br/>

### Return Value

### Remarks

## <a name="stringfromdecimal"></a> CGlobalUtils::StringFromDecimal

```
BOOL StringFromDecimal(
    CString& str,
    DECIMAL& decimal);
```

### Parameters

[out] *str*<br/>

[in] *decimal*<br/>

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
