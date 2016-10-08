---
title: "ActivationFactory::GetTrustLevel Method"
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
ms.assetid: 31547ae6-d2ab-4039-923c-154d53fb1a8b
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
# ActivationFactory::GetTrustLevel Method
Gets the trust level of the object that the current ActivationFactory instantiates.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetTrustLevel  
)(_Out_ TrustLevel* trustLvl);  
```  
  
#### Parameters  
 `trustLvl`  
 When this operation completes, the trust level of the runtime class that the ActivationFactory instantiates.  
  
## Return Value  
 S_OK if successful; otherwise, an assertion error is emitted and `trustLvl` is set to FullTrust.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ActivationFactory Class](../VS_visualcpp/ActivationFactory-Class.md)