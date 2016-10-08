---
title: "VerifyInterfaceHelper Structure"
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
ms.assetid: ea95b641-199a-4fdf-964b-186b40cb3ba7
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
# VerifyInterfaceHelper Structure
Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   bool isWinRTInterface,  
   typename I  
>  
struct VerifyInterfaceHelper;  
  
template <  
   typename I  
>  
struct VerifyInterfaceHelper<false, I>;  
```  
  
#### Parameters  
 `I`  
 An interface to verify.  
  
 `isWinRTInterface`  
  
## Remarks  
 Verifies that the interface specified by the template parameter meets certain requirements.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[VerifyInterfaceHelper::Verify Method](../VS_visualcpp/VerifyInterfaceHelper--Verify-Method.md)||  
  
## Inheritance Hierarchy  
 `VerifyInterfaceHelper`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)