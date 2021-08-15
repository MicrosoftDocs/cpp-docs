---
description: "Learn more about: RemoveReference Structure"
title: "RemoveReference Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::RemoveReference"]
helpviewer_keywords: ["RemoveReference structure"]
ms.assetid: 43ff91bb-815a-440e-b9fb-7dcbb7c863af
---
# RemoveReference Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<class T>
struct RemoveReference;

template<class T>
struct RemoveReference<T&>;

template<class T>
struct RemoveReference<T&&>;
```

### Parameters

*T*<br/>
A class.

## Remarks

Strips the reference or rvalue-reference trait from the specified class template parameter.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`Type`|Synonym for the class template parameter.|

## Inheritance Hierarchy

`RemoveReference`

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
