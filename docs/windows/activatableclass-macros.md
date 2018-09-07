---
title: "ActivatableClass Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["ActivatableClass", "ActivatableClassWithFactory", "ActivatableClassWithFactoryEx"]
dev_langs: ["C++"]
helpviewer_keywords: ["ActivatableClassWithFactory", "ActivatableClass", "ActivatableClassWithFactoryEx"]
ms.assetid: 9bd64709-ec2c-4678-8c96-ea5982622bdd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ActivatableClass Macros

Populates an internal cache that contains a factory that can create an instance of the specified class.

## Syntax

```cpp
ActivatableClass(
   className
);

ActivatableClassWithFactory(
   className,
   factory
);

ActivatableClassWithFactoryEx(
   className,
   factory,
   serverName
);
```

### Parameters

*className*  
Name of the class to create.

*factory*  
Factory that will create an instance of the specified class.

*serverName*  
A name that specifies a subset of factories in the module.

## Remarks

Do not use these macros with classic COM unless you use the `#undef` directive to ensure that the `__WRL_WINRT_STRICT__` macro definition is removed.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[Module Class](../windows/module-class.md)