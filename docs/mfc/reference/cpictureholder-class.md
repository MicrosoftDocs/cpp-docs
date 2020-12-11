---
description: "Learn more about: CPictureHolder Class"
title: "CPictureHolder Class"
ms.date: "11/04/2016"
f1_keywords: ["CPictureHolder", "AFXCTL/CPictureHolder", "AFXCTL/CPictureHolder::CPictureHolder", "AFXCTL/CPictureHolder::CreateEmpty", "AFXCTL/CPictureHolder::CreateFromBitmap", "AFXCTL/CPictureHolder::CreateFromIcon", "AFXCTL/CPictureHolder::CreateFromMetafile", "AFXCTL/CPictureHolder::GetDisplayString", "AFXCTL/CPictureHolder::GetPictureDispatch", "AFXCTL/CPictureHolder::GetType", "AFXCTL/CPictureHolder::Render", "AFXCTL/CPictureHolder::SetPictureDispatch", "AFXCTL/CPictureHolder::m_pPict"]
helpviewer_keywords: ["CPictureHolder [MFC], CPictureHolder", "CPictureHolder [MFC], CreateEmpty", "CPictureHolder [MFC], CreateFromBitmap", "CPictureHolder [MFC], CreateFromIcon", "CPictureHolder [MFC], CreateFromMetafile", "CPictureHolder [MFC], GetDisplayString", "CPictureHolder [MFC], GetPictureDispatch", "CPictureHolder [MFC], GetType", "CPictureHolder [MFC], Render", "CPictureHolder [MFC], SetPictureDispatch", "CPictureHolder [MFC], m_pPict"]
ms.assetid: a4f59775-704a-41dd-b5bd-2e531c95127a
---
# CPictureHolder Class

Implements a Picture property, which allows the user to display a picture in your control.

## Syntax

```
class CPictureHolder
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPictureHolder::CPictureHolder](#cpictureholder)|Constructs a `CPictureHolder` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPictureHolder::CreateEmpty](#createempty)|Creates an empty `CPictureHolder` object.|
|[CPictureHolder::CreateFromBitmap](#createfrombitmap)|Creates a `CPictureHolder` object from a bitmap.|
|[CPictureHolder::CreateFromIcon](#createfromicon)|Creates a `CPictureHolder` object from an icon.|
|[CPictureHolder::CreateFromMetafile](#createfrommetafile)|Creates a `CPictureHolder` object from a metafile.|
|[CPictureHolder::GetDisplayString](#getdisplaystring)|Retrieves the string displayed in a control container's property browser.|
|[CPictureHolder::GetPictureDispatch](#getpicturedispatch)|Returns the `CPictureHolder` object's `IDispatch` interface.|
|[CPictureHolder::GetType](#gettype)|Tells whether the `CPictureHolder` object is a bitmap, a metafile, or an icon.|
|[CPictureHolder::Render](#render)|Renders the picture.|
|[CPictureHolder::SetPictureDispatch](#setpicturedispatch)|Sets the `CPictureHolder` object's `IDispatch` interface.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPictureHolder::m_pPict](#m_ppict)|A pointer to a picture object.|

## Remarks

`CPictureHolder` does not have a base class.

With the stock Picture property, the developer can specify a bitmap, icon, or metafile for display.

For information on creating custom picture properties, see the article [MFC ActiveX Controls: Using Pictures in an ActiveX Control](../../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md).

## Inheritance Hierarchy

`CPictureHolder`

## Requirements

**Header:** afxctl.h

## <a name="cpictureholder"></a> CPictureHolder::CPictureHolder

Constructs a `CPictureHolder` object.

```
CPictureHolder();
```

## <a name="createempty"></a> CPictureHolder::CreateEmpty

Creates an empty `CPictureHolder` object and connects it to an `IPicture` interface.

```
BOOL CreateEmpty();
```

### Return Value

Nonzero if the object is successfully created; otherwise 0.

## <a name="createfrombitmap"></a> CPictureHolder::CreateFromBitmap

Uses a bitmap to initialize the picture object in a `CPictureHolder`.

```
BOOL CreateFromBitmap(
    UINT idResource);

BOOL CreateFromBitmap(
    CBitmap* pBitmap,
    CPalette* pPal = NULL,
    BOOL bTransferOwnership = TRUE);

BOOL CreateFromBitmap(
    HBITMAP hbm,
    HPALETTE hpal = NULL,
    BOOL bTransferOwnership = FALSE);
