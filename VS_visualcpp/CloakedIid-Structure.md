---
title: "CloakedIid Structure"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 82e0e377-ca3a-46bc-b850-ae2c46c15bb5
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# CloakedIid Structure
Indicates to the RuntimeClass, Implements and ChainInterfaces templates that the specified interface is not accessible in the IID list.  
  
## Syntax  
  
```  
template<  
   typename T  
>  
struct CloakedIid : T;  
```  
  
#### Parameters  
 `T`  
 The interface that is hidden (cloaked).  
  
## Remarks  
 The following is an example of how CloakedIid is used: `struct MyRuntimeClass : RuntimeClass<CloakedIid<IMyCloakedInterface>> {}`.  
  
## Inheritance Hierarchy  
 `T`  
  
 `CloakedIid`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)