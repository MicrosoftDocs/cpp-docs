---
description: "Learn more about: CMFCSpinButtonCtrl Class"
title: "CMFCSpinButtonCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCSpinButtonCtrl", "AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl", "AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl::OnDraw"]
helpviewer_keywords: ["CMFCSpinButtonCtrl [MFC], OnDraw"]
ms.assetid: 8773f259-4d3f-4bca-a71c-09e0c71bc843
---
# CMFCSpinButtonCtrl Class

The `CMFCSpinButtonCtrl` class supports a visual manager that draws a spin button control.

## Syntax

```
class CMFCSpinButtonCtrl : public CSpinButtonCtrl
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCSpinButtonCtrl::CMFCSpinButtonCtrl`|Default constructor.|
|`CMFCSpinButtonCtrl::~CMFCSpinButtonCtrl`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCSpinButtonCtrl::OnDraw](#ondraw)|Repaints the current spin button control.|

## Remarks

To use a visual manager to draw a spin button control in your application, replace all instances of the `CSpinButtonCtrl` class with the `CMFCSpinButtonCtrl` class.

## Example

The following example demonstrates how to create an object of the `CMFCSpinButtonCtrl` class and use its `Create` method.

[!code-cpp[NVC_MFC_RibbonApp#25](../../mfc/reference/codesnippet/cpp/cmfcspinbuttonctrl-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md)

[CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md)

## Requirements

**Header:** afxspinbuttonctrl.h

## <a name="ondraw"></a> CMFCSpinButtonCtrl::OnDraw

Repaints the current spin button control.

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

### Remarks

The framework calls the `CMFCSpinButtonCtrl::OnPaint` method to handle the [CWnd::OnPaint](../../mfc/reference/cwnd-class.md#onpaint) message, and that method in turn calls this `CMFCSpinButtonCtrl::OnDraw` method. Override this method to customize the way the framework draws the spin button control.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)
