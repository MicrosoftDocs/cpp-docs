---
title: "FactoryCacheFlags Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::FactoryCacheFlags"
dev_langs: 
  - "C++"
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FactoryCacheFlags Enumeration
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FactoryCacheFlags Enumeration](https://docs.microsoft.com/cpp/windows/factorycacheflags-enumeration).  
  
  
Determines whether factory objects are cached.  
  
## Syntax  
  
```cpp  
enum FactoryCacheFlags;  
```  
  
## Remarks  
 By default, the factory caching policy is specified as the [ModuleType](../windows/moduletype-enumeration.md) template parameter when you create a [Module](../windows/module-class.md) object. To override this policy, specify a `FactoryCacheFlags` value when you create a factory object.  
  
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

