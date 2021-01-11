---
description: "Learn more about: CMFCDragFrameImpl Class"
title: "CMFCDragFrameImpl Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCDragFrameImpl"]
helpviewer_keywords: ["CMFCDragFrameImpl class [MFC]"]
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
---
# CMFCDragFrameImpl Class

The `CMFCDragFrameImpl` class draws the drag rectangle that appears when the user drags a pane in the standard dock mode.
   For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCDragFrameImpl
```

## Remarks

An object of this class is embedded in each [CPane Class](../../mfc/reference/cpane-class.md) object. Thus, each pane that uses the `CanFloat` method displays a drag rectangle when the user drags it.

You can control the thickness of the drag rectangle by using [AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](afx-global-data-structure.md#m_ndragframethicknessfloat) and [AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](afx-global-data-structure.md#m_ndragframethicknessdock).

## Inheritance Hierarchy

[CMFCDragFrameImpl](../../mfc/reference/cmfcdragframeimpl-class.md)

## Requirements

**Header:** afxdragframeimpl.h

## <a name="enddrawdragframe"></a> CMFCDragFrameImpl::EndDrawDragFrame

```cpp
void EndDrawDragFrame(BOOL bClearInternalRects = TRUE);
```

### Parameters

[in] *bClearInternalRects*<br/>

### Remarks

## <a name="init"></a> CMFCDragFrameImpl::Init

```cpp
void Init(CWnd* pDraggedWnd);
```

### Parameters

[in] *pDraggedWnd*<br/>

### Remarks

## <a name="movedragframe"></a> CMFCDragFrameImpl::MoveDragFrame

```cpp
void MoveDragFrame(BOOL bForceMove = FALSE);
```

### Parameters

[in] *bForceMove*<br/>

### Remarks

## <a name="placetabpredocking"></a> CMFCDragFrameImpl::PlaceTabPreDocking

```cpp
void PlaceTabPreDocking(
    CBaseTabbedPane* pTabbedBar,
    BOOL bFirstTime);

void PlaceTabPreDocking(CWnd* pCBarToPlaceOn);
```

### Parameters

[in] *pTabbedBar*<br/>

[in] *bFirstTime*<br/>

[in] *pCBarToPlaceOn*<br/>

### Remarks

## <a name="removetabpredocking"></a> CMFCDragFrameImpl::RemoveTabPreDocking

```cpp
void RemoveTabPreDocking(CDockablePane* pOldTargetBar = NULL);
```

### Parameters

[in] *pOldTargetBar*<br/>

### Remarks

## <a name="resetstate"></a> CMFCDragFrameImpl::ResetState

```cpp
void ResetState();
```

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)
