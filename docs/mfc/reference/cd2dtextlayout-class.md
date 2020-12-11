---
description: "Learn more about: CD2DTextLayout Class"
title: "CD2DTextLayout Class"
ms.date: "03/27/2019"
f1_keywords: ["CD2DTextLayout", "AFXRENDERTARGET/CD2DTextLayout", "AFXRENDERTARGET/CD2DTextLayout::CD2DTextLayout", "AFXRENDERTARGET/CD2DTextLayout::Create", "AFXRENDERTARGET/CD2DTextLayout::Destroy", "AFXRENDERTARGET/CD2DTextLayout::Get", "AFXRENDERTARGET/CD2DTextLayout::GetFontFamilyName", "AFXRENDERTARGET/CD2DTextLayout::GetLocaleName", "AFXRENDERTARGET/CD2DTextLayout::IsValid", "AFXRENDERTARGET/CD2DTextLayout::ReCreate", "AFXRENDERTARGET/CD2DTextLayout::SetFontFamilyName", "AFXRENDERTARGET/CD2DTextLayout::SetLocaleName", "AFXRENDERTARGET/CD2DTextLayout::m_pTextLayout"]
helpviewer_keywords: ["CD2DTextLayout [MFC], CD2DTextLayout", "CD2DTextLayout [MFC], Create", "CD2DTextLayout [MFC], Destroy", "CD2DTextLayout [MFC], Get", "CD2DTextLayout [MFC], GetFontFamilyName", "CD2DTextLayout [MFC], GetLocaleName", "CD2DTextLayout [MFC], IsValid", "CD2DTextLayout [MFC], ReCreate", "CD2DTextLayout [MFC], SetFontFamilyName", "CD2DTextLayout [MFC], SetLocaleName", "CD2DTextLayout [MFC], m_pTextLayout"]
ms.assetid: 724bd13c-f2ef-4e55-a775-8cb04b7b7908
---
# CD2DTextLayout Class

A wrapper for IDWriteTextLayout.

## Syntax

```
class CD2DTextLayout : public CD2DResource;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DTextLayout::CD2DTextLayout](#cd2dtextlayout)|Constructs a CD2DTextLayout object.|
|[CD2DTextLayout::~CD2DTextLayout](#_dtorcd2dtextlayout)|The destructor. Called when a D2D text layout object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DTextLayout::Create](#create)|Creates a CD2DTextLayout. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DTextLayout::Destroy](#destroy)|Destroys a CD2DTextLayout object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DTextLayout::Get](#get)|Returns IDWriteTextLayout interface|
|[CD2DTextLayout::GetFontFamilyName](#getfontfamilyname)|Copies the font family name of the text at the specified position.|
|[CD2DTextLayout::GetLocaleName](#getlocalename)|Gets the locale name of the text at the specified position.|
|[CD2DTextLayout::IsValid](#isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DTextLayout::ReCreate](#recreate)|Re-creates a CD2DTextLayout. (Overrides [CD2DResource::ReCreate](../../mfc/reference/cd2dresource-class.md#recreate).)|
|[CD2DTextLayout::SetFontFamilyName](#setfontfamilyname)|Sets null-terminated font family name for text within a specified text range|
|[CD2DTextLayout::SetLocaleName](#setlocalename)|Sets the locale name for text within a specified text range|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DTextLayout::operator IDWriteTextLayout*](#operator_idwritetextlayout_star)|Returns IDWriteTextLayout interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DTextLayout::m_pTextLayout](#m_ptextlayout)|A pointer to an IDWriteTextLayout.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DTextLayout](../../mfc/reference/cd2dtextlayout-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dtextlayout"></a> CD2DTextLayout::~CD2DTextLayout

The destructor. Called when a D2D text layout object is being destroyed.

```
virtual ~CD2DTextLayout();
```

## <a name="cd2dtextlayout"></a> CD2DTextLayout::CD2DTextLayout

Constructs a CD2DTextLayout object.

```
CD2DTextLayout(
    CRenderTarget* pParentTarget,
    const CString& strText,
    CD2DTextFormat& textFormat,
    const CD2DSizeF& sizeMax,
    BOOL bAutoDestroy = TRUE);
