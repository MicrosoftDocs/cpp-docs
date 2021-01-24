---
description: "Learn more about: DerefHelper Structure"
title: "DerefHelper Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::Details::DerefHelper"]
helpviewer_keywords: ["DerefHelper structure"]
ms.assetid: 86ded58b-c3ee-4a4f-bb86-4f67b895d427
---
# DerefHelper Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename T>
struct DerefHelper;

template <typename T>
struct DerefHelper<T*>;
```

### Parameters

*T*<br/>
A template parameter.

## Remarks

Represent a dereferenced pointer to the `T*` template parameter.

**DerefHelper** is used in an expression such as: `ComPtr<Details::DerefHelper<ProgressTraits::Arg1Type>::DerefType> operationInterface;`.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`DerefType`|Identifier for the dereferenced template parameter `T*`.|

## Inheritance Hierarchy

`DerefHelper`

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
