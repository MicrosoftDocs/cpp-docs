---
title: "Semaphore::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Semaphore::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= operator"
ms.assetid: ea19839f-91f0-4b00-a35b-5728fcba4981
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
# Semaphore::operator= Operator
Moves the specified handle from a Semaphore object to the current Semaphore object.  
  
## Syntax  
  
```  
Semaphore& operator=(  
   _Inout_ Semaphore&& h  
);  
```  
  
#### Parameters  
 `h`  
 Rvalue-reference to a Semaphore object.  
  
## Return Value  
 A reference to the current Semaphore object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## See Also
 [Semaphore Class](../windows/semaphore-class.md)