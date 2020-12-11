---
description: "Learn more about: CW2WEX Class"
title: "CW2WEX Class"
ms.date: "11/04/2016"
f1_keywords: ["CW2WEX", "ATLCONV/ATL::CW2WEX", "ATLCONV/ATL::CW2WEX::CW2WEX", "ATLCONV/ATL::CW2WEX::m_psz", "ATLCONV/ATL::CW2WEX::m_szBuffer"]
helpviewer_keywords: ["CW2WEX class"]
ms.assetid: 46262e56-e0d2-41fe-855b-0b67ecc8fcd7
---
# CW2WEX Class

This class is used by the string conversion macros CW2TEX and CT2WEX, and the typedef CW2W.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <int t_nBufferLength = 128>
class CW2WEX
```

#### Parameters

*t_nBufferLength*<br/>
The size of the buffer used in the translation process. The default length is 128 bytes.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CW2WEX::CW2WEX](#cw2wex)|The constructor.|
|[CW2WEX::~CW2WEX](#dtor)|The destructor.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CW2WEX::operator LPWSTR](#operator_lpwstr)|Conversion operator.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CW2WEX::m_psz](#m_psz)|The data member that stores the source string.|
|[CW2WEX::m_szBuffer](#m_szbuffer)|The static buffer, used to store the converted string.|

## Remarks

Unless extra functionality is required, use CW2TEX, CT2WEX, or CW2W in your code.

This class contains a fixed-size static buffer which is used to store the result of the conversion. If the result is too large to fit into the static buffer, the class allocates memory using **malloc**, freeing the memory when the object goes out of scope. This ensures that, unlike text conversion macros available in previous versions of ATL, this class is safe to use in loops and that it won't overflow the stack.

If the class tries to allocate memory on the heap and fails, it will call `AtlThrow` with an argument of E_OUTOFMEMORY.

By default, the ATL conversion classes and macros use the current thread's ANSI code page for the conversion.

The following macros are based on this class:

- CW2TEX

- CT2WEX

The following typedef is based on this class:

- CW2W

For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](string-conversion-macros.md).

## Example

See [ATL and MFC String Conversion Macros](string-conversion-macros.md) for an example of using these string conversion macros.

## Requirements

**Header:** atlconv.h

## <a name="cw2wex"></a> CW2WEX::CW2WEX

The constructor.

```
CW2WEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2WEX( LPCWSTR  psz) throw(...);
```

### Parameters

*psz*<br/>
The text string to be converted.

*nCodePage*<br/>
The code page. Not used in this class.

### Remarks

Creates the buffer required for the translation.

## <a name="dtor"></a> CW2WEX::~CW2WEX

The destructor..

```
~CW2WEX() throw();
```

### Remarks

Frees the allocated buffer.

## <a name="m_psz"></a> CW2WEX::m_psz

The data member that stores the source string.

```
LPWSTR m_psz;
```

## <a name="m_szbuffer"></a> CW2WEX::m_szBuffer

The static buffer, used to store the converted string.

```
wchar_t m_szBuffer[t_nBufferLength];
```

## <a name="operator_lpwstr"></a> CW2WEX::operator LPWSTR

Cast operator.

```
operator LPWSTR() const throw();
```

### Return Value

Returns the text string as type LPWSTR.

## See also

[CA2AEX Class](../../atl/reference/ca2aex-class.md)<br/>
[CA2CAEX Class](../../atl/reference/ca2caex-class.md)<br/>
[CA2WEX Class](../../atl/reference/ca2wex-class.md)<br/>
[CW2AEX Class](../../atl/reference/cw2aex-class.md)<br/>
[CW2CWEX Class](../../atl/reference/cw2cwex-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
