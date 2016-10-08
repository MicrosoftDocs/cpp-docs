---
title: "CreatorMap::factoryCreator Data Member"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: c9aac363-8f38-4cfd-9605-1e6ac74c5097
caps.latest.revision: 6
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
# CreatorMap::factoryCreator Data Member
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
HRESULT (*factoryCreator)(  
   unsigned int* currentflags,  
   const CreatorMap* entry,  
   REFIID iidClassFactory,  
 IUnknown** factory);  
```  
  
## Parameters  
 `currentflags`  
 One of the [RuntimeClassType](../VS_visualcpp/RuntimeClassType-Enumeration.md) enumerators.  
  
 `entry`  
 A CreatorMap.  
  
 `iidClassFactory`  
 The interface ID of a class factory.  
  
 `factory`  
 When the operation completes, the address of a class factory.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 Creates a factory for the specified CreatorMap.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [CreatorMap Structure](../VS_visualcpp/CreatorMap-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)