---
title: "Mutex::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Mutex::operator="]
dev_langs: ["C++"]
helpviewer_keywords: ["operator= operator"]
ms.assetid: 9b0ee206-a930-4fea-8dc0-1f79839e9d13
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Mutex::operator= Operator
Assigns (moves) the specified **Mutex** object to the current **Mutex** object.  
  
## Syntax  
  
```  
Mutex& operator=(  
   _Inout_ Mutex&& h  
);  
```  
  
### Parameters  
 *h*  
 An rvalue-reference to a **Mutex** object.  
  
## Return Value  
 A reference to the current **Mutex** object.  
  
## Remarks  
 For more information, see the **Move Semantics** section of [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## See Also
 [Mutex Class](../windows/mutex-class1.md)