```

### Parameters

*idResource*<br/>
Resource ID of a bitmap resource.

*pBitmap*<br/>
Pointer to a [CBitmap](../../mfc/reference/cbitmap-class.md) object.

*pPal*<br/>
Pointer to a [CPalette](../../mfc/reference/cpalette-class.md) object.

*bTransferOwnership*<br/>
Indicates whether the picture object will take ownership of the bitmap and palette objects.

*hbm*<br/>
Handle to the bitmap from which the `CPictureHolder` object is created.

*hpal*<br/>
Handle to the palette used for rendering the bitmap.

### Return Value

Nonzero if the object is successfully created; otherwise 0.

### Remarks

If *bTransferOwnership* is TRUE, the caller should not use the bitmap or palette object in any way after this call returns. If *bTransferOwnership* is FALSE, the caller is responsible for ensuring that the bitmap and palette objects remain valid for the lifetime of the picture object.

## <a name="createfromicon"></a> CPictureHolder::CreateFromIcon

Uses an icon to initialize the picture object in a `CPictureHolder`.

```
BOOL CreateFromIcon(
    UINT idResource);

BOOL CreateFromIcon(
    HICON hIcon,
    BOOL bTransferOwnership = FALSE);
```

### Parameters

*idResource*<br/>
Resource ID of a bitmap resource.

*hIcon*<br/>
Handle to the icon from which the `CPictureHolder` object is created.

*bTransferOwnership*<br/>
Indicates whether the picture object will take ownership of the icon object.

### Return Value

Nonzero if the object is successfully created; otherwise 0.

### Remarks

If *bTransferOwnership* is TRUE, the caller should not use the icon object in any way after this call returns. If *bTransferOwnership* is FALSE, the caller is responsible for ensuring that the icon object remains valid for the lifetime of the picture object.

## <a name="createfrommetafile"></a> CPictureHolder::CreateFromMetafile

Uses a metafile to initialize the picture object in a `CPictureHolder`.

```
BOOL CreateFromMetafile(
    HMETAFILE hmf,
    int xExt,
    int yExt,
    BOOL bTransferOwnership = FALSE);
```

### Parameters

*hmf*<br/>
Handle to the metafile used to create the `CPictureHolder` object.

*xExt*<br/>
X extent of the picture.

*yExt*<br/>
Y extent of the picture.

*bTransferOwnership*<br/>
Indicates whether the picture object will take ownership of the metafile object.

### Return Value

Nonzero if the object is successfully created; otherwise 0.

### Remarks

If *bTransferOwnership* is TRUE, the caller should not use the metafile object in any way after this call returns. If *bTransferOwnership* is FALSE, the caller is responsible for ensuring that the metafile object remains valid for the lifetime of the picture object.

## <a name="getdisplaystring"></a> CPictureHolder::GetDisplayString

Retrieves the string that is displayed in a container's property browser.

```
BOOL GetDisplayString(CString& strValue);
```

### Parameters

*strValue*<br/>
Reference to the [CString](../../atl-mfc-shared/reference/cstringt-class.md) that is to hold the display string.

### Return Value

Nonzero if the string is successfully retrieved; otherwise 0.

## <a name="getpicturedispatch"></a> CPictureHolder::GetPictureDispatch

This function returns a pointer to the `CPictureHolder` object's `IPictureDisp` interface.

```
LPPICTUREDISP GetPictureDispatch();
```

### Return Value

A pointer to the `CPictureHolder` object's `IPictureDisp` interface.

### Remarks

The caller must call `Release` on this pointer when finished with it.

## <a name="gettype"></a> CPictureHolder::GetType

Indicates whether the picture is a bitmap, metafile, or icon.

```
short GetType();
```

### Return Value

A value indicating the type of the picture. Possible values and their meanings are as follows:

|Value|Meaning|
|-----------|-------------|
|PICTYPE_UNINITIALIZED|`CPictureHolder` object is unititialized.|
|PICTYPE_NONE|`CPictureHolder` object is empty.|
|PICTYPE_BITMAP|Picture is a bitmap.|
|PICTYPE_METAFILE|Picture is a metafile.|
|PICTYPE_ICON|Picture is an icon.|

## <a name="m_ppict"></a> CPictureHolder::m_pPict

A pointer to the `CPictureHolder` object's `IPicture` interface.

```
LPPICTURE m_pPict;
```

## <a name="render"></a> CPictureHolder::Render

Renders the picture in the rectangle referenced by *rcRender*.

```cpp
void Render(
    CDC* pDC,
    const CRect& rcRender,
    const CRect& rcWBounds);
```

### Parameters

*pDC*<br/>
Pointer to the display context in which the picture is to be rendered.

*rcRender*<br/>
Rectangle in which the picture is to be rendered.

*rcWBounds*<br/>
A rectangle representing the bounding rectangle of the object rendering the picture. For a control, this rectangle is the *rcBounds* parameter passed to an override of [COleControl::OnDraw](../../mfc/reference/colecontrol-class.md#ondraw).

## <a name="setpicturedispatch"></a> CPictureHolder::SetPictureDispatch

Connects the `CPictureHolder` object to a `IPictureDisp` interface.

```cpp
void SetPictureDispatch(LPPICTUREDISP pDisp);
```

### Parameters

*pDisp*<br/>
Pointer to the new `IPictureDisp` interface.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFontHolder Class](../../mfc/reference/cfontholder-class.md)
