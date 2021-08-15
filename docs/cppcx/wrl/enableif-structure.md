---
description: "Learn more about: EnableIf Structure"
title: "EnableIf Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::EnableIf"]
helpviewer_keywords: ["EnableIf structure"]
ms.assetid: 7825b283-e6b2-4f39-a4b9-c03bcd431b8e
---
# EnableIf Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <bool b, typename T = void>
struct EnableIf;

template <typename T>
struct EnableIf<true, T>;
```

### Parameters

*T*<br/>
A type.

*b*<br/>
A Boolean expression.

## Remarks

Defines a data member of the type specified by the second template parameter if the first template parameter evaluates to **`true`**.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`type`|If template parameter *b* evaluates to **`true`**, the partial specialization defines data member `type` to be of type `T`.|

## Inheritance Hierarchy

`EnableIf`

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
