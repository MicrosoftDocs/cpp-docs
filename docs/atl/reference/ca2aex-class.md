---
description: "Learn more about: CA2AEX Class"
title: "CA2AEX Class"
ms.date: "11/04/2016"
f1_keywords: ["CA2AEX", "ATLCONV/ATL::CA2AEX", "ATLCONV/ATL::CA2AEX::CA2AEX", "ATLCONV/ATL::CA2AEX::m_psz", "ATLCONV/ATL::CA2AEX::m_szBuffer"]
helpviewer_keywords: ["CA2AEX class"]
ms.assetid: 57dc65df-d9cf-4a84-99d3-6e031dde3664
---
# CA2AEX Class

This class is used by the string conversion macros CA2TEX and CT2AEX, and the typedef CA2A.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
template <int t_nBufferLength = 128>
class CA2AEX
```

### Parameters

*t_nBufferLength*<br/>
The size of the buffer used in the translation process. The default length is 128 bytes.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CA2AEX::CA2AEX](#ca2aex)|The constructor.|
|[CA2AEX::~CA2AEX](#dtor)|The destructor.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CA2AEX::operator LPSTR](#operator_lpstr)|Conversion operator.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CA2AEX::m_psz](#m_psz)|The data member that stores the source string.|
|[CA2AEX::m_szBuffer](#m_szbuffer)|The static buffer, used to store the converted string.|

## Remarks

Unless extra functionality is required, use CA2TEX, CT2AEX, or CA2A in your own code.

This class contains a fixed-size static buffer which is used to store the result of the conversion. If the result is too large to fit into the static buffer, the class allocates memory using **malloc**, freeing the memory when the object goes out of scope. This ensures that, unlike text conversion macros available in previous versions of ATL, this class is safe to use in loops and that it won't overflow the stack.

If the class tries to allocate memory on the heap and fails, it will call `AtlThrow` with an argument of E_OUTOFMEMORY.

By default, the ATL conversion classes and macros use the current thread's ANSI code page for the conversion.

The following macros are based on this class:

- CA2TEX

- CT2AEX

The following typedef is based on this class:

- CA2A

For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](string-conversion-macros.md).

## Example

See [ATL and MFC String Conversion Macros](string-conversion-macros.md) for an example of using these string conversion macros.

## Requirements

**Header:** atlconv.h

## <a name="ca2aex"></a> CA2AEX::CA2AEX

The constructor.

```cpp
CA2AEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2AEX(LPCSTR psz) throw(...);
```

### Parameters

*psz*<br/>
The text string to be converted.

*nCodePage*<br/>
Unused in this class.

### Remarks

Creates the buffer required for the translation.

## <a name="dtor"></a> CA2AEX::~CA2AEX

The destructor.

```cpp
~CA2AEX() throw();
```

### Remarks

Frees the allocated buffer.

## <a name="m_psz"></a> CA2AEX::m_psz

The data member that stores the source string.

```cpp
LPSTR m_psz;
```

## <a name="m_szbuffer"></a> CA2AEX::m_szBuffer

The static buffer, used to store the converted string.

```cpp
char m_szBuffer[ t_nBufferLength];
```

## <a name="operator_lpstr"></a> CA2AEX::operator LPSTR

Conversion operator.

```cpp
operator LPSTR() const throw();
```

### Return Value

Returns the text string as type LPSTR.

## See also

[CA2CAEX Class](../../atl/reference/ca2caex-class.md)<br/>
[CA2WEX Class](../../atl/reference/ca2wex-class.md)<br/>
[CW2AEX Class](../../atl/reference/cw2aex-class.md)<br/>
[CW2CWEX Class](../../atl/reference/cw2cwex-class.md)<br/>
[CW2WEX Class](../../atl/reference/cw2wex-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
