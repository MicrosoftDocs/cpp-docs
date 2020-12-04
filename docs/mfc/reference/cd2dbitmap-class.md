---
description: "Learn more about: CD2DBitmap Class"
title: "CD2DBitmap Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DBitmap", "AFXRENDERTARGET/CD2DBitmap", "AFXRENDERTARGET/CD2DBitmap::CD2DBitmap", "AFXRENDERTARGET/CD2DBitmap::Attach", "AFXRENDERTARGET/CD2DBitmap::CopyFromBitmap", "AFXRENDERTARGET/CD2DBitmap::CopyFromMemory", "AFXRENDERTARGET/CD2DBitmap::CopyFromRenderTarget", "AFXRENDERTARGET/CD2DBitmap::Create", "AFXRENDERTARGET/CD2DBitmap::Destroy", "AFXRENDERTARGET/CD2DBitmap::Detach", "AFXRENDERTARGET/CD2DBitmap::Get", "AFXRENDERTARGET/CD2DBitmap::GetDPI", "AFXRENDERTARGET/CD2DBitmap::GetPixelFormat", "AFXRENDERTARGET/CD2DBitmap::GetPixelSize", "AFXRENDERTARGET/CD2DBitmap::GetSize", "AFXRENDERTARGET/CD2DBitmap::IsValid", "AFXRENDERTARGET/CD2DBitmap::CommonInit", "AFXRENDERTARGET/CD2DBitmap::m_bAutoDestroyHBMP", "AFXRENDERTARGET/CD2DBitmap::m_hBmpSrc", "AFXRENDERTARGET/CD2DBitmap::m_lpszType", "AFXRENDERTARGET/CD2DBitmap::m_pBitmap", "AFXRENDERTARGET/CD2DBitmap::m_sizeDest", "AFXRENDERTARGET/CD2DBitmap::m_strPath", "AFXRENDERTARGET/CD2DBitmap::m_uiResID"]
helpviewer_keywords: ["CD2DBitmap [MFC], CD2DBitmap", "CD2DBitmap [MFC], CD2DBitmap", "CD2DBitmap [MFC], Attach", "CD2DBitmap [MFC], CopyFromBitmap", "CD2DBitmap [MFC], CopyFromMemory", "CD2DBitmap [MFC], CopyFromRenderTarget", "CD2DBitmap [MFC], Create", "CD2DBitmap [MFC], Destroy", "CD2DBitmap [MFC], Detach", "CD2DBitmap [MFC], Get", "CD2DBitmap [MFC], GetDPI", "CD2DBitmap [MFC], GetPixelFormat", "CD2DBitmap [MFC], GetPixelSize", "CD2DBitmap [MFC], GetSize", "CD2DBitmap [MFC], IsValid", "CD2DBitmap [MFC], CommonInit", "CD2DBitmap [MFC], m_bAutoDestroyHBMP", "CD2DBitmap [MFC], m_hBmpSrc", "CD2DBitmap [MFC], m_lpszType", "CD2DBitmap [MFC], m_pBitmap", "CD2DBitmap [MFC], m_sizeDest", "CD2DBitmap [MFC], m_strPath", "CD2DBitmap [MFC], m_uiResID"]
ms.assetid: 2b3686f1-812c-462b-b449-9f0cb6949bf6
---
# CD2DBitmap Class

A wrapper for ID2D1Bitmap.

## Syntax

