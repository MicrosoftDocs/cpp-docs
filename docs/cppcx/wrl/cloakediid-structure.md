---
description: "Learn more about: CloakedIid Structure"
title: "CloakedIid Structure"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::CloakedIid"]
helpviewer_keywords: ["CloakedIid structure"]
ms.assetid: 82e0e377-ca3a-46bc-b850-ae2c46c15bb5
---
# CloakedIid Structure

Indicates to the `RuntimeClass`, `Implements` and `ChainInterfaces` templates that the specified interface is not accessible in the IID list.

## Syntax

```cpp
template<typename T>
struct CloakedIid : T;
```

#### Parameters

*T*<br/>
The interface that is hidden (cloaked).

## Remarks

The following is an example of how **CloakedIid** is used: `struct MyRuntimeClass : RuntimeClass<CloakedIid<IMyCloakedInterface>> {}`.

## Inheritance Hierarchy

`T`

`CloakedIid`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
