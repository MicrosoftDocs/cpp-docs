---
description: "Learn more about: CDefaultCharTraits Class"
title: "CDefaultCharTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CDefaultCharTraits", "ATLCOLL/ATL::CDefaultCharTraits", "ATLCOLL/ATL::CDefaultCharTraits::CharToLower", "ATLCOLL/ATL::CDefaultCharTraits::CharToUpper"]
helpviewer_keywords: ["CDefaultCharTraits class"]
ms.assetid: f94a3934-597f-401d-8513-ed6924ae069a
---
# CDefaultCharTraits Class

This class provides two static functions for converting characters between uppercase and lowercase.

## Syntax

```
template <typename T>
class CDefaultCharTraits
```

#### Parameters

*T*<br/>
The type of data to be stored in the collection.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDefaultCharTraits::CharToLower](#chartolower)|(Static) Call this function to convert a character to uppercase.|
|[CDefaultCharTraits::CharToUpper](#chartoupper)|(Static) Call this function to convert a character to lowercase.|

## Remarks

This class provides functions that are utilized by the class [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

## Requirements

**Header:** atlcoll.h

## <a name="chartolower"></a> CDefaultCharTraits::CharToLower

Call this function to convert a character to lowercase.

```
static wchar_t CharToLower(wchar_t x);
static char CharToLower(char x);
```

### Parameters

*x*<br/>
The character to convert to lowercase.

### Example

[!code-cpp[NVC_ATL_Utilities#132](../../atl/codesnippet/cpp/cdefaultchartraits-class_1.cpp)]

## <a name="chartoupper"></a> CDefaultCharTraits::CharToUpper

Call this function to convert a character to uppercase.

```
static wchar_t CharToUpper(wchar_t x);
static char CharToUpper(char x);
```

### Parameters

*x*<br/>
The character to convert to uppercase.

## See also

[Class Overview](../../atl/atl-class-overview.md)
