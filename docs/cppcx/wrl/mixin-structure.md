---
description: "Learn more about: MixIn Structure"
title: "MixIn Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::MixIn"]
helpviewer_keywords: ["MixIn structure"]
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
---
# MixIn Structure

Ensures that a runtime class derives from Windows Runtime interfaces, if any, and then classic COM interfaces.

## Syntax

```cpp
template<
    typename Derived,
    typename MixInType,
    bool hasImplements = __is_base_of(Details::ImplementsBase, MixInType)
>
struct MixIn;
```

### Parameters

*Derived*<br/>
A type derived from the [Implements](implements-structure.md) structure.

*MixInType*<br/>
A base type.

*hasImplements*<br/>
**`true`** if *MixInType* is derived from the current implementation the base type; **`false`** otherwise.

## Remarks

If a class is derived from both Windows Runtime and class COM interfaces, the class declaration list must first list any Windows Runtime interfaces and then any classic COM interfaces. **MixIn** ensures that the interfaces are specified in the correct order.

## Inheritance Hierarchy

`MixIn`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
