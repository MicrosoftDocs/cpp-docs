---
title: "InputIterator::operator!= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::InputIterator::operator!="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InputIterator::operator!= Operator"
ms.assetid: 68a33a74-4bf9-4c91-858e-9c621861b81e
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# InputIterator::operator!= Operator
Indicates whether the current InputIterator is not equal to a specified InputIterator.  
  
## Syntax  
  
```  
bool operator!=(  
   const InputIterator& other  
) const;  
```  
  
#### Parameters  
 `other`  
 Another InputIterator.  
  
## Return Value  
 `true` if the current InputIterator is not equal to `other`; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::InputIterator Class](../cppcx/platform-collections-inputiterator-class.md)