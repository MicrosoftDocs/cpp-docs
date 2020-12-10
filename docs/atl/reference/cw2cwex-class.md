---
description: "Learn more about: CW2CWEX Class"
title: "CW2CWEX Class"
ms.date: "11/04/2016"
f1_keywords: ["CW2CWEX", "ATLCONV/ATL::CW2CWEX", "ATLCONV/ATL::CW2CWEX::CW2CWEX", "ATLCONV/ATL::CW2CWEX::m_psz"]
helpviewer_keywords: ["CW2CWEX class"]
ms.assetid: d654b22b-05a6-410f-a0ec-9a2cbbb4cca7
---
# CW2CWEX Class

This class is used by the string conversion macros CW2CTEX and CT2CWEX, and the typedef CW2W.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<int t_nBufferLength = 128>
class CW2CWEX
```

#### Parameters

*t_nBufferLength*<br/>
The size of the buffer used in the translation process. The default length is 128 bytes.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CW2CWEX::CW2CWEX](#cw2cwex)|The constructor.|
|[CW2CWEX::~CW2CWEX](#dtor)|The destructor.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CW2CWEX::operator LPCWSTR](#operator_lpcwstr)|Conversion operator.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CW2CWEX::m_psz](#m_psz)|The data member that stores the source string.|

## Remarks

Unless extra functionality is required, use CW2CTEX, CT2CWEX, or CW2W in your code.

This class is safe to use in loops and won't overflow the stack. By default, the ATL conversion classes and macros use the current thread's ANSI code page for the conversion.

The following macros are based on this class:

- CW2CTEX

- CT2CWEX

The following typedef is based on this class:

- CW2W

For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](string-conversion-macros.md).

## Example

See [ATL and MFC String Conversion Macros](string-conversion-macros.md) for an example of using these string conversion macros.

## Requirements

**Header:** atlconv.h

## <a name="cw2cwex"></a> CW2CWEX::CW2CWEX

The constructor.

```
CW2CWEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2CWEX(LPCWSTR psz) throw(...);
```

### Parameters

*psz*<br/>
The text string to be converted.

*nCodePage*<br/>
The code page. Not used in this class.

### Remarks

Allocates the buffer used in the translation process.

## <a name="dtor"></a> CW2CWEX::~CW2CWEX

The destructor.

```
~CW2CWEX() throw();
```

### Remarks

Frees the allocated buffer.

## <a name="m_psz"></a> CW2CWEX::m_psz

The data member that stores the source string.

```
LPCWSTR m_psz;
```

## <a name="operator_lpcwstr"></a> CW2CWEX::operator LPCWSTR

Conversion operator.

```
operator LPCWSTR() const throw();
```

### Return Value

Returns the text string as type LPCWSTR.

## See also

[CA2AEX Class](../../atl/reference/ca2aex-class.md)<br/>
[CA2CAEX Class](../../atl/reference/ca2caex-class.md)<br/>
[CA2WEX Class](../../atl/reference/ca2wex-class.md)<br/>
[CW2AEX Class](../../atl/reference/cw2aex-class.md)<br/>
[CW2WEX Class](../../atl/reference/cw2wex-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
