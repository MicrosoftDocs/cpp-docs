---
title: "Vector::ReplaceAll Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::ReplaceAll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::ReplaceAll"
ms.assetid: dec905f9-80fc-4aa0-ad04-bbab10feb0b2
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::ReplaceAll Method
Deletes the elements in the current Vector and then inserts the elements from the specified array.  
  
## Syntax  
  
```  
  
virtual void ReplaceAll(  
   const ::Platform::Array<T>^ arr  
);  
```  
  
#### Parameters  
 `arr`  
 An array of objects whose type is defined by the *T* typename.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)