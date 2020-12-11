---
description: "Learn more about: CGdiObject Class"
title: "CGdiObject Class"
ms.date: "11/04/2016"
f1_keywords: ["CGdiObject", "AFXWIN/CGdiObject", "AFXWIN/CGdiObject::CGdiObject", "AFXWIN/CGdiObject::Attach", "AFXWIN/CGdiObject::CreateStockObject", "AFXWIN/CGdiObject::DeleteObject", "AFXWIN/CGdiObject::DeleteTempMap", "AFXWIN/CGdiObject::Detach", "AFXWIN/CGdiObject::FromHandle", "AFXWIN/CGdiObject::GetObject", "AFXWIN/CGdiObject::GetObjectType", "AFXWIN/CGdiObject::GetSafeHandle", "AFXWIN/CGdiObject::UnrealizeObject", "AFXWIN/CGdiObject::m_hObject"]
helpviewer_keywords: ["CGdiObject [MFC], CGdiObject", "CGdiObject [MFC], Attach", "CGdiObject [MFC], CreateStockObject", "CGdiObject [MFC], DeleteObject", "CGdiObject [MFC], DeleteTempMap", "CGdiObject [MFC], Detach", "CGdiObject [MFC], FromHandle", "CGdiObject [MFC], GetObject", "CGdiObject [MFC], GetObjectType", "CGdiObject [MFC], GetSafeHandle", "CGdiObject [MFC], UnrealizeObject", "CGdiObject [MFC], m_hObject"]
ms.assetid: 1cba3ba5-3d49-4e43-8293-209299f2f6f4
---
# CGdiObject Class

Provides a base class for various kinds of Windows graphics device interface (GDI) objects such as bitmaps, regions, brushes, pens, palettes, and fonts.

## Syntax

```
class CGdiObject : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CGdiObject::CGdiObject](#cgdiobject)|Constructs a `CGdiObject` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CGdiObject::Attach](#attach)|Attaches a Windows GDI object to a `CGdiObject` object.|
|[CGdiObject::CreateStockObject](#createstockobject)|Retrieves a handle to one of the Windows predefined stock pens, brushes, or fonts.|
|[CGdiObject::DeleteObject](#deleteobject)|Deletes the Windows GDI object attached to the `CGdiObject` object from memory by freeing all system storage associated with the object.|
|[CGdiObject::DeleteTempMap](#deletetempmap)|Deletes any temporary `CGdiObject` objects created by `FromHandle`.|
|[CGdiObject::Detach](#detach)|Detaches a Windows GDI object from a `CGdiObject` object and returns a handle to the Windows GDI object.|
|[CGdiObject::FromHandle](#fromhandle)|Returns a pointer to a `CGdiObject` object given a handle to a Windows GDI object.|
|[CGdiObject::GetObject](#getobject)|Fills a buffer with data that describes the Windows GDI object attached to the `CGdiObject` object.|
|[CGdiObject::GetObjectType](#getobjecttype)|Retrieves the type of the GDI object.|
|[CGdiObject::GetSafeHandle](#getsafehandle)|Returns `m_hObject` unless **`this`** is NULL, in which case NULL is returned.|
|[CGdiObject::UnrealizeObject](#unrealizeobject)|Resets the origin of a brush or resets a logical palette.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CGdiObject::operator !=](#operator_neq)|Determines if two GDI objects are logically not equal.|
|[CGdiObject::operator ==](#operator_eq_eq)|Determines if two GDI objects are logically equal.|
|[CGdiObject::operator HGDIOBJ](#operator_hgdiobj)|Retrieves a HANDLE to the attached Windows GDI object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CGdiObject::m_hObject](#m_hobject)|A HANDLE containing the HBITMAP, HPALETTE, HRGN, HBRUSH, HPEN, or HFONT attached to this object.|

## Remarks

You never create a `CGdiObject` directly. Rather, you create an object from one of its derived classes, such as `CPen` or `CBrush`.

For more information on `CGdiObject`, see [Graphic Objects](../../mfc/graphic-objects.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CGdiObject`

## Requirements

**Header:** afxwin.h

## <a name="attach"></a> CGdiObject::Attach

Attaches a Windows GDI object to a `CGdiObject` object.

```
BOOL Attach(HGDIOBJ hObject);
```

### Parameters

