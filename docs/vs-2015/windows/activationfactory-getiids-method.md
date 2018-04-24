---
title: "ActivationFactory::GetIids Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::ActivationFactory::GetIids"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetIids method"
ms.assetid: 0983d709-d155-4d65-aae4-5b2c8bb0fede
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActivationFactory::GetIids Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActivationFactory::GetIids Method](https://docs.microsoft.com/cpp/windows/activationfactory-getiids-method).  
  
  
Retrieves an array of implemented interface IDs.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetIids  
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);  
```  
  
#### Parameters  
 `iidCount`  
 When this operation completes, the number of interace IDs in the `iids` array.  
  
 `iids`  
 When this operation completes, an array of implemented interface IDs.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure. E_OUTOFMEMORY is a possible failure HRESULT.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ActivationFactory Class](../windows/activationfactory-class.md)

