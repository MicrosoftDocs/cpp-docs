---
title: "ArgTraitsHelper::args Constant | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::ArgTraitsHelper::args"]
dev_langs: ["C++"]
helpviewer_keywords: ["args constant"]
ms.assetid: 1c0efa32-c072-43e3-bbd9-a3f6aec069a2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ArgTraitsHelper::args Constant

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
static const int args = Traits::args;  
```

## Remarks

Helps [ArgTraitsHelper::args](../windows/argtraitshelper-args-constant.md) keep count of the number of parameters on the `Invoke` method of a delegate interface.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ArgTraitsHelper Structure](../windows/argtraitshelper-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)