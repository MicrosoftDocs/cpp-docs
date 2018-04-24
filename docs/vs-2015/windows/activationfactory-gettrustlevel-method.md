---
title: "ActivationFactory::GetTrustLevel Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::ActivationFactory::GetTrustLevel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetTrustLevel method"
ms.assetid: 31547ae6-d2ab-4039-923c-154d53fb1a8b
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActivationFactory::GetTrustLevel Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActivationFactory::GetTrustLevel Method](https://docs.microsoft.com/cpp/windows/activationfactory-gettrustlevel-method).  
  
  
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
 [ActivationFactory Class](../windows/activationfactory-class.md)

