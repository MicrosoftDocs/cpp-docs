---
description: "Learn more about: CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration"
title: "CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration"
ms.date: "11/04/2016"
f1_keywords: ["IMAGE_EDIT_MODE Enumeration"]
helpviewer_keywords: ["IMAGE_EDIT_MODE Enumeration method [MFC]"]
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
---
# CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration

Specifies a drawing mode that you use to modify an image in an image editor dialog box.

## Syntax

```
enum IMAGE_EDIT_MODE
{
    IMAGE_EDIT_MODE_PEN = 0,
    IMAGE_EDIT_MODE_FILL,
    IMAGE_EDIT_MODE_LINE,
    IMAGE_EDIT_MODE_RECT,
    IMAGE_EDIT_MODE_ELLIPSE,
    IMAGE_EDIT_MODE_COLOR
};
```

## Members

|Name|Description|
|-|-|
|IMAGE_EDIT_MODE_PEN|Used to draw individual pixels.|
|IMAGE_EDIT_MODE_FILL|Used to fill all adjacent areas that contain the color at the current cursor location.|
|IMAGE_EDIT_MODE_LINE|Used to draw a line.|
|IMAGE_EDIT_MODE_RECT|Used to draw a rectangle.|
|IMAGE_EDIT_MODE_ELLIPSE|Used to draw an ellipse.|
|IMAGE_EDIT_MODE_COLOR|Used to set the current color to the color at the current cursor location.|

### Remarks

The `CMFCImagePaintArea` and `CMFCImageEditorDialog` classes use this enumeration to set the current drawing mode. The drawing mode and current color are used to modify the picture area in an image editor dialog box. For more information about `CMFCImagePaintArea` and `CMFCImageEditorDialog`, see [CMFCImagePaintArea Class](../../mfc/reference/cmfcimagepaintarea-class.md) and [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md).

When you select a color from an image by using the IMAGE_EDIT_MODE_COLOR drawing mode, the framework sets the current drawing mode to IMAGE_EDIT_MODE_PEN.

## Requirements

**Header:** afximagepaintarea.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCImagePaintArea Class](../../mfc/reference/cmfcimagepaintarea-class.md)<br/>
[CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md)