```
class CD2DBitmap : public CD2DResource;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DBitmap::CD2DBitmap](#cd2dbitmap)|Overloaded. Constructs a CD2DBitmap object from HBITMAP.|
|[CD2DBitmap::~CD2DBitmap](#_dtorcd2dbitmap)|The destructor. Called when a D2D bitmap object is being destroyed.|

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CD2DBitmap::CD2DBitmap](#cd2dbitmap)|Overloaded. Constructs a CD2DBitmap object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DBitmap::Attach](#attach)|Attaches existing resource interface to the object|
|[CD2DBitmap::CopyFromBitmap](#copyfrombitmap)|Copies the specified region from the specified bitmap into the current bitmap|
|[CD2DBitmap::CopyFromMemory](#copyfrommemory)|Copies the specified region from memory into the current bitmap|
|[CD2DBitmap::CopyFromRenderTarget](#copyfromrendertarget)|Copies the specified region from the specified render target into the current bitmap|
|[CD2DBitmap::Create](#create)|Creates a CD2DBitmap. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DBitmap::Destroy](#destroy)|Destroys a CD2DBitmap object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DBitmap::Detach](#detach)|Detaches resource interface from the object|
|[CD2DBitmap::Get](#get)|Returns ID2D1Bitmap interface|
|[CD2DBitmap::GetDPI](#getdpi)|Return the dots per inch (DPI) of the bitmap|
|[CD2DBitmap::GetPixelFormat](#getpixelformat)|Retrieves the pixel format and alpha mode of the bitmap|
|[CD2DBitmap::GetPixelSize](#getpixelsize)|Returns the size, in device-dependent units (pixels), of the bitmap|
|[CD2DBitmap::GetSize](#getsize)|Returns the size, in device-independent pixels (DIPs), of the bitmap|
|[CD2DBitmap::IsValid](#isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CD2DBitmap::CommonInit](#commoninit)|Initializes the object|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DBitmap::operator ID2D1Bitmap*](#operator_id2d1bitmap_star)|Returns ID2D1Bitmap interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DBitmap::m_bAutoDestroyHBMP](#m_bautodestroyhbmp)|TRUE if m_hBmpSrc should be destroyed; otherwise FALSE.|
|[CD2DBitmap::m_hBmpSrc](#m_hbmpsrc)|Source bitmap handle.|
|[CD2DBitmap::m_lpszType](#m_lpsztype)|Resource type.|
|[CD2DBitmap::m_pBitmap](#m_pbitmap)|Stores a pointer to an ID2D1Bitmap object.|
|[CD2DBitmap::m_sizeDest](#m_sizedest)|Bitmap destination size.|
|[CD2DBitmap::m_strPath](#m_strpath)|Botmap file path.|
|[CD2DBitmap::m_uiResID](#m_uiresid)|Bitmap resource ID.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DBitmap`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dbitmap"></a> CD2DBitmap::~CD2DBitmap

The destructor. Called when a D2D bitmap object is being destroyed.

```
virtual ~CD2DBitmap();
```

## <a name="attach"></a> CD2DBitmap::Attach

Attaches existing resource interface to the object.

```cpp
void Attach(ID2D1Bitmap* pResource);
```

### Parameters

*pResource*<br/>
Existing resource interface. Cannot be NULL.

## <a name="cd2dbitmap"></a> CD2DBitmap::CD2DBitmap

Constructs a CD2DBitmap object from resource.

```
CD2DBitmap(
    CRenderTarget* pParentTarget,
    UINT uiResID,
    LPCTSTR lpszType = NULL,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    BOOL bAutoDestroy = TRUE);

CD2DBitmap(
    CRenderTarget* pParentTarget,
    LPCTSTR lpszPath,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    BOOL bAutoDestroy = TRUE);

CD2DBitmap(
    CRenderTarget* pParentTarget,
    HBITMAP hbmpSrc,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    BOOL bAutoDestroy = TRUE);

CD2DBitmap(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*uiResID*<br/>
The resource ID number of the resource.

*lpszType*<br/>
Pointer to a null-terminated string that contains the resource type.

*sizeDest*<br/>
Destination size of the bitmap.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

*lpszPath*<br/>
Pointer to a null-terminated string that contains the name of file.

*hbmpSrc*<br/>
Handle to the bitmap.

## <a name="commoninit"></a> CD2DBitmap::CommonInit

Initializes the object.

```cpp
void CommonInit();
```

## <a name="copyfrombitmap"></a> CD2DBitmap::CopyFromBitmap

Copies the specified region from the specified bitmap into the current bitmap.

```
HRESULT CopyFromBitmap(
    const CD2DBitmap* pBitmap,
    const CD2DPointU* destPoint = NULL,
    const CD2DRectU* srcRect = NULL);
```

### Parameters

*pBitmap*<br/>
The bitmap to copy from.

*destPoint*<br/>
In the current bitmap, the upper-left corner of the area to which the region specified by srcRect is copied.

*srcRect*<br/>
The area of bitmap to copy.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="copyfrommemory"></a> CD2DBitmap::CopyFromMemory

Copies the specified region from memory into the current bitmap.

```
HRESULT CopyFromMemory(
    const void* srcData,
    UINT32 pitch,
    const CD2DRectU* destRect = NULL);
