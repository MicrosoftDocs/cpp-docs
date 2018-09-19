---
title: "HString::Attach Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString::Attach"]
dev_langs: ["C++"]
ms.assetid: 69451979-0014-4959-bc5c-1e4ab6fb28e4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::Attach Method

Associates the specified **HString** object with the current **HString** object.

## Syntax

```cpp
void Attach(
       HSTRING hstr
       ) throw()  
```

### Parameters

*hstr*<br/>
An existing **HString** object.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HString Class](../windows/hstring-class.md)