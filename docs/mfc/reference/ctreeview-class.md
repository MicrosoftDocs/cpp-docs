---
description: "Learn more about: CTreeView Class"
title: "CTreeView Class"
ms.date: "11/04/2016"
f1_keywords: ["CTreeView", "AFXCVIEW/CTreeView", "AFXCVIEW/CTreeView::CTreeView", "AFXCVIEW/CTreeView::GetTreeCtrl"]
helpviewer_keywords: ["CTreeView [MFC], CTreeView", "CTreeView [MFC], GetTreeCtrl"]
ms.assetid: 5df583a6-d69f-42ca-9d8d-57e04558afff
---
# CTreeView Class

Simplifies use of the tree control and of [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), the class that encapsulates tree-control functionality, with MFC's document-view architecture.

## Syntax

```
class CTreeView : public CCtrlView
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CTreeView::CTreeView](#ctreeview)|Constructs a `CTreeView` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CTreeView::GetTreeCtrl](#gettreectrl)|Returns the tree control associated with the view.|

## Remarks

For more information on this architecture, see the overview for the [CView](../../mfc/reference/cview-class.md) class and the cross-references cited there.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CTreeView`

## Requirements

**Header:** afxcview.h

## <a name="ctreeview"></a> CTreeView::CTreeView

Constructs a `CTreeView` object.

```
CTreeView();
```

## <a name="gettreectrl"></a> CTreeView::GetTreeCtrl

Returns a reference to the tree control associated with the view.

```
CTreeCtrl& GetTreeCtrl() const;
```

## See also

[CCtrlView Class](../../mfc/reference/cctrlview-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)<br/>
[CCtrlView Class](../../mfc/reference/cctrlview-class.md)<br/>
[CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)
