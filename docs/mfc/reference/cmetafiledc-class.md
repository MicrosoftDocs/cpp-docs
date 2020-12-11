---
description: "Learn more about: CMetaFileDC Class"
title: "CMetaFileDC Class"
ms.date: "11/04/2016"
f1_keywords: ["CMetaFileDC", "AFXEXT/CMetaFileDC", "AFXEXT/CMetaFileDC::CMetaFileDC", "AFXEXT/CMetaFileDC::Close", "AFXEXT/CMetaFileDC::CloseEnhanced", "AFXEXT/CMetaFileDC::Create", "AFXEXT/CMetaFileDC::CreateEnhanced"]
helpviewer_keywords: ["CMetaFileDC [MFC], CMetaFileDC", "CMetaFileDC [MFC], Close", "CMetaFileDC [MFC], CloseEnhanced", "CMetaFileDC [MFC], Create", "CMetaFileDC [MFC], CreateEnhanced"]
ms.assetid: ffce60fa-4181-4d46-9832-25e46fad4db4
---
# CMetaFileDC Class

Implements a Windows metafile, which contains a sequence of graphics device interface (GDI) commands that you can replay to create a desired image or text.

## Syntax

```
class CMetaFileDC : public CDC
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMetaFileDC::CMetaFileDC](#cmetafiledc)|Constructs a `CMetaFileDC` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMetaFileDC::Close](#close)|Closes the device context and creates a metafile handle.|
|[CMetaFileDC::CloseEnhanced](#closeenhanced)|Closes an enhanced-metafile device context and creates an enhanced-metafile handle.|
|[CMetaFileDC::Create](#create)|Creates the Windows metafile device context and attaches it to the `CMetaFileDC` object.|
|[CMetaFileDC::CreateEnhanced](#createenhanced)|Creates a metafile device context for an enhanced-format metafile.|

## Remarks

To implement a Windows metafile, first create a `CMetaFileDC` object. Invoke the `CMetaFileDC` constructor, then call the [Create](#create) member function, which creates a Windows metafile device context and attaches it to the `CMetaFileDC` object.

Next send the `CMetaFileDC` object the sequence of CDC GDI commands that you intend for it to replay. Only those GDI commands that create output, such as `MoveTo` and `LineTo`, can be used.

After you have sent the desired commands to the metafile, call the `Close` member function, which closes the metafile device contexts and returns a metafile handle. Then dispose of the `CMetaFileDC` object.

[CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) can then use the metafile handle to play the metafile repeatedly. The metafile can also be manipulated by Windows functions such as [CopyMetaFile](/windows/win32/api/wingdi/nf-wingdi-copymetafilew), which copies a metafile to disk.

When the metafile is no longer needed, delete it from memory with the [DeleteMetaFile](/windows/win32/api/wingdi/nf-wingdi-deletemetafile) Windows function.

You can also implement the `CMetaFileDC` object so that it can handle both output calls and attribute GDI calls such as `GetTextExtent`. Such a metafile is more flexible and can more easily reuse general GDI code, which often consists of a mix of output and attribute calls. The `CMetaFileDC` class inherits two device contexts, `m_hDC` and `m_hAttribDC`, from CDC. The `m_hDC` device context handles all [CDC](../../mfc/reference/cdc-class.md) GDI output calls and the `m_hAttribDC` device context handles all CDC GDI attribute calls. Normally, these two device contexts refer to the same device. In the case of `CMetaFileDC`, the attribute DC is set to NULL by default.

Create a second device context that points to the screen, a printer, or device other than a metafile, then call the `SetAttribDC` member function to associate the new device context with `m_hAttribDC`. GDI calls for information will now be directed to the new `m_hAttribDC`. Output GDI calls will go to `m_hDC`, which represents the metafile.

For more information on `CMetaFileDC`, see [Device Contexts](../../mfc/device-contexts.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CMetaFileDC`

## Requirements

**Header:** afxext.h

## <a name="close"></a> CMetaFileDC::Close

Closes the metafile device context and creates a Windows metafile handle that can be used to play the metafile by using the [CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) member function.

```
HMETAFILE Close();
```

### Return Value

A valid HMETAFILE if the function is successful; otherwise NULL.

### Remarks

The Windows metafile handle can also be used to manipulate the metafile with Windows functions such as [CopyMetaFile](/windows/win32/api/wingdi/nf-wingdi-copymetafilew).

Delete the metafile after use by calling the Windows [DeleteMetaFile](/windows/win32/api/wingdi/nf-wingdi-deletemetafile) function.

