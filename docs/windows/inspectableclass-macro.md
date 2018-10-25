---
title: "InspectableClass Macro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::InspectableClass"]
dev_langs: ["C++"]
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InspectableClass Macro

Sets the runtime class name and trust level.

## Syntax

```cpp
InspectableClass(
   runtimeClassName,
   trustLevel)
```

### Parameters

*runtimeClassName*<br/>
The full textual name of the runtime class.

*trustLevel*<br/>
One of the [TrustLevel](https://msdn.microsoft.com/library/br224625.aspx) enumerated values.

## Remarks

The **InspectableClass** macro can be used only with Windows Runtime types.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[RuntimeClass Class](../windows/runtimeclass-class.md)