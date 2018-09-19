---
title: "ArgTraits::args Constant | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::ArgTraits::args"]
dev_langs: ["C++"]
helpviewer_keywords: ["args constant"]
ms.assetid: a68100ab-254b-4571-a0bc-946f1633a46b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ArgTraits::args Constant

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
static const int args = -1; ;
```

## Remarks

Keeps count of the number of parameters on the `Invoke` method of a delegate interface.

## Remarks

When **args** equals -1 indicates there can be no match for the `Invoke` method signature.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ArgTraits Structure](../windows/argtraits-structure.md)<br/>
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)