## <a name="closeenhanced"></a> CMetaFileDC::CloseEnhanced

Closes an enhanced-metafile device context and returns a handle that identifies an enhanced-format metafile.

```
HENHMETAFILE CloseEnhanced();
```

### Return Value

A handle of an enhanced metafile, if successful; otherwise NULL.

### Remarks

An application can use the enhanced-metafile handle returned by this function to perform the following tasks:

- Display a picture stored in an enhanced metafile

- Create copies of the enhanced metafile

- Enumerate, edit, or copy individual records in the enhanced metafile

- Retrieve an optional description of the metafile contents from the enhanced-metafile header

- Retrieve a copy of the enhanced-metafile header

- Retrieve a binary copy of the enhanced metafile

- Enumerate the colors in the optional palette

- Convert an enhanced-format metafile into a Windows-format metafile

When the application no longer needs the enhanced metafile handle, it should release the handle by calling the Win32 `DeleteEnhMetaFile` function.

## <a name="cmetafiledc"></a> CMetaFileDC::CMetaFileDC

Construct a `CMetaFileDC` object in two steps.

```
CMetaFileDC();
```

### Remarks

First, call `CMetaFileDC`, then call `Create`, which creates the Windows metafile device context and attaches it to the `CMetaFileDC` object.

## <a name="create"></a> CMetaFileDC::Create

Construct a `CMetaFileDC` object in two steps.

```
BOOL Create(LPCTSTR lpszFilename = NULL);
```

### Parameters

*lpszFilename*<br/>
Points to a null-terminated character string. Specifies the filename of the metafile to create. If *lpszFilename* is NULL, a new in-memory metafile is created.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

First, call the constructor `CMetaFileDC`, then call `Create`, which creates the Windows metafile device context and attaches it to the `CMetaFileDC` object.

## <a name="createenhanced"></a> CMetaFileDC::CreateEnhanced

Creates a device context for an enhanced-format metafile.

```
BOOL CreateEnhanced(
    CDC* pDCRef,
    LPCTSTR lpszFileName,
    LPCRECT lpBounds,
    LPCTSTR lpszDescription);
```

### Parameters

*pDCRef*<br/>
Identifies a reference device for the enhanced metafile.

*lpszFileName*<br/>
Points to a null-terminated character string. Specifies the filename for the enhanced metafile to be created. If this parameter is NULL, the enhanced metafile is memory based and its contents lost when the object is destroyed or when the Win32 `DeleteEnhMetaFile` function is called.

*lpBounds*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) data structure or a [CRect](../../atl-mfc-shared/reference/crect-class.md) object that specifies the dimensions in HIMETRIC units (in .01-millimeter increments) of the picture to be stored in the enhanced metafile.

*lpszDescription*<br/>
Points to a zero-terminated string that specifies the name of the application that created the picture, as well as the picture's title.

### Return Value

A handle of the device context for the enhanced metafile, if successful; otherwise NULL.

### Remarks

This DC can be used to store a device-independent picture.

Windows uses the reference device identified by the *pDCRef* parameter to record the resolution and units of the device on which a picture originally appeared. If the *pDCRef* parameter is NULL, it uses the current display device for reference.

The left and top members of the `RECT` data structure pointed to by the *lpBounds* parameter must be smaller than the right and bottom members, respectively. Points along the edges of the rectangle are included in the picture. If *lpBounds* is NULL, the graphics device interface (GDI) computes the dimensions of the smallest rectangle that can enclose the picture drawn by the application. The *lpBounds* parameter should be supplied where possible.

The string pointed to by the *lpszDescription* parameter must contain a null character between the application name and the picture name and must terminate with two null characters —for example, "XYZ Graphics Editor\0Bald Eagle\0\0," where \0 represents the null character. If *lpszDescription* is NULL, there is no corresponding entry in the enhanced-metafile header.

Applications use the DC created by this function to store a graphics picture in an enhanced metafile. The handle identifying this DC can be passed to any GDI function.

After an application stores a picture in an enhanced metafile, it can display the picture on any output device by calling the `CDC::PlayMetaFile` function. When displaying the picture, Windows uses the rectangle pointed to by the *lpBounds* parameter and the resolution data from the reference device to position and scale the picture. The device context returned by this function contains the same default attributes associated with any new DC.

Applications must use the Win32 `GetWinMetaFileBits` function to convert an enhanced metafile to the older Windows metafile format.

The filename for the enhanced metafile should use the .EMF extension.

## See also

[CDC Class](../../mfc/reference/cdc-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
