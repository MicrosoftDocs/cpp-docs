---
title: "InterfaceList Structure | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::InterfaceList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InterfaceList structure"
ms.assetid: 6ec3228d-eb3e-4b7e-aef1-7dcf17bdf61a
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# InterfaceList Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [InterfaceList Structure](https://docs.microsoft.com/cpp/windows/interfacelist-structure).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T,  
   typename U  
>  
struct InterfaceList;  
```  
  
#### Parameters  
 `T`  
 An interface name; the first interface in the recursive list.  
  
 `U`  
 An interface name; the remaining interfaces in the recursive list.  
  
## Remarks  
 Used to create a recursive list of interfaces.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`FirstT`|Synonym for template parameter `T`.|  
|`RestT`|Synonym for template parameter `U`.|  
  
## Inheritance Hierarchy  
 `InterfaceList`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

