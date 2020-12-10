---
description: "Learn more about: CSplitterWndEx Class"
title: "CSplitterWndEx Class"
ms.date: "11/04/2016"
f1_keywords: ["CSplitterWndEx", "AFXSPLITTERWNDEX/CSplitterWndEx", "AFXSPLITTERWNDEX/CSplitterWndEx::OnDrawSplitter"]
helpviewer_keywords: ["CSplitterWndEx [MFC], OnDrawSplitter"]
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
---
# CSplitterWndEx Class

Represents a customized splitter window.

## Syntax

```
class CSplitterWndEx : public CSplitterWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CSplitterWndEx::CSplitterWndEx`|Default constructor.|
|`CSplitterWndEx::~CSplitterWndEx`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSplitterWndEx::OnDrawSplitter](#ondrawsplitter)|Called by the framework to draw a splitter window. (Overrides [CSplitterWnd::OnDrawSplitter](csplitterwnd-class.md#ondrawsplitter).)|

## Remarks

Override the `OnDrawSplitter` method to customize the appearance of the graphical components of a splitter window.

The `CSplitterWndEx` class is used together with the [OnDrawSplitterBorder](cmfcvisualmanager-class.md#ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#ondrawsplitterbox), and [OnFillSplitterBackground](cmfcvisualmanager-class.md#onfillsplitterbackground) methods, which are implemented by a visual manager. To cause a visual manager to draw a splitter window in your application, replace declarations of the `CSplitterWnd` class with the `CSplitterWndEx` class. For frame window applications, the splitter window class is declared in the CMainFrame class that is located in mainfrm.h. For an example, see the `OutlookDemo` sample in the Samples directory.

## Inheritance Hierarchy

[CObject](cobject-class.md)

[CCmdTarget](ccmdtarget-class.md)

[CWnd](cwnd-class.md)

[CSplitterWnd](csplitterwnd-class.md)

## Requirements

**Header:** afxsplitterwndex.h

## <a name="ondrawsplitter"></a> CSplitterWndEx::OnDrawSplitter

Called by the framework to draw a splitter window.

```
virtual void OnDrawSplitter(
   CDC* pDC,
   ESplitType nType,
   const CRect& rect
);
```

### Parameters

*pDC*<br/>
[in] Pointer to the device context. If this parameter is NULL, the framework redraws the active window.

*nType*<br/>
[in] One of the `CSplitterWnd::ESplitType` enumeration values that specifies the splitter window element to draw. Valid values are `splitBox`, `splitBar`, `splitIntersection`, and `splitBorder`.

*rect*<br/>
[in] A bounding rectangle that specifies the dimensions and location to draw the specified splitter window element.

### Remarks

## See also

[Hierarchy Chart](../hierarchy-chart.md)<br/>
[Classes](mfc-classes.md)<br/>
[CSplitterWnd Class](csplitterwnd-class.md)<br/>
[CMFCVisualManager Class](cmfcvisualmanager-class.md)
