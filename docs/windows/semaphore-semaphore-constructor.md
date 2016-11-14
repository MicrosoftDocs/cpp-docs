---
title: "Semaphore::Semaphore Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Semaphore::Semaphore"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Semaphore, constructor"
ms.assetid: 91c22ae7-181e-460d-ad40-70c3a53b26fd
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
# Semaphore::Semaphore Constructor
Initializes a new instance of the Semaphore class.  
  
## Syntax  
  
```  
explicit Semaphore(  
   HANDLE h  
);  
  
WRL_NOTHROW Semaphore(  
   _Inout_ Semaphore&& h  
);  
```  
  
#### Parameters  
 `h`  
 A handle or an rvalue-reference to a Semaphore object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## See Also
 [Semaphore Class](../windows/semaphore-class.md)