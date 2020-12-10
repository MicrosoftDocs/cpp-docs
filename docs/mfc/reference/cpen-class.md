---
description: "Learn more about: CPen Class"
title: "CPen Class"
ms.date: "11/04/2016"
f1_keywords: ["CPen", "AFXWIN/CPen", "AFXWIN/CPen::CPen", "AFXWIN/CPen::CreatePen", "AFXWIN/CPen::CreatePenIndirect", "AFXWIN/CPen::FromHandle", "AFXWIN/CPen::GetExtLogPen", "AFXWIN/CPen::GetLogPen"]
helpviewer_keywords: ["CPen [MFC], CPen", "CPen [MFC], CreatePen", "CPen [MFC], CreatePenIndirect", "CPen [MFC], FromHandle", "CPen [MFC], GetExtLogPen", "CPen [MFC], GetLogPen"]
ms.assetid: 93175a3a-d46c-4768-be8d-863254f97a5f
---
# CPen Class

Encapsulates a Windows graphics device interface (GDI) pen.

## Syntax

```
class CPen : public CGdiObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPen::CPen](#cpen)|Constructs a `CPen` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPen::CreatePen](#createpen)|Creates a logical cosmetic or geometric pen with the specified style, width, and brush attributes, and attaches it to the `CPen` object.|
|[CPen::CreatePenIndirect](#createpenindirect)|Creates a pen with the style, width, and color given in a [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) structure, and attaches it to the `CPen` object.|
|[CPen::FromHandle](#fromhandle)|Returns a pointer to a `CPen` object when given a Windows HPEN.|
|[CPen::GetExtLogPen](#getextlogpen)|Gets an [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen) underlying structure.|
|[CPen::GetLogPen](#getlogpen)|Gets a [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) underlying structure.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CPen::operator HPEN](#operator_hpen)|Returns the Windows handle attached to the `CPen` object.|

## Remarks

For more information on using `CPen`, see [Graphic Objects](../../mfc/graphic-objects.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CPen`

## Requirements

**Header:** afxwin.h

## <a name="cpen"></a> CPen::CPen

Constructs a `CPen` object.

```
CPen();

CPen(
    int nPenStyle,
    int nWidth,
    COLORREF crColor);

CPen(
    int nPenStyle,
    int nWidth,
    const LOGBRUSH* pLogBrush,
    int nStyleCount = 0,
    const DWORD* lpStyle = NULL);
```

### Parameters

*nPenStyle*<br/>
Specifies the pen style. This parameter in the first version of the constructor can be one of the following values:

- PS_SOLID Creates a solid pen.

- PS_DASH Creates a dashed pen. Valid only when the pen width is 1 or less, in device units.

- PS_DOT Creates a dotted pen. Valid only when the pen width is 1 or less, in device units.

- PS_DASHDOT Creates a pen with alternating dashes and dots. Valid only when the pen width is 1 or less, in device units.

- PS_DASHDOTDOT Creates a pen with alternating dashes and double dots. Valid only when the pen width is 1 or less, in device units.

- PS_NULL Creates a null pen.

- PS_INSIDEFRAME Creates a pen that draws a line inside the frame of closed shapes produced by the Windows GDI output functions that specify a bounding rectangle (for example, the `Ellipse`, `Rectangle`, `RoundRect`, `Pie`, and `Chord` member functions). When this style is used with Windows GDI output functions that do not specify a bounding rectangle (for example, the `LineTo` member function), the drawing area of the pen is not limited by a frame.

