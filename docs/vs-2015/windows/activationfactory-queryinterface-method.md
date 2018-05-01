---
title: "ActivationFactory::QueryInterface Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::ActivationFactory::QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QueryInterface method"
ms.assetid: 2a9b71aa-61c0-43f7-aa35-00f0ee0af031
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActivationFactory::QueryInterface Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActivationFactory::QueryInterface Method](https://docs.microsoft.com/cpp/windows/activationfactory-queryinterface-method).  
  
  
Retrieves a pointer to the specified interface.  
  
## Syntax  
  
```  
STDMETHOD(  
   QueryInterface  
)(REFIID riid, _Deref_out_ void **ppvObject);  
```  
  
#### Parameters  
 `riid`  
 An interface ID.  
  
 `ppvObject`  
 When this operation is complete, a pointer to the interface specified by parameter `riid`.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ActivationFactory Class](../windows/activationfactory-class.md)

