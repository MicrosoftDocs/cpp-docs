---
description: "Learn more about: CFixedStringT Class"
title: "CFixedStringT Class"
ms.date: "03/27/2019"
f1_keywords: ["CFixedStringT", "CSTRINGT/ATL::CFixedStringT", "CSTRINGT/ATL::CFixedStringT::CFixedStringT"]
helpviewer_keywords: ["CFixedStringT class", "shared classes, CFixedStringT"]
ms.assetid: 6d4171ba-3104-493a-a6cc-d515f4ba9a4b
---
# CFixedStringT Class

This class represents a string object with a fixed character buffer.

## Syntax

```
template<class StringType, int t_nChars>
class CFixedStringT : private CFixedStringMgr, public StringType
```

#### Parameters

*StringType*<br/>
Used as the base class for the fixed string object and can be any `CStringT`-based type. Some examples include `CString`, `CStringA`, and `CStringW`.

*t_nChars*<br/>
The number of characters stored in the buffer.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CFixedStringT::CFixedStringT](#cfixedstringt)|The constructor for the string object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CFixedStringT::operator =](#operator_eq)|Assigns a new value to a `CFixedStringT` object.|

## Remarks

This class is an example of a custom string class based on `CStringT`. Although similar, the two classes differ in implementation. The major differences between `CFixedStringT` and `CStringT` are:

- The initial character buffer is allocated as part of the object and has size *t_nChars*. This allows the `CFixedString` object to occupy a contiguous memory chunk for performance purposes. However, if the contents of a `CFixedStringT` object grows beyond *t_nChars*, the buffer is allocated dynamically.

- The character buffer for a `CFixedStringT` object is always the same length ( *t_nChars*). There is no limitation on buffer size for `CStringT` objects.

- The memory manager for `CFixedStringT` is customized such that sharing of a [CStringData](../../atl-mfc-shared/reference/cstringdata-class.md) object between two or more `CFixedStringT` objects is not allowed. `CStringT` objects do not have this limitation.

For more information on the customization of `CFixedStringT` and memory management for string objects in general, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## Inheritance Hierarchy

`IAtlStringMgr`

`StringType`

`CFixedStringMgr`

`CFixedStringT`

## Requirements

**Header:** cstringt.h

## <a name="cfixedstringt"></a> CFixedStringT::CFixedStringT

Constructs a `CFixedStringT` object.

```
CFixedStringT() throw();
explicit CFixedStringT(IAtlStringMgr* pStringMgr) throw();
CFixedStringT(const CFixedStringT<StringType, t_nChars>& strSrc);
CFixedStringT(const StringType& strSrc);
CFixedStringT(const StringType::XCHAR* pszSrc);
explicit CFixedStringT(const StringType::YCHAR* pszSrc);
explicit CFixedStringT(const unsigned char* pszSrc);
```

### Parameters

*pszSrc*<br/>
A null-terminated string to be copied into this `CFixedStringT` object.

*strSrc*<br/>
An existing `CFixedStringT` object to be copied into this `CFixedStringT` object.

*pStringMgr*<br/>
A pointer to the memory manager of the `CFixedStringT` object. For more information on `IAtlStringMgr` and memory management for `CFixedStringT`, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

### Remarks

Because the constructors copy the input data into new allocated storage, you should be aware that memory exceptions may result. Some of these constructors act as conversion functions.

## <a name="operator_eq"></a> CFixedStringT::operator =

Reinitializes an existing `CFixedStringT` object with new data.

```
CFixedStringT<StringType, t_nChars>& operator=(
    const CFixedStringT<StringType, t_nChars>& strSrc);
CFixedStringT<StringType, t_nChars>& operator=(const char* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const wchar_t* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const unsigned char* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const StringType& strSrc);
```

### Parameters

*pszSrc*<br/>
A null-terminated string to be copied into this `CFixedStringT` object.

*strSrc*<br/>
An existing `CFixedStringT` to be copied into this `CFixedStringT` object.

### Remarks

You should be aware that memory exceptions may occur whenever you use the assignment operator because new storage is often allocated to hold the resulting `CFixedStringT` object.

## See also

[CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)
