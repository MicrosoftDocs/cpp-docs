---
title: "CGlobalUtils Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CGlobalUtils", "AFXGLOBALUTILS/CGlobalUtils", "AFXGLOBALUTILS/CGlobalUtils::AdjustRectToWorkArea", "AFXGLOBALUTILS/CGlobalUtils::CalcExpectedDockedRect", "AFXGLOBALUTILS/CGlobalUtils::CanBeAttached", "AFXGLOBALUTILS/CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd", "AFXGLOBALUTILS/CGlobalUtils::CheckAlignment", "AFXGLOBALUTILS/CGlobalUtils::CyFromString", "AFXGLOBALUTILS/CGlobalUtils::DecimalFromString", "AFXGLOBALUTILS/CGlobalUtils::FlipRect", "AFXGLOBALUTILS/CGlobalUtils::ForceAdjustLayout", "AFXGLOBALUTILS/CGlobalUtils::GetDockingManager", "AFXGLOBALUTILS/CGlobalUtils::GetOppositeAlignment", "AFXGLOBALUTILS/CGlobalUtils::GetPaneAndAlignFromPoint", "AFXGLOBALUTILS/CGlobalUtils::GetWndIcon", "AFXGLOBALUTILS/CGlobalUtils::SetNewParent", "AFXGLOBALUTILS/CGlobalUtils::StringFromCy", "AFXGLOBALUTILS/CGlobalUtils::StringFromDecimal"]
dev_langs: ["C++"]
helpviewer_keywords: ["CGlobalUtils [MFC], AdjustRectToWorkArea", "CGlobalUtils [MFC], CalcExpectedDockedRect", "CGlobalUtils [MFC], CanBeAttached", "CGlobalUtils [MFC], CanPaneBeInFloatingMultiPaneFrameWnd", "CGlobalUtils [MFC], CheckAlignment", "CGlobalUtils [MFC], CyFromString", "CGlobalUtils [MFC], DecimalFromString", "CGlobalUtils [MFC], FlipRect", "CGlobalUtils [MFC], ForceAdjustLayout", "CGlobalUtils [MFC], GetDockingManager", "CGlobalUtils [MFC], GetOppositeAlignment", "CGlobalUtils [MFC], GetPaneAndAlignFromPoint", "CGlobalUtils [MFC], GetWndIcon", "CGlobalUtils [MFC], SetNewParent", "CGlobalUtils [MFC], StringFromCy", "CGlobalUtils [MFC], StringFromDecimal"]
ms.assetid: 2c5bd1a6-f80c-4e79-a476-b4ceebabfb2f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

##  <a name="adjustrecttoworkarea"></a>  CGlobalUtils::AdjustRectToWorkArea

```
void AdjustRectToworkArea(
    CRect& rect,
    CRect* pRectDelta = NULL);
```

### Parameters

*rect*<br/>
[in, out] [in] *pRectDelta*

### Remarks

##  <a name="calcexpecteddockedrect"></a>  CGlobalUtils::CalcExpectedDockedRect


```
void CalcExpectedDockedRect(
    CPaneContainerManager& barContainerManager,
    CWnd* pWndTodock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### Parameters

*barContainerManager*<br/>
[in] [in] *pWndTodock*
*ptMouse*<br/>
[in] [out] *rectResult*
*bDrawTab*<br/>
[out] [out] *ppTargetBar*

### Remarks

##  <a name="canbeattached"></a>  CGlobalUtils::CanBeAttached


```
BOOL CanBeAttached(CWnd* pWnd) const;
```

### Parameters

[in] *pWnd*

### Return Value

### Remarks

##  <a name="canpanebeinfloatingmultipaneframewnd"></a>  CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd


```
BOOL CanPaneBeInFloatingMultiPaneFrameWnd(CWnd* pWnd) const;
```

### Parameters

[in] *pWnd*

### Return Value

### Remarks

##  <a name="checkalignment"></a>  CGlobalUtils::CheckAlignment


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

*point*<br/>
[in] [in] *pBar*
*nSensitivity*<br/>
[in] [in] *pDockManager*
*bOuterEdge*<br/>
[in] [out] *dwAlignment*
*dwEnabledDockBars*<br/>
[in] [in] *lpRectBounds*

### Return Value

### Remarks

##  <a name="cyfromstring"></a>  CGlobalUtils::CyFromString


```
BOOL CyFromString(
    CY& cy,
    LPCTSTR psz);
```

### Parameters

*cy*<br/>
[out] [in] *psz*

### Return Value

### Remarks

##  <a name="decimalfromstring"></a>  CGlobalUtils::DecimalFromString


```
BOOL DecimalFromString(
    DECIMAL& decimal,
    LPCTSTR psz);
```

### Parameters

*decimal*<br/>
[out] [in] *psz*

### Return Value

### Remarks

##  <a name="fliprect"></a>  CGlobalUtils::FlipRect


```
void FlipRect(
    CRect& rect,
    int nDegrees);
```

### Parameters

*rect*<br/>
[in, out] [in] *nDegrees*

### Remarks

##  <a name="forceadjustlayout"></a>  CGlobalUtils::ForceAdjustLayout


```
void ForceAdjustLayout(
    CDockingManager* pDockManager,
    BOOL bForce = FALSE,
    BOOL bForceInvisible = FALSE);
```

### Parameters

*pDockManager*<br/>
[in, out] [in] *bForce*
[in] *bForceInvisible*

### Remarks

##  <a name="getdockingmanager"></a>  CGlobalUtils::GetDockingManager


```
CDockingManager* GetDockingManager(CWnd* pWnd);
```

### Parameters

[in] *pWnd*

### Return Value

### Remarks

##  <a name="getoppositealignment"></a>  CGlobalUtils::GetOppositeAlignment


```
DWORD GetOppositeAlignment(DWORD dwAlign);
```

### Parameters

[in] *dwAlign*

### Return Value

### Remarks

##  <a name="getpaneandalignfrompoint"></a>  CGlobalUtils::GetPaneAndAlignFromPoint


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

*barContainerManager*<br/>
[in] [in] *pt*
*ppTargetControlBar*<br/>
[out] [out] *dwAlignment*
*bTabArea*<br/>
[out] [out] *bCaption*

### Return Value

### Remarks

##  <a name="getwndicon"></a>  CGlobalUtils::GetWndIcon


```
HICON GetWndIcon(CWnd* pWnd);
```

### Parameters

[in] *pWnd*

### Return Value

### Remarks

##  <a name="setnewparent"></a>  CGlobalUtils::SetNewParent


```
void SetNewParent(
    CObList& lstControlBars,
    CWnd* pNewParent,
    BOOL bCheckVisibility = TRUE);
```

### Parameters

*lstControlBars*<br/>
[in] [in] *pNewParent*
[in] *bCheckVisibility*

### Remarks

##  <a name="stringfromcy"></a>  CGlobalUtils::StringFromCy


```
BOOL StringFromCy(
    CString& str,
    CY& cy);
```

### Parameters

*str*<br/>
[out] [in] *cy*

### Return Value

### Remarks

##  <a name="stringfromdecimal"></a>  CGlobalUtils::StringFromDecimal


```
BOOL StringFromDecimal(
    CString& str,
    DECIMAL& decimal);
```

### Parameters

*str*<br/>
[out] [in] *decimal*

### Return Value

### Remarks

## See Also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
