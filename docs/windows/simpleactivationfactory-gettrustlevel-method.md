---
title: "SimpleActivationFactory::GetTrustLevel Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleActivationFactory::GetTrustLevel"]
dev_langs: ["C++"]
ms.assetid: 99aa9bc9-d954-4a6f-902b-4abe00e43039
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SimpleActivationFactory::GetTrustLevel Method
Gets the trust level of an instance of the class specified by the `Base` class template parameter.  
  
## Syntax  
  
```cpp  
STDMETHOD(  
   GetTrustLevel  
)(_Out_ TrustLevel* trustLvl);  
```  
  
### Parameters  
 *trustLvl*  
 When this operation completes, the trust level of the current class object.  
  
## Return Value  
 Always S_OK.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [SimpleActivationFactory Class](../windows/simpleactivationfactory-class.md)