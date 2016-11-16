---
title: "ChainInterfaces::Verify Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::ChainInterfaces::Verify"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Verify method"
ms.assetid: c591e130-8686-4130-ba69-1aaedc250038
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# ChainInterfaces::Verify Method
Verifies that each interface defined by template parameters `I0` through `I9` inherits from IUnknown and/or IInspectable, and that `I0` inherits from `I1` through `I9`.  
  
## Syntax  
  
```  
WRL_NOTHROW __forceinline static void Verify();  
```  
  
## Remarks  
 If the verification operation fails, a `static_assert` emits an error message describing the failure.  
  
## Remarks  
 Template parameters `I0` and `I1` are required, and parameters `I2` through `I9` are optional.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ChainInterfaces Structure](../windows/chaininterfaces-structure.md)