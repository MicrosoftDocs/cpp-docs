---
description: "Learn more about: InterfaceList Structure"
title: "InterfaceList Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::InterfaceList"]
helpviewer_keywords: ["InterfaceList structure"]
ms.assetid: 6ec3228d-eb3e-4b7e-aef1-7dcf17bdf61a
---
# InterfaceList Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename T, typename U>
struct InterfaceList;
```

### Parameters

*T*<br/>
An interface name; the first interface in the recursive list.

*U*<br/>
An interface name; the remaining interfaces in the recursive list.

## Remarks

Used to create a recursive list of interfaces.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`FirstT`|Synonym for template parameter *T*.|
|`RestT`|Synonym for template parameter *U*.|

## Inheritance Hierarchy

`InterfaceList`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
