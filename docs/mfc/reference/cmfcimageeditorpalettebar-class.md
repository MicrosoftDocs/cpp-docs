---
description: "Learn more about: CMFCImageEditorPaletteBar Class"
title: "CMFCImageEditorPaletteBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCImageEditorPaletteBar", "AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar", "AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::GetRowHeight", "AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable"]
helpviewer_keywords: ["CMFCImageEditorPaletteBar [MFC], GetRowHeight", "CMFCImageEditorPaletteBar [MFC], IsButtonExtraSizeAvailable"]
ms.assetid: 3fb7ba8e-f254-4d56-b913-9941b4ed8138
---
# CMFCImageEditorPaletteBar Class

Provides palette bar functionality to an image editor dialog box.

## Syntax

```
class CMFCImageEditorPaletteBar : public CMFCToolBar
```

## Members

### Public Methods

|Name|Description|
|-|-|
|[CMFCImageEditorPaletteBar::GetRowHeight](#getrowheight)|Returns the height of toolbar buttons. (Overrides [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|
|[CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determines whether the toolbar can display buttons that have extended borders. (Overrides [CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|

### Remarks

This class is not intended to be used directly from your code.

The framework uses this class to display a palette bar in an image editor dialog box. For more information about the image editor dialog box, see [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBa](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCImageEditorPaletteBar](../../mfc/reference/cmfcimageeditorpalettebar-class.md)

## Requirements

**Header:** afximageeditordialog.h

## <a name="getrowheight"></a> CMFCImageEditorPaletteBar::GetRowHeight

Returns the height of toolbar buttons.

```
virtual int GetRowHeight() const;
```

### Return Value

The height of each button on the toolbar.

## <a name="isbuttonextrasizeavailable"></a> CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable

Determines whether the toolbar can display buttons that have extended borders.

```
virtual BOOL IsButtonExtraSizeAvailable() const;
```

### Return Value

This method returns FALSE.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md)