*hObject*<br/>
A HANDLE to a Windows GDI object (for example, HPEN or HBRUSH).

### Return Value

Nonzero if attachment is successful; otherwise 0.

## <a name="cgdiobject"></a> CGdiObject::CGdiObject

Constructs a `CGdiObject` object.

```
CGdiObject();
```

### Remarks

You never create a `CGdiObject` directly. Rather, you create an object from one of its derived classes, such as `CPen` or `Cbrush`.

## <a name="createstockobject"></a> CGdiObject::CreateStockObject

Retrieves a handle to one of the predefined stock Windows GDI pens, brushes, or fonts, and attaches the GDI object to the `CGdiObject` object.

```
BOOL CreateStockObject(int nIndex);
```

### Parameters

*nIndex*<br/>
A constant specifying the type of stock object desired. See the parameter *fnObject* for [GetStockObject](/windows/win32/api/wingdi/nf-wingdi-getstockobject) in the Windows SDK for a description of appropriate values.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

Call this function with one of the derived classes that corresponds to the Windows GDI object type, such as `CPen` for a stock pen.

## <a name="deleteobject"></a> CGdiObject::DeleteObject

Deletes the attached Windows GDI object from memory by freeing all system storage associated with the Windows GDI object.

```
BOOL DeleteObject();
```

### Return Value

Nonzero if the GDI object was successfully deleted; otherwise 0.

### Remarks

The storage associated with the `CGdiObject` object is not affected by this call. An application should not call `DeleteObject` on a `CGdiObject` object that is currently selected into a device context.

When a pattern brush is deleted, the bitmap associated with the brush is not deleted. The bitmap must be deleted independently.

## <a name="deletetempmap"></a> CGdiObject::DeleteTempMap

Called automatically by the `CWinApp` idle-time handler, `DeleteTempMap` deletes any temporary `CGdiObject` objects created by `FromHandle`.

```
static void PASCAL DeleteTempMap();
```

### Remarks

`DeleteTempMap` detaches the Windows GDI object attached to a temporary `CGdiObject` object before deleting the `CGdiObject` object.

### Example

