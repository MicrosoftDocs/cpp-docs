---
title: "ActivationFactoryCallback Function"
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
ms.assetid: dd40c79b-1273-4f2a-8c24-ae9926fb4fd9
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
# ActivationFactoryCallback Function
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(  
   HSTRING activationId,  
   IActivationFactory **ppFactory  
);  
```  
  
#### Parameters  
 `activationId`  
 Handle to a string that specifies a runtime class name.  
  
 `ppFactory`  
 When this operation completes, an activation factory that corresponds to  parameter `activationId`.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure. Likely failure HRESULTs are CLASS_E_CLASSNOTAVAILABLE and E_INVALIDARG.  
  
## Remarks  
 Gets the activation factory for the specified activation ID.  
  
 The Windows Runtime calls this callback function to request an object specified by its runtime class name.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)