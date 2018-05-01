---
title: "Semaphore::operator= Operator | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Semaphore::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= operator"
ms.assetid: ea19839f-91f0-4b00-a35b-5728fcba4981
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Semaphore::operator= Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Semaphore::operator= Operator](https://docs.microsoft.com/cpp/windows/semaphore-operator-assign-operator).  
  
  
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

