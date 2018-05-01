---
title: "ClassFactory::QueryInterface Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::ClassFactory::QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QueryInterface method"
ms.assetid: 9593881f-4585-4d70-8ca6-b328918d4d6b
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ClassFactory::QueryInterface Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ClassFactory::QueryInterface Method](https://docs.microsoft.com/cpp/windows/classfactory-queryinterface-method).  
  
  
Retrieves a pointer to the interface specified by parameter.  
  
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
 When this operation completes, a pointer to the interface specified by parameter `riid`.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ClassFactory Class](../windows/classfactory-class.md)

