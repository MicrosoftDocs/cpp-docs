---
title: "Vector::GetAt Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::GetAt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::GetAt Method"
ms.assetid: 3766b399-cef2-4006-9a87-50f717390cac
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::GetAt Method
Retrieves the element of the current Vector that is identifed by the specified index.  
  
## Syntax  
  
```  
  
virtual T GetAt(  
   unsigned int index  
);  
```  
  
#### Parameters  
 `index`  
 A zero-based, unsigned integer that specifies a particular element in the Vector object.  
  
## Return Value  
 The element specified by the `index` parameter. The element type is defined by the *T* typename.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)