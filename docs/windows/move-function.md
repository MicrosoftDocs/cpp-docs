---
title: "Move Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "internal/Microsoft::WRL::Details::Move"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Move function"
ms.assetid: c9525426-97e8-4d8c-9877-b689d8a0dc67
caps.latest.revision: 5
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
# Move Function
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   class T  
>  
inline typename RemoveReference<T>::Type&& Move(  
   _Inout_ T&& arg  
);  
```  
  
#### Parameters  
 `T`  
 The type of the argument.  
  
 `arg`  
 An argument to move.  
  
## Return Value  
 Parameter `arg` after reference or rvalue-reference traits, if any, have been removed.  
  
## Remarks  
 Moves the specified argument from one location to another.  
  
 For more information, see the **Move Semantics** section of [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)