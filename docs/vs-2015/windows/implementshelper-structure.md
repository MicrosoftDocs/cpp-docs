---
title: "ImplementsHelper Structure | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::ImplementsHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ImplementsHelper structure"
ms.assetid: b857ba80-81bd-4e53-92b6-210991954243
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ImplementsHelper Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ImplementsHelper Structure](https://docs.microsoft.com/cpp/windows/implementshelper-structure).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename RuntimeClassFlagsT,  
   typename ILst,  
   bool IsDelegateToClass  
>  
friend struct Details::ImplementsHelper;  
```  
  
#### Parameters  
 `RuntimeClassFlagsT`  
 A field of flags that specifies one or more [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumerators.  
  
 `ILst`  
 A list of interface IDs.  
  
 `IsDelegateToClass`  
 Specify `true` if the current instance of Implements is a base class of the first interface ID in `ILst`; otherwise, `false`.  
  
## Remarks  
 Helps implement the [Implements](../windows/implements-structure.md) structure.  
  
 This template traverses a list of interfaces and adds them as base classes, and as information necessary to enable QueryInterface.  
  
## Members  
  
## Inheritance Hierarchy  
 `ImplementsHelper`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Reference (Windows Runtime Library)](http://msdn.microsoft.com/en-us/00000000-0000-0000-0000-000000000000)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

