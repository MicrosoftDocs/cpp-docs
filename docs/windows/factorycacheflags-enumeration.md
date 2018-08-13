---
title: "FactoryCacheFlags Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::FactoryCacheFlags"]
dev_langs: ["C++"]
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# FactoryCacheFlags Enumeration
Determines whether factory objects are cached.  
  
## Syntax  
  
```cpp  
enum FactoryCacheFlags;  
```  
  
## Remarks  
 By default, the factory caching policy is specified as the [ModuleType](../windows/moduletype-enumeration.md) template parameter when you create a [Module](../windows/module-class.md) object. To override this policy, specify a **FactoryCacheFlags** value when you create a factory object.  
  
|||  
|-|-|  
|`FactoryCacheDefault`|The caching policy of the `Module` object is used.|  
|`FactoryCacheEnabled`|Enables factory caching regardless of the `ModuleType` template parameter that is used to create a `Module` object.|  
|`FactoryCacheDisabled`|Disables factory caching regardless of the `ModuleType` template parameter that is used to create a `Module` object.|  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)