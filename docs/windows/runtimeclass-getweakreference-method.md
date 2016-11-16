---
title: "RuntimeClass::GetWeakReference Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClass::GetWeakReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetWeakReference method"
ms.assetid: 26656ace-7f20-4364-87c9-4a75dd30912e
caps.latest.revision: 4
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
# RuntimeClass::GetWeakReference Method
Gets a pointer to the weak reference object for the current RuntimeClass object.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetWeakReference  
)(_Deref_out_ IWeakReference **weakReference);  
```  
  
#### Parameters  
 `weakReference`  
 When this operation completes, a pointer to a weak reference object.  
  
## Return Value  
 Always S_OK.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [RuntimeClass Class](../windows/runtimeclass-class.md)