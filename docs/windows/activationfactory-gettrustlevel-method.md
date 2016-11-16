---
title: "ActivationFactory::GetTrustLevel Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 3
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
 [ActivationFactory Class](../windows/activationfactory-class.md)