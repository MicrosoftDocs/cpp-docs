---
description: "Learn more about: RuntimeClassFlags Structure"
title: "RuntimeClassFlags Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClassFlags", "implements/Microsoft::WRL::RuntimeClassFlags::value"]
helpviewer_keywords: ["Microsoft::WRL::RuntimeClassFlags structure", "Microsoft::WRL::RuntimeClassFlags::value constant"]
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
---
# RuntimeClassFlags Structure

Contains the type for an instance of a [RuntimeClass](runtimeclass-class.md).

## Syntax

```cpp
template <unsigned int flags>
struct RuntimeClassFlags;
```

### Parameters

*flags*<br/>
A [RuntimeClassType Enumeration](runtimeclasstype-enumeration.md) value.

## Members

### Public Constants

|Name|Description|
|----------|-----------------|
|[RuntimeClassFlags::value Constant](#value-constant)|Contains a [RuntimeClassType Enumeration](runtimeclasstype-enumeration.md) value.|

## Inheritance Hierarchy

`RuntimeClassFlags`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## <a name="value-constant"></a> RuntimeClassFlags::value Constant

A field that contains a [RuntimeClassType Enumeration](runtimeclasstype-enumeration.md) value.

```cpp
static const unsigned int value = flags;
```