```

### Parameters

*srcData*<br/>
The data to copy.

*pitch*<br/>
The stride, or pitch, of the source bitmap stored in srcData. The stride is the byte count of a scanline (one row of pixels in memory). The stride can be computed from the following formula: pixel width \* bytes per pixel + memory padding.

*destRect*<br/>
In the current bitmap, the upper-left corner of the area to which the region specified by srcRect is copied.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="copyfromrendertarget"></a> CD2DBitmap::CopyFromRenderTarget

Copies the specified region from the specified render target into the current bitmap.

```
HRESULT CopyFromRenderTarget(
    const CRenderTarget* pRenderTarget,
    const CD2DPointU* destPoint = NULL,
    const CD2DRectU* srcRect = NULL);
```

### Parameters

*pRenderTarget*<br/>
The render target that contains the region to copy.

*destPoint*<br/>
In the current bitmap, the upper-left corner of the area to which the region specified by srcRect is copied.

*srcRect*<br/>
The area of renderTarget to copy.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="create"></a> CD2DBitmap::Create

Creates a CD2DBitmap.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
A pointer to the render target.

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DBitmap::Destroy

Destroys a CD2DBitmap object.

```
virtual void Destroy();
```

## <a name="detach"></a> CD2DBitmap::Detach

Detaches resource interface from the object.

```
ID2D1Bitmap* Detach();
```

### Return Value

Pointer to detached resource interface.

## <a name="get"></a> CD2DBitmap::Get

Returns ID2D1Bitmap interface.

```
ID2D1Bitmap* Get();
```

### Return Value

Pointer to an ID2D1Bitmap interface or NULL if object is not initialized yet.

## <a name="getdpi"></a> CD2DBitmap::GetDPI

Return the dots per inch (DPI) of the bitmap.

```
CD2DSizeF GetDPI() const;
```

### Return Value

The horizontal and vertical DPI of the bitmap.

## <a name="getpixelformat"></a> CD2DBitmap::GetPixelFormat

Retrieves the pixel format and alpha mode of the bitmap

```
D2D1_PIXEL_FORMAT GetPixelFormat() const;
```

### Return Value

The pixel format and alpha mode of the bitmap.

## <a name="getpixelsize"></a> CD2DBitmap::GetPixelSize

Returns the size, in device-dependent units (pixels), of the bitmap.

```
CD2DSizeU GetPixelSize() const;
```

### Return Value

The size, in pixels, of the bitmap..

## <a name="getsize"></a> CD2DBitmap::GetSize

Returns the size, in device-independent pixels (DIPs), of the bitmap.

```
CD2DSizeF GetSize() const;
```

### Return Value

The size, in DIPs, of the bitmap.

## <a name="isvalid"></a> CD2DBitmap::IsValid

Checks resource validity.

```
virtual BOOL IsValid() const;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_bautodestroyhbmp"></a> CD2DBitmap::m_bAutoDestroyHBMP

TRUE if m_hBmpSrc should be destroyed; otherwise FALSE.

```
BOOL m_bAutoDestroyHBMP;
```

## <a name="m_hbmpsrc"></a> CD2DBitmap::m_hBmpSrc

Source bitmap handle.

```
HBITMAP m_hBmpSrc;
```

## <a name="m_lpsztype"></a> CD2DBitmap::m_lpszType

Resource type.

```
LPCTSTR m_lpszType;
```

## <a name="m_pbitmap"></a> CD2DBitmap::m_pBitmap

Stores a pointer to an ID2D1Bitmap object.

```
ID2D1Bitmap* m_pBitmap;
```

## <a name="m_sizedest"></a> CD2DBitmap::m_sizeDest

Bitmap destination size.

```
CD2DSizeU m_sizeDest;
```

## <a name="m_strpath"></a> CD2DBitmap::m_strPath

Botmap file path.

```
CString m_strPath;
```

## <a name="m_uiresid"></a> CD2DBitmap::m_uiResID

Bitmap resource ID.

```
UINT m_uiResID;
```

## <a name="operator_id2d1bitmap_star"></a> CD2DBitmap::operator ID2D1Bitmap*

Returns ID2D1Bitmap interface

```
operator ID2D1Bitmap*();
```

### Return Value

Pointer to an ID2D1Bitmap interface or NULL if object is not initialized yet.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