The second version of the `CPen` constructor specifies a combination of type, style, end cap, and join attributes. The values from each category should be combined by using the bitwise OR operator (&#124;). The pen type can be one of the following values:

- PS_GEOMETRIC Creates a geometric pen.

- PS_COSMETIC Creates a cosmetic pen.

   The second version of the `CPen` constructor adds the following pen styles for *nPenStyle*:

- PS_ALTERNATE Creates a pen that sets every other pixel. (This style is applicable only for cosmetic pens.)

- PS_USERSTYLE Creates a pen that uses a styling array supplied by the user.

   The end cap can be one of the following values:

- PS_ENDCAP_ROUND End caps are round.

- PS_ENDCAP_SQUARE End caps are square.

- PS_ENDCAP_FLAT End caps are flat.

   The join can be one of the following values:

- PS_JOIN_BEVEL Joins are beveled.

- PS_JOIN_MITER Joins are mitered when they are within the current limit set by the [SetMiterLimit](/windows/win32/api/wingdi/nf-wingdi-setmiterlimit) function. If the join exceeds this limit, it is beveled.

- PS_JOIN_ROUND Joins are round.

*nWidth*<br/>
Specifies the width of the pen.

- For the first version of the constructor, if this value is 0, the width in device units is always 1 pixel, regardless of the mapping mode.

- For the second version of the constructor, if *nPenStyle* is PS_GEOMETRIC, the width is given in logical units. If *nPenStyle* is PS_COSMETIC, the width must be set to 1.

*crColor*<br/>
Contains an RGB color for the pen.

*pLogBrush*<br/>
Points to a `LOGBRUSH` structure. If *nPenStyle* is PS_COSMETIC, the *lbColor* member of the `LOGBRUSH` structure specifies the color of the pen and the *lbStyle* member of the `LOGBRUSH` structure must be set to BS_SOLID. If *nPenStyle* is PS_GEOMETRIC, all members must be used to specify the brush attributes of the pen.

*nStyleCount*<br/>
Specifies the length, in doubleword units, of the *lpStyle* array. This value must be zero if *nPenStyle* is not PS_USERSTYLE.

*lpStyle*<br/>
Points to an array of doubleword values. The first value specifies the length of the first dash in a user-defined style, the second value specifies the length of the first space, and so on. This pointer must be NULL if *nPenStyle* is not PS_USERSTYLE.

### Remarks

If you use the constructor with no arguments, you must initialize the resulting `CPen` object with the `CreatePen`, `CreatePenIndirect`, or `CreateStockObject` member functions.

If you use the constructor that takes arguments, then no further initialization is necessary. The constructor with arguments can throw an exception if errors are encountered, while the constructor with no arguments will always succeed.

### Example

[!code-cpp[NVC_MFCDocView#99](../../mfc/codesnippet/cpp/cpen-class_1.cpp)]

## <a name="createpen"></a> CPen::CreatePen

Creates a logical cosmetic or geometric pen with the specified style, width, and brush attributes, and attaches it to the `CPen` object.

```
BOOL CreatePen(
    int nPenStyle,
    int nWidth,
    COLORREF crColor);

BOOL CreatePen(
    int nPenStyle,
    int nWidth,
    const LOGBRUSH* pLogBrush,
    int nStyleCount = 0,
    const DWORD* lpStyle = NULL);
```

### Parameters

*nPenStyle*<br/>
Specifies the style for the pen. For a list of possible values, see the *nPenStyle* parameter in the [CPen](#cpen) constructor.

*nWidth*<br/>
Specifies the width of the pen.

- For the first version of `CreatePen`, if this value is 0, the width in device units is always 1 pixel, regardless of the mapping mode.

- For the second version of `CreatePen`, if *nPenStyle* is PS_GEOMETRIC, the width is given in logical units. If *nPenStyle* is PS_COSMETIC, the width must be set to 1.

*crColor*<br/>
Contains an RGB color for the pen.

*pLogBrush*<br/>
Points to a [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) structure. If *nPenStyle* is PS_COSMETIC, the `lbColor` member of the `LOGBRUSH` structure specifies the color of the pen and the *lbStyle* member of the `LOGBRUSH` structure must be set to BS_SOLID. If nPenStyle is PS_GEOMETRIC, all members must be used to specify the brush attributes of the pen.

*nStyleCount*<br/>
Specifies the length, in doubleword units, of the *lpStyle* array. This value must be zero if *nPenStyle* is not PS_USERSTYLE.

*lpStyle*<br/>
Points to an array of doubleword values. The first value specifies the length of the first dash in a user-defined style, the second value specifies the length of the first space, and so on. This pointer must be NULL if *nPenStyle* is not PS_USERSTYLE.

### Return Value

Nonzero if successful, or zero if the method fails.

### Remarks

The first version of `CreatePen` initializes a pen with the specified style, width, and color. The pen can be subsequently selected as the current pen for any device context.

Pens that have a width greater than 1 pixel should always have either the PS_NULL, PS_SOLID, or PS_INSIDEFRAME style.

If a pen has the PS_INSIDEFRAME style and a color that does not match a color in the logical color table, the pen is drawn with a dithered color. The PS_SOLID pen style cannot be used to create a pen with a dithered color. The style PS_INSIDEFRAME is identical to PS_SOLID if the pen width is less than or equal to 1.

The second version of `CreatePen` initializes a logical cosmetic or geometric pen that has the specified style, width, and brush attributes. The width of a cosmetic pen is always 1; the width of a geometric pen is always specified in world units. After an application creates a logical pen, it can select that pen into a device context by calling the [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) function. After a pen is selected into a device context, it can be used to draw lines and curves.

- If *nPenStyle* is PS_COSMETIC and PS_USERSTYLE, the entries in the *lpStyle* array specify lengths of dashes and spaces in style units. A style unit is defined by the device in which the pen is used to draw a line.

- If *nPenStyle* is PS_GEOMETRIC and PS_USERSTYLE, the entries in the *lpStyle* array specify lengths of dashes and spaces in logical units.

- If *nPenStyle* is PS_ALTERNATE, the style unit is ignored and every other pixel is set.

When an application no longer requires a given pen, it should call the [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) member function or destroy the `CPen` object so the resource is no longer in use. An application should not delete a pen when the pen is selected in a device context.

### Example

[!code-cpp[NVC_MFCDocView#100](../../mfc/codesnippet/cpp/cpen-class_2.cpp)]

## <a name="createpenindirect"></a> CPen::CreatePenIndirect

Initializes a pen that has the style, width, and color given in the structure pointed to by *lpLogPen*.

```
BOOL CreatePenIndirect(LPLOGPEN lpLogPen);
```

### Parameters

*lpLogPen*<br/>
Points to the Windows [LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen) structure that contains information about the pen.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

Pens that have a width greater than 1 pixel should always have either the PS_NULL, PS_SOLID, or PS_INSIDEFRAME style.

If a pen has the PS_INSIDEFRAME style and a color that does not match a color in the logical color table, the pen is drawn with a dithered color. The PS_INSIDEFRAME style is identical to PS_SOLID if the pen width is less than or equal to 1.

### Example

[!code-cpp[NVC_MFCDocView#101](../../mfc/codesnippet/cpp/cpen-class_3.cpp)]

## <a name="fromhandle"></a> CPen::FromHandle

Returns a pointer to a `CPen` object given a handle to a Windows GDI pen object.

```
static CPen* PASCAL FromHandle(HPEN hPen);
```

### Parameters

*hPen*<br/>
`HPEN` handle to Windows GDI pen.

### Return Value

A pointer to a `CPen` object if successful; otherwise NULL.

### Remarks

If a `CPen` object is not attached to the handle, a temporary `CPen` object is created and attached. This temporary `CPen` object is valid only until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. In other words, the temporary object is only valid during the processing of one window message.

### Example

[!code-cpp[NVC_MFCDocView#105](../../mfc/codesnippet/cpp/cpen-class_4.cpp)]

## <a name="getextlogpen"></a> CPen::GetExtLogPen

Gets an `EXTLOGPEN` underlying structure.

```
int GetExtLogPen(EXTLOGPEN* pLogPen);
```

### Parameters

*pLogPen*<br/>
Points to an [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen) structure that contains information about the pen.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The `EXTLOGPEN` structure defines the style, width, and brush attributes of a pen. For example, call `GetExtLogPen` to match the particular style of a pen.

See the following topics in the Windows SDK for information about pen attributes:

- [GetObject](/windows/win32/api/wingdi/nf-wingdi-getobject)

- [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen)

- [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen)

- [ExtCreatePen](/windows/win32/api/wingdi/nf-wingdi-extcreatepen)

### Example

The following code example demonstrates calling `GetExtLogPen` to retrieve a pen's attributes, and then create a new, cosmetic pen with the same color.

[!code-cpp[NVC_MFCDocView#102](../../mfc/codesnippet/cpp/cpen-class_5.cpp)]

## <a name="getlogpen"></a> CPen::GetLogPen

Gets a `LOGPEN` underlying structure.

```
int GetLogPen(LOGPEN* pLogPen);
```

### Parameters

*pLogPen*<br/>
Points to a [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) structure to contain information about the pen.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The `LOGPEN` structure defines the style, color, and pattern of a pen.

For example, call `GetLogPen` to match the particular style of pen.

See the following topics in the Windows SDK for information about pen attributes:

- [GetObject](/windows/win32/api/wingdi/nf-wingdi-getobject)

- [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen)

### Example

The following code example demonstrates calling `GetLogPen` to retrieve a pen character, and then create a new, solid pen with the same color.

[!code-cpp[NVC_MFCDocView#103](../../mfc/codesnippet/cpp/cpen-class_6.cpp)]

## <a name="operator_hpen"></a> CPen::operator HPEN

Gets the attached Windows GDI handle of the `CPen` object.

```
operator HPEN() const;
```

### Return Value

If successful, a handle to the Windows GDI object represented by the `CPen` object; otherwise NULL.

### Remarks

This operator is a casting operator, which supports direct use of an HPEN object.

For more information about using graphic objects, see the article [Graphic Objects](/windows/win32/gdi/graphic-objects) in Windows SDK.

### Example

[!code-cpp[NVC_MFCDocView#104](../../mfc/codesnippet/cpp/cpen-class_7.cpp)]

## See also

[CGdiObject Class](../../mfc/reference/cgdiobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CBrush Class](../../mfc/reference/cbrush-class.md)
