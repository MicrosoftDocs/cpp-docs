---
description: "Learn more about: CD2DTextFormat Class"
title: "CD2DTextFormat Class"
ms.date: "03/27/2019"
f1_keywords: ["CD2DTextFormat", "AFXRENDERTARGET/CD2DTextFormat", "AFXRENDERTARGET/CD2DTextFormat::CD2DTextFormat", "AFXRENDERTARGET/CD2DTextFormat::Create", "AFXRENDERTARGET/CD2DTextFormat::Destroy", "AFXRENDERTARGET/CD2DTextFormat::Get", "AFXRENDERTARGET/CD2DTextFormat::GetFontFamilyName", "AFXRENDERTARGET/CD2DTextFormat::GetLocaleName", "AFXRENDERTARGET/CD2DTextFormat::IsValid", "AFXRENDERTARGET/CD2DTextFormat::ReCreate", "AFXRENDERTARGET/CD2DTextFormat::m_pTextFormat"]
helpviewer_keywords: ["CD2DTextFormat [MFC], CD2DTextFormat", "CD2DTextFormat [MFC], Create", "CD2DTextFormat [MFC], Destroy", "CD2DTextFormat [MFC], Get", "CD2DTextFormat [MFC], GetFontFamilyName", "CD2DTextFormat [MFC], GetLocaleName", "CD2DTextFormat [MFC], IsValid", "CD2DTextFormat [MFC], ReCreate", "CD2DTextFormat [MFC], m_pTextFormat"]
ms.assetid: db194cec-9dae-4644-ab84-7c43b7164117
---
# CD2DTextFormat Class

A wrapper for IDWriteTextFormat.

## Syntax

```
class CD2DTextFormat : public CD2DResource;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DTextFormat::CD2DTextFormat](#cd2dtextformat)|Constructs a CD2DTextFormat object.|
|[CD2DTextFormat::~CD2DTextFormat](#_dtorcd2dtextformat)|The destructor. Called when a D2D text format object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DTextFormat::Create](#create)|Creates a CD2DTextFormat. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DTextFormat::Destroy](#destroy)|Destroys a CD2DTextFormat object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DTextFormat::Get](#get)|Returns IDWriteTextFormat interface|
|[CD2DTextFormat::GetFontFamilyName](#getfontfamilyname)|Gets a copy of the font family name.|
|[CD2DTextFormat::GetLocaleName](#getlocalename)|Gets a copy of the locale name.|
|[CD2DTextFormat::IsValid](#isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DTextFormat::ReCreate](#recreate)|Re-creates a CD2DTextFormat. (Overrides [CD2DResource::ReCreate](../../mfc/reference/cd2dresource-class.md#recreate).)|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DTextFormat::operator IDWriteTextFormat*](#operator_idwritetextformat_star)|Returns IDWriteTextFormat interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DTextFormat::m_pTextFormat](#m_ptextformat)|A pointer to an IDWriteTextFormat.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DTextFormat](../../mfc/reference/cd2dtextformat-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dtextformat"></a> CD2DTextFormat::~CD2DTextFormat

The destructor. Called when a D2D text format object is being destroyed.

```
virtual ~CD2DTextFormat();
```

## <a name="cd2dtextformat"></a> CD2DTextFormat::CD2DTextFormat

Constructs a CD2DTextFormat object.

```
CD2DTextFormat(
    CRenderTarget* pParentTarget,
    const CString& strFontFamilyName,
    FLOAT fontSize,
    DWRITE_FONT_WEIGHT fontWeight = DWRITE_FONT_WEIGHT_NORMAL,
    DWRITE_FONT_STYLE fontStyle = DWRITE_FONT_STYLE_NORMAL,
    DWRITE_FONT_STRETCH fontStretch = DWRITE_FONT_STRETCH_NORMAL,
    const CString& strFontLocale = _T(""),
    IDWriteFontCollection* pFontCollection = NULL,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*strFontFamilyName*<br/>
A CString object that contains the name of the font family.

*fontSize*<br/>
The logical size of the font in DIP ("device-independent pixel") units. A DIPequals 1/96 inch.

*fontWeight*<br/>
A value that indicates the font weight for the text object.

*fontStyle*<br/>
A value that indicates the font style for the text object.

*fontStretch*<br/>
A value that indicates the font stretch for the text object.

*strFontLocale*<br/>
A CString object that contains the locale name.

*pFontCollection*<br/>
A pointer to a font collection object. When this is NULL, indicates the system font collection.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="create"></a> CD2DTextFormat::Create

Creates a CD2DTextFormat.

```
virtual HRESULT Create(CRenderTarget* */);
```

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DTextFormat::Destroy

Destroys a CD2DTextFormat object.

```
virtual void Destroy();
```

## <a name="get"></a> CD2DTextFormat::Get

Returns IDWriteTextFormat interface

```
IDWriteTextFormat* Get();
```

### Return Value

Pointer to an IDWriteTextFormat interface or NULL if object is not initialized yet.

## <a name="getfontfamilyname"></a> CD2DTextFormat::GetFontFamilyName

Gets a copy of the font family name.

```
CString GetFontFamilyName() const;
```

### Return Value

CString object that contains the current font family name.

## <a name="getlocalename"></a> CD2DTextFormat::GetLocaleName

Gets a copy of the locale name.

```
CString GetLocaleName() const;
```

### Return Value

CString object that contains the current locale name.

## <a name="isvalid"></a> CD2DTextFormat::IsValid

Checks resource validity

```
virtual BOOL IsValid() const;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_ptextformat"></a> CD2DTextFormat::m_pTextFormat

A pointer to an IDWriteTextFormat.

```
IDWriteTextFormat* m_pTextFormat;
```

## <a name="operator_idwritetextformat_star"></a> CD2DTextFormat::operator IDWriteTextFormat*

Returns IDWriteTextFormat interface

```
operator IDWriteTextFormat*();
```

### Return Value

Pointer to an IDWriteTextFormat interface or NULL if object is not initialized yet.

## <a name="recreate"></a> CD2DTextFormat::ReCreate

Re-creates a CD2DTextFormat.

```
virtual HRESULT ReCreate(CRenderTarget* */);
```

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
