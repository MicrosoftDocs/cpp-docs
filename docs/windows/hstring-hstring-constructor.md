---
title: "HString::HString Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString::HString"]
dev_langs: ["C++"]
ms.assetid: 6da12785-ed01-4720-a004-667db60298f1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::HString Constructor

Initializes a new instance of the **HString** class.

## Syntax

```cpp
HString(HSTRING hstr = nullptr) throw();
HString(HString&& other) throw();
```

#### Parameters

*hstr*  
An HSTRING handle.

*other*  
An existing **HString** object.

## Remarks

The first constructor initializes a new **HString** object that is empty.

The second constructor initializes a new **HString** object to the value of the existing *other* parameter, and then destroys the *other* parameter.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HString Class](../windows/hstring-class.md)