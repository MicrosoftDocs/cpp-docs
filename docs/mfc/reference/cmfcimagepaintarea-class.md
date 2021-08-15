---
description: "Learn more about: CMFCImagePaintArea Class"
title: "CMFCImagePaintArea Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCImagePaintArea", "AFXIMAGEPAINTAREA/CMFCImagePaintArea", "AFXIMAGEPAINTAREA/CMFCImagePaintArea::CMFCImagePaintArea", "AFXIMAGEPAINTAREA/CMFCImagePaintArea::GetMode", "AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetBitmap", "AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetColor", "AFXIMAGEPAINTAREA/CMFCImagePaintArea::SetMode"]
helpviewer_keywords: ["CMFCImagePaintArea [MFC], CMFCImagePaintArea", "CMFCImagePaintArea [MFC], GetMode", "CMFCImagePaintArea [MFC], SetBitmap", "CMFCImagePaintArea [MFC], SetColor", "CMFCImagePaintArea [MFC], SetMode"]
ms.assetid: c59eec22-f15a-4e58-8c4d-4a18a41f4452
---
# CMFCImagePaintArea Class

Provides the picture area that you use to modify an image in an image editor dialog box.

## Syntax

```
class CMFCImagePaintArea : public CButton
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|[CMFCImagePaintArea::CMFCImagePaintArea](#cmfcimagepaintarea)|Constructs a `CMFCImagePaintArea` object.|
|`CMFCImagePaintArea::~CMFCImagePaintArea`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCImagePaintArea::GetMode](#getmode)|Retrieves the current drawing mode.|
|[CMFCImagePaintArea::SetBitmap](#setbitmap)|Sets the bitmap image for the picture area.|
|[CMFCImagePaintArea::SetColor](#setcolor)|Sets the current drawing color.|
|[CMFCImagePaintArea::SetMode](#setmode)|Sets the current drawing mode.|

### Remarks

This class is not intended to be used directly from your code.

The framework uses this class to display the picture area in an image editor dialog box. For more information about the image editor dialog box, see [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md).

## Example

The following example demonstrates how to construct an object of the `CMFCImagePaintArea` class, set the current drawing color, set the current drawing mode, and set the bitmap image for the picture area.

[!code-cpp[NVC_MFC_RibbonApp#37](../../mfc/reference/codesnippet/cpp/cmfcimagepaintarea-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)

## Requirements

**Header:** afximagepaintarea.h

## <a name="cmfcimagepaintarea"></a> CMFCImagePaintArea::CMFCImagePaintArea

Constructs a `CMFCImagePaintArea` object.

```
CMFCImagePaintArea(CMFCImageEditorDialog* pParentDlg);
```

### Parameters

*pParentDlg*\
[in] A pointer to the dialog box that is the parent of the image editor.

## <a name="getmode"></a> CMFCImagePaintArea::GetMode

Retrieves the current drawing mode.

```
IMAGE_EDIT_MODE GetMode() const;
```

### Return Value

An [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) value that specifies the current drawing mode.

## <a name="setbitmap"></a> CMFCImagePaintArea::SetBitmap

Sets the bitmap image for the picture area.

```cpp
void SetBitmap(CBitmap* pBitmap);
```

### Parameters

*pBitmap*\
[in] The new bitmap image to display.

### Remarks

If *pBitmap* is NULL, this method sets the size of the modifiable paint area to zero. Otherwise, it sets the size of the modifiable paint area to the size of the provided bitmap image.

## <a name="setcolor"></a> CMFCImagePaintArea::SetColor

Sets the current drawing color.

```cpp
void SetColor(COLORREF color);
```

### Parameters

*color*\
[in] The new drawing color.

### Remarks

When you select a color from the image editor palette bar or color picker, the framework calls this method to update the current drawing color. The initial drawing color is black (a COLORREF value of 0).

The drawing color is used by the image editor dialog box for all drawing modes except for IMAGE_EDIT_MODE_COLOR. For more information about drawing modes, see [CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration](cmfcimagepaintarea-image-edit-mode-enumeration.md).

## <a name="setmode"></a> CMFCImagePaintArea::SetMode

Sets the current drawing mode.

```cpp
void SetMode(IMAGE_EDIT_MODE mode);
```

### Parameters

*mode*\
[in] An [IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md) value that specifies the current drawing mode.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md)
