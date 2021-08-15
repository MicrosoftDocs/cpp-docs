---
description: "Learn more about: CFontHolder Class"
title: "CFontHolder Class"
ms.date: "11/04/2016"
f1_keywords: ["CFontHolder", "AFXCTL/CFontHolder", "AFXCTL/CFontHolder::CFontHolder", "AFXCTL/CFontHolder::GetDisplayString", "AFXCTL/CFontHolder::GetFontDispatch", "AFXCTL/CFontHolder::GetFontHandle", "AFXCTL/CFontHolder::InitializeFont", "AFXCTL/CFontHolder::QueryTextMetrics", "AFXCTL/CFontHolder::ReleaseFont", "AFXCTL/CFontHolder::Select", "AFXCTL/CFontHolder::SetFont", "AFXCTL/CFontHolder::m_pFont"]
helpviewer_keywords: ["CFontHolder [MFC], CFontHolder", "CFontHolder [MFC], GetDisplayString", "CFontHolder [MFC], GetFontDispatch", "CFontHolder [MFC], GetFontHandle", "CFontHolder [MFC], InitializeFont", "CFontHolder [MFC], QueryTextMetrics", "CFontHolder [MFC], ReleaseFont", "CFontHolder [MFC], Select", "CFontHolder [MFC], SetFont", "CFontHolder [MFC], m_pFont"]
ms.assetid: 728ab472-0c97-440d-889f-1324c6e1b6b8
---
# CFontHolder Class

Implements the stock Font property and encapsulates the functionality of a Windows font object and the `IFont` interface.

## Syntax

```
class CFontHolder
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CFontHolder::CFontHolder](#cfontholder)|Constructs a `CFontHolder` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFontHolder::GetDisplayString](#getdisplaystring)|Retrieves the string displayed in a container's property browser.|
|[CFontHolder::GetFontDispatch](#getfontdispatch)|Returns the font's `IDispatch` interface.|
|[CFontHolder::GetFontHandle](#getfonthandle)|Returns a handle to a Windows font.|
|[CFontHolder::InitializeFont](#initializefont)|Initializes a `CFontHolder` object.|
|[CFontHolder::QueryTextMetrics](#querytextmetrics)|Retrieves information for the related font.|
|[CFontHolder::ReleaseFont](#releasefont)|Disconnects the `CFontHolder` object from the `IFont` and `IFontNotification` interfaces.|
|[CFontHolder::Select](#select)|Selects a font resource into a device context.|
|[CFontHolder::SetFont](#setfont)|Connects the `CFontHolder` object to an `IFont` interface.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CFontHolder::m_pFont](#m_pfont)|A pointer to the `CFontHolder` object's `IFont` interface.|

## Remarks

`CFontHolder` does not have a base class.

Use this class to implement custom font properties for your control. For information on creating such properties, see the article [ActiveX Controls: Using Fonts](../../mfc/mfc-activex-controls-using-fonts.md).

## Inheritance Hierarchy

`CFontHolder`

## Requirements

**Header:** afxctl.h

## <a name="cfontholder"></a> CFontHolder::CFontHolder

Constructs a `CFontHolder` object.

```
explicit CFontHolder(LPPROPERTYNOTIFYSINK pNotify);
```

### Parameters

*pNotify*<br/>
Pointer to the font's `IPropertyNotifySink` interface.

### Remarks

You must call `InitializeFont` to initialize the resulting object before using it.

## <a name="getdisplaystring"></a> CFontHolder::GetDisplayString

Retrieves a string that can be displayed in a container's property browser.

```
BOOL GetDisplayString(CString& strValue);
```

### Parameters

*strValue*<br/>
Reference to the [CString](../../atl-mfc-shared/reference/cstringt-class.md) that is to hold the display string.

### Return Value

Nonzero if the string is successfully retrieved; otherwise 0.

## <a name="getfontdispatch"></a> CFontHolder::GetFontDispatch

Call this function to retrieve a pointer to the font's dispatch interface.

```
LPFONTDISP GetFontDispatch();
```

### Return Value

A pointer to the `CFontHolder` object's `IFontDisp` interface. Note that the function that calls `GetFontDispatch` must call `IUnknown::Release` on this interface pointer when done with it.

### Remarks

Call `InitializeFont` before calling `GetFontDispatch`.

## <a name="getfonthandle"></a> CFontHolder::GetFontHandle

Call this function to get a handle to a Windows font.

```
HFONT GetFontHandle();

