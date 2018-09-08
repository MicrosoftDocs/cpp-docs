---
title: "RuntimeClassFlags Structure | Microsoft Docs"
ms.custom: ""
ms.date: "09/07/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClassFlags", "implements/Microsoft::WRL::RuntimeClassFlags::value"]
dev_langs: ["C++"]
helpviewer_keywords: ["RuntimeClassFlags structure", "value constant"]
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClassFlags Structure

Contains the type for an instance of a [RuntimeClass](../windows/runtimeclass-class.md).

## Syntax

```cpp
template <
   unsigned int flags
>
struct RuntimeClassFlags;
```

### Parameters

*flags*  
A [RuntimeClassType Enumeration](../windows/runtimeclasstype-enumeration.md) value.

## Members

### Public Constants

|Name|Description|
|----------|-----------------|
|[RuntimeClassFlags::value Constant](#value-constant)|Contains a [RuntimeClassType Enumeration](../windows/runtimeclasstype-enumeration.md) value.|

## Inheritance Hierarchy

`RuntimeClassFlags`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## <a name="value-constant"></a>RuntimeClassFlags::value Constant

A field that contains a [RuntimeClassType Enumeration](../windows/runtimeclasstype-enumeration.md) value.
  
### Syntax
  
```cpp
static const unsigned int value = flags;
```
  
### Requirements
 
**Header:** implements.h
  
**Namespace:** Microsoft::WRL
