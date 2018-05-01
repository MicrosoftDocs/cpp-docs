---
title: "RuntimeClass::GetTrustLevel Method | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClass::GetTrustLevel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetTrustLevel method"
ms.assetid: bd90407e-6dd7-41c3-9ea0-c402c276014a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# RuntimeClass::GetTrustLevel Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [RuntimeClass::GetTrustLevel Method](https://docs.microsoft.com/cpp/windows/runtimeclass-gettrustlevel-method).  
  
  
Gets the trust level of the current RuntimeClass object.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetTrustLevel  
)(_Out_ TrustLevel* trustLvl);  
```  
  
## Parameters  
 `trustLvl`  
 When this operation completes, the trust level of the current RuntimeClass object.  
  
## Return Value  
 Always S_OK.  
  
## Remarks  
 An assert error is emitted if __WRL_STRICT\__or \__WRL_FORCE_INSPECTABLE_CLASS_MACRO\_\_ isn't defined.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [RuntimeClass Class](../windows/runtimeclass-class.md)

