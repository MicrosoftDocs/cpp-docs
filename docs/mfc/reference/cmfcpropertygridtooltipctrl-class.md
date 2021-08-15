---
description: "Learn more about: CMFCPropertyGridToolTipCtrl Class"
title: "CMFCPropertyGridToolTipCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCPropertyGridToolTipCtrl", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Create", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Deactivate", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::GetLastRect", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Hide", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::SetTextMargin", "AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Track"]
helpviewer_keywords: ["CMFCPropertyGridToolTipCtrl [MFC], CMFCPropertyGridToolTipCtrl", "CMFCPropertyGridToolTipCtrl [MFC], Create", "CMFCPropertyGridToolTipCtrl [MFC], Deactivate", "CMFCPropertyGridToolTipCtrl [MFC], GetLastRect", "CMFCPropertyGridToolTipCtrl [MFC], Hide", "CMFCPropertyGridToolTipCtrl [MFC], SetTextMargin", "CMFCPropertyGridToolTipCtrl [MFC], Track"]
ms.assetid: 84b436e5-6695-4da0-9569-1a875e087711
---
# CMFCPropertyGridToolTipCtrl Class

Implements a tooltip control that the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md) uses to display tooltips.

## Syntax

```
class CMFCPropertyGridToolTipCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|[CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl](#cmfcpropertygridtooltipctrl)|Constructs a `CMFCPropertyGridToolTipCtrl` object.|
|`CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCPropertyGridToolTipCtrl::Create](#create)|Creates a window for the tooltip control.|
|[CMFCPropertyGridToolTipCtrl::Deactivate](#deactivate)|Deactivates and hides the tooltip control.|
|[CMFCPropertyGridToolTipCtrl::GetLastRect](#getlastrect)|Returns the coordinates of the last position of the tooltip control.|
|[CMFCPropertyGridToolTipCtrl::Hide](#hide)|Hides the tooltip control.|
|`CMFCPropertyGridToolTipCtrl::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|
|[CMFCPropertyGridToolTipCtrl::SetTextMargin](#settextmargin)|Sets the spacing between the tooltip text and the border of the tooltip window.|
|[CMFCPropertyGridToolTipCtrl::Track](#track)|Displays the tooltip control.|

## Remarks

Tooltips are displayed when the pointer rests on a property name. The [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md) class displays a tooltip so that it is easily readable by the user. Usually, the position of a tooltip is determined by the position of the pointer. By using this class, the tooltip appears over the property name and resembles the natural property extension, so that the property name is fully visible.

MFC automatically creates this control and uses it in the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).

## Example

The following example demonstrates how to construct an object of the `CMFCPropertyGridToolTipCtrl` class, and how to display the tooltip control.

[!code-cpp[NVC_MFC_RibbonApp#23](../../mfc/reference/codesnippet/cpp/cmfcpropertygridtooltipctrl-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md)

## Requirements

**Header:** afxpropertygridtooltipctrl.h

## <a name="cmfcpropertygridtooltipctrl"></a> CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl

Constructs a `CMFCPropertyGridToolTipCtrl` object.

```
CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl();
```

## <a name="create"></a> CMFCPropertyGridToolTipCtrl::Create

Creates a window for the tooltip control.

```
BOOL Create(CWnd* pWndParent);
```

### Parameters

*pWndParent*<br/>
[in] A pointer to the parent window.

### Return Value

TRUE if the window was successfully created; otherwise, FALSE.

## <a name="deactivate"></a> CMFCPropertyGridToolTipCtrl::Deactivate

Deactivates and hides the tooltip control.

```cpp
void Deactivate();
```

### Remarks

This method sets the last position and text to empty values, so that future calls to [CMFCPropertyGridToolTipCtrl::Track](#track) display the tooltip.

## <a name="getlastrect"></a> CMFCPropertyGridToolTipCtrl::GetLastRect

Returns the coordinates of the last position of the tooltip control.

```cpp
void GetLastRect(CRect& rect) const;
```

### Parameters

*rect*<br/>
[out] Contains the last position of the tooltip control.

## <a name="hide"></a> CMFCPropertyGridToolTipCtrl::Hide

Hides the tooltip control.

```cpp
void Hide();
```

## <a name="settextmargin"></a> CMFCPropertyGridToolTipCtrl::SetTextMargin

Sets the spacing between the tooltip text and the border of the tooltip window.

```cpp
void SetTextMargin(int nTextMargin);
```

### Parameters

*nTextMargin*<br/>
[in] Specifies the spacing between the tooltip control text and the border of the tooltip window. The default value is 10 pixels.

## <a name="track"></a> CMFCPropertyGridToolTipCtrl::Track

Displays the tooltip control.

```cpp
void Track(
    CRect rect,
    const CString& strText);
```

### Parameters

*rect*<br/>
[in] Specifies the position and size of the tooltip control.

*strText*<br/>
[in] Specifies the text to be shown in the tooltip.

### Remarks

This method displays the tooltip control at the position and size specified by *rect*. If the position, size, and text have not changed since the last time this method was called, this method has no effect.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