[!code-cpp[NVC_MFCDocView#175](../../mfc/codesnippet/cpp/cgdiobject-class_1.cpp)]

## <a name="detach"></a> CGdiObject::Detach

Detaches a Windows GDI object from a `CGdiObject` object and returns a handle to the Windows GDI object.

```
HGDIOBJ Detach();
```

### Return Value

A `HANDLE` to the Windows GDI object detached; otherwise NULL if no GDI object is attached.

## <a name="fromhandle"></a> CGdiObject::FromHandle

Returns a pointer to a `CGdiObject` object given a handle to a Windows GDI object.

```
static CGdiObject* PASCAL FromHandle(HGDIOBJ hObject);
```

### Parameters

*hObject*<br/>
A HANDLE to a Windows GDI object.

### Return Value

A pointer to a `CGdiObject` that may be temporary or permanent.

### Remarks

If a `CGdiObject` object is not already attached to the Windows GDI object, a temporary `CGdiObject` object is created and attached.

This temporary `CGdiObject` object is only valid until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. Another way of saying this is that the temporary object is only valid during the processing of one window message.

## <a name="getobject"></a> CGdiObject::GetObject

Fills a buffer with data that defines a specified object.

```
int GetObject(
    int nCount,
    LPVOID lpObject) const;
```

### Parameters

*nCount*<br/>
Specifies the number of bytes to copy into the *lpObject* buffer.

*lpObject*<br/>
Points to a user-supplied buffer that is to receive the information.

### Return Value

The number of bytes retrieved; otherwise 0 if an error occurs.

### Remarks

The function retrieves a data structure whose type depends on the type of graphic object, as shown by the following list:

|Object|Buffer type|
|------------|-----------------|
|`CPen`|[LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen)|
|`CBrush`|[LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush)|
|`CFont`|[LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw)|
|`CBitmap`|[BITMAP](/windows/win32/api/wingdi/ns-wingdi-bitmap)|
|`CPalette`|WORD|
|`CRgn`|Not supported|

If the object is a `CBitmap` object, `GetObject` returns only the width, height, and color format information of the bitmap. The actual bits can be retrieved by using [CBitmap::GetBitmapBits](../../mfc/reference/cbitmap-class.md#getbitmapbits).

If the object is a `CPalette` object, `GetObject` retrieves a WORD that specifies the number of entries in the palette. The function does not retrieve the [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) structure that defines the palette. An application can get information on palette entries by calling [CPalette::GetPaletteEntries](../../mfc/reference/cpalette-class.md#getpaletteentries).

## <a name="getobjecttype"></a> CGdiObject::GetObjectType

Retrieves the type of the GDI object.

```
UINT GetObjectType() const;
```

### Return Value

The type of the object, if successful; otherwise 0. The value can be one of the following:

- OBJ_BITMAP Bitmap

- OBJ_BRUSH Brush

- OBJ_FONT Font

- OBJ_PAL Palette

- OBJ_PEN Pen

- OBJ_EXTPEN Extended pen

- OBJ_REGION Region

- OBJ_DC Device context

- OBJ_MEMDC Memory device context

- OBJ_METAFILE Metafile

- OBJ_METADC Metafile device context

- OBJ_ENHMETAFILE Enhanced metafile

- OBJ_ENHMETADC Enhanced-metafile device context

## <a name="getsafehandle"></a> CGdiObject::GetSafeHandle

Returns `m_hObject` unless **`this`** is NULL, in which case NULL is returned.

```
HGDIOBJ GetSafeHandle() const;
```

### Return Value

A HANDLE to the attached Windows GDI object; otherwise NULL if no object is attached.

### Remarks

This is part of the general handle interface paradigm and is useful when NULL is a valid or special value for a handle.

### Example

  See the example for [CWnd::IsWindowEnabled](../../mfc/reference/cwnd-class.md#iswindowenabled).

## <a name="m_hobject"></a> CGdiObject::m_hObject

A HANDLE containing the HBITMAP, HRGN, HBRUSH, HPEN, HPALETTE, or HFONT attached to this object.

```
HGDIOBJ m_hObject;
```

## <a name="operator_neq"></a> CGdiObject::operator !=

Determines if two GDI objects are logically not equal.

```
BOOL operator!=(const CGdiObject& obj) const;
```

### Parameters

*obj*<br/>
A pointer to an existing `CGdiObject`.

### Remarks

Determines if a GDI object on the left side is not equal to a GDI object on the right side.

## <a name="operator_eq_eq"></a> CGdiObject::operator ==

Determines if two GDI objects are logically equal.

```
BOOL operator==(const CGdiObject& obj) const;
```

### Parameters

*obj*<br/>
A reference to an existing `CGdiObject`.

### Remarks

Determines if a GDI object on the left side is equal to a GDI object on the right side.

## <a name="operator_hgdiobj"></a> CGdiObject::operator HGDIOBJ

Retrieves a HANDLE to the attached Windows GDI object; otherwise NULL if no object is attached.

```
operator HGDIOBJ() const;
```

## <a name="unrealizeobject"></a> CGdiObject::UnrealizeObject

Resets the origin of a brush or resets a logical palette.

```
BOOL UnrealizeObject();
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

While `UnrealizeObject` is a member function of the `CGdiObject` class, it should be invoked only on `CBrush` or `CPalette` objects.

For `CBrush` objects, `UnrealizeObject` directs the system to reset the origin of the given brush the next time it is selected into a device context. If the object is a `CPalette` object, `UnrealizeObject` directs the system to realize the palette as though it had not previously been realized. The next time the application calls the [CDC::RealizePalette](../../mfc/reference/cdc-class.md#realizepalette) function for the specified palette, the system completely remaps the logical palette to the system palette.

The `UnrealizeObject` function should not be used with stock objects. The `UnrealizeObject` function must be called whenever a new brush origin is set (by means of the [CDC::SetBrushOrg](../../mfc/reference/cdc-class.md#setbrushorg) function). The `UnrealizeObject` function must not be called for the currently selected brush or currently selected palette of any display context.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CBitmap Class](../../mfc/reference/cbitmap-class.md)<br/>
[CBrush Class](../../mfc/reference/cbrush-class.md)<br/>
[CFont Class](../../mfc/reference/cfont-class.md)<br/>
[CPalette Class](../../mfc/reference/cpalette-class.md)<br/>
[CPen Class](../../mfc/reference/cpen-class.md)<br/>
[CRgn Class](../../mfc/reference/crgn-class.md)
