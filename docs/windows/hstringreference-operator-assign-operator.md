---
title: "HStringReference::Operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator="]
dev_langs: ["C++"]
ms.assetid: ea100ed3-e566-4c9e-b6a8-f296088dea9c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HStringReference::Operator= Operator

Moves the value of another **HStringReference** object to the current **HStringReference** object.

## Syntax

```cpp
HStringReference& operator=(HStringReference&& other) throw()  
```

### Parameters

*other*<br/>
An existing **HStringReference** object.

## Remarks

The value of the existing *other* object is copied to the current **HStringReference** object, and then the *other* object is destroyed.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HStringReference Class](../windows/hstringreference-class.md)