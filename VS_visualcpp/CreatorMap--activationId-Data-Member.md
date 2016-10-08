---
title: "CreatorMap::activationId Data Member"
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
ms.assetid: 77518b76-6e6a-4b48-8e2e-a4c7c67769e0
caps.latest.revision: 5
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
# CreatorMap::activationId Data Member
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
union {   
   const IID* clsid;  
   const wchar_t* (*getRuntimeName)();  
} activationId;  
```  
  
## Parameters  
 `clsid`  
 An interface ID.  
  
 `getRuntimeName`  
 A function that retrieves the Windows runtime name of an object.  
  
## Remarks  
 Represents an object ID that is identified either by a classic COM class ID or a Windows runtime name.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [CreatorMap Structure](../VS_visualcpp/CreatorMap-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)