HFONT GetFontHandle(
    long cyLogical,
    long cyHimetric);
```

### Parameters

*cyLogical*<br/>
Height, in logical units, of the rectangle in which the control is drawn.

*cyHimetric*<br/>
Height, in MM_HIMETRIC units, of the control.

### Return Value

A handle to the Font object; otherwise NULL.

### Remarks

The ratio of *cyLogical* and *cyHimetric* is used to calculate the proper display size, in logical units, for the font's point size expressed in MM_HIMETRIC units:

Display size = ( *cyLogical* / *cyHimetric*) X font size

The version with no parameters returns a handle to a font sized correctly for the screen.

## <a name="initializefont"></a> CFontHolder::InitializeFont

Initializes a `CFontHolder` object.

```cpp
void InitializeFont(
    const FONTDESC* pFontDesc = NULL,
    LPDISPATCH pFontDispAmbient = NULL);
```

### Parameters

*pFontDesc*<br/>
Pointer to a font description structure ( [FONTDESC](/windows/win32/api/olectl/ns-olectl-fontdesc)) that specifies the font's characteristics.

*pFontDispAmbient*<br/>
Pointer to the container's ambient Font property.

### Remarks

If *pFontDispAmbient* is not NULL, the `CFontHolder` object is connected to a clone of the `IFont` interface used by the container's ambient Font property.

If *pFontDispAmbient* is NULL, a new Font object is created either from the font description pointed to by *pFontDesc* or, if *pFontDesc* is NULL, from a default description.

Call this function after constructing a `CFontHolder` object.

## <a name="m_pfont"></a> CFontHolder::m_pFont

A pointer to the `CFontHolder` object's `IFont` interface.

```
LPFONT m_pFont;
```

## <a name="querytextmetrics"></a> CFontHolder::QueryTextMetrics

Retrieves information on the physical font represented by the `CFontHolder` object.

```cpp
void QueryTextMetrics(LPTEXTMETRIC lptm);
```

### Parameters

*lptm*<br/>
A pointer to a [TEXTMETRIC](/windows/win32/api/wingdi/ns-wingdi-textmetricw) structure that will receive the information.

## <a name="releasefont"></a> CFontHolder::ReleaseFont

This function disconnects the `CFontHolder` object from its `IFont` interface.

```cpp
void ReleaseFont();
```

## <a name="select"></a> CFontHolder::Select

Call this function to select your control's font into the specified device context.

```
CFont* Select(
    CDC* pDC,
    long cyLogical,
    long cyHimetric);
```

### Parameters

*pDC*<br/>
Device context into which the font is selected.

*cyLogical*<br/>
Height, in logical units, of the rectangle in which the control is drawn.

*cyHimetric*<br/>
Height, in MM_HIMETRIC units, of the control.

### Return Value

A pointer to the font that is being replaced.

### Remarks

See [GetFontHandle](#getfonthandle) for a discussion of the *cyLogical* and *cyHimetric* parameters.

## <a name="setfont"></a> CFontHolder::SetFont

Releases any existing font and connects the `CFontHolder` object to an `IFont` interface.

```cpp
void SetFont(LPFONT pNewFont);
```

### Parameters

*pNewFont*<br/>
Pointer to the new `IFont` interface.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CPropExchange Class](../../mfc/reference/cpropexchange-class.md)