```

### Parameters

*pParentTarget*<br/>
A pointer to the render target.

*strText*<br/>
A CString object that contains the string to create a new CD2DTextLayout object from.

*textFormat*<br/>
A CString object that contains the format to apply to the string.

*sizeMax*<br/>
The size of the layout box.

*bAutoDestroy*<br/>
Indicates that the object will be destroyed by owner (pParentTarget).

## <a name="create"></a> CD2DTextLayout::Create

Creates a CD2DTextLayout.

```
virtual HRESULT Create(CRenderTarget* */);
```

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="destroy"></a> CD2DTextLayout::Destroy

Destroys a CD2DTextLayout object.

```
virtual void Destroy();
```

## <a name="get"></a> CD2DTextLayout::Get

Returns IDWriteTextLayout interface

```
IDWriteTextLayout* Get();
```

### Return Value

Pointer to an IDWriteTextLayout interface or NULL if object is not initialized yet.

## <a name="getfontfamilyname"></a> CD2DTextLayout::GetFontFamilyName

Copies the font family name of the text at the specified position.

```
CString GetFontFamilyName(
    UINT32 currentPosition,
    DWRITE_TEXT_RANGE* textRange = NULL) const;
```

### Parameters

*currentPosition*<br/>
The position of the text to examine.

*textRange*<br/>
The range of text that has the same formatting as the text at the position specified by currentPosition. This means the run has the exact formatting as the position specified, including but not limited to the font family name.

### Return Value

CString object that contains the current font family name.

## <a name="getlocalename"></a> CD2DTextLayout::GetLocaleName

Gets the locale name of the text at the specified position.

```
CString GetLocaleName(
    UINT32 currentPosition,
    DWRITE_TEXT_RANGE* textRange = NULL) const;
```

### Parameters

*currentPosition*<br/>
The position of the text to inspect.

*textRange*<br/>
The range of text that has the same formatting as the text at the position specified by currentPosition. This means the run has the exact formatting as the position specified, including but not limited to the locale name.

### Return Value

CString object that contains the current locale name.

## <a name="isvalid"></a> CD2DTextLayout::IsValid

Checks resource validity

```
virtual BOOL IsValid() const;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_ptextlayout"></a> CD2DTextLayout::m_pTextLayout

A pointer to an IDWriteTextLayout.

```
IDWriteTextLayout* m_pTextLayout;
```

## <a name="operator_idwritetextlayout_star"></a> CD2DTextLayout::operator IDWriteTextLayout*

Returns IDWriteTextLayout interface

```
operator IDWriteTextLayout*();
```

### Return Value

Pointer to an IDWriteTextLayout interface or NULL if object is not initialized yet.

## <a name="recreate"></a> CD2DTextLayout::ReCreate

Re-creates a CD2DTextLayout.

```
virtual HRESULT ReCreate(CRenderTarget* */);
```

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="setfontfamilyname"></a> CD2DTextLayout::SetFontFamilyName

Sets null-terminated font family name for text within a specified text range

```
BOOL SetFontFamilyName(
    LPCWSTR pwzFontFamilyName,
    DWRITE_TEXT_RANGE textRange);
```

### Parameters

*pwzFontFamilyName*<br/>
The font family name that applies to the entire text string within the range specified by textRange

*textRange*<br/>
Text range to which this change applies

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE

## <a name="setlocalename"></a> CD2DTextLayout::SetLocaleName

Sets the locale name for text within a specified text range

```
BOOL SetLocaleName(
    LPCWSTR pwzLocaleName,
    DWRITE_TEXT_RANGE textRange);
```

### Parameters

*pwzLocaleName*<br/>
A null-terminated locale name string

*textRange*<br/>
Text range to which this change applies

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE

## See also

[Classes](../../mfc/reference/mfc-classes.md)
