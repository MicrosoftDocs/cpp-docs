---
description: "Learn more about: CD2DBrushProperties Class"
title: "CD2DBrushProperties Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DBrushProperties", "AFXRENDERTARGET/CD2DBrushProperties", "AFXRENDERTARGET/CD2DBrushProperties::CD2DBrushProperties", "AFXRENDERTARGET/CD2DBrushProperties::CommonInit"]
helpviewer_keywords: ["CD2DBrushProperties [MFC], CD2DBrushProperties", "CD2DBrushProperties [MFC], CommonInit"]
---
# CD2DBrushProperties Class

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

A wrapper for `D2D1_BRUSH_PROPERTIES`.

## Syntax

```
class CD2DBrushProperties : public D2D1_BRUSH_PROPERTIES;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DBrushProperties::CD2DBrushProperties](#cd2dbrushproperties)|Overloaded. Creates a `CD2D_BRUSH_PROPERTIES` structure|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CD2DBrushProperties::CommonInit](#commoninit)|Initializes the object|

## Inheritance Hierarchy

`D2D1_BRUSH_PROPERTIES`

`CD2DBrushProperties`

## Requirements

**Header:** afxrendertarget.h

## <a name="cd2dbrushproperties"></a> CD2DBrushProperties::CD2DBrushProperties

Creates a CD2D_BRUSH_PROPERTIES structure

```
CD2DBrushProperties();
CD2DBrushProperties(FLOAT _opacity);

CD2DBrushProperties(
    D2D1_MATRIX_3X2_F _transform,
    FLOAT _opacity = 1.);
```

### Parameters

*_opacity*<br/>
The base opacity of the brush. The default value is 1.0.

*_transform*<br/>
The transformation to apply to the brush

## <a name="commoninit"></a> CD2DBrushProperties::CommonInit

Initializes the object

```cpp
void CommonInit();
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
