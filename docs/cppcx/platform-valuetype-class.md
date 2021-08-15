---
description: "Learn more about: Platform::ValueType Class"
title: "Platform::ValueType Class"
ms.date: "02/03/2017"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::ValueType::ToString"]
helpviewer_keywords: ["Platform::ValueType Class"]
ms.assetid: 79aa8754-b140-4974-a5b1-be046938a10a
---
# Platform::ValueType Class

The base class for instances of value types.

## Syntax

```cpp
public ref class ValueType : Object
```

## Public methods

| Name | Description |
|--|--|
| [ValueType::ToString](#tostring) | Returns a string representation of the object. Inherited from [Platform::Object](../cppcx/platform-object-class.md). |

### Remarks

The ValueType class is used to construct value types. ValueType is derived from Object, which has basic members. However, the compiler detaches those basic members from value types that are derived from the ValueType class. The compiler reattaches those basic members when a value type is boxed.

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## <a name="tostring"></a> ValueType::ToString Method

Returns a string representation of the object.

### Syntax

```cpp
Platform::String ToString();
```

### Return Value

A Platform::String that represents the value.

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
