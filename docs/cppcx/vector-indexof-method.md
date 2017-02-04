---
title: "Vector::IndexOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::IndexOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::IndexOf Method"
ms.assetid: 4a965992-3858-4e3f-992a-b94c0580b2f7
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::IndexOf Method
Searches for the specified item in the current Vector, and if found, returns the index of the item.  
  
## Syntax  
  
```  
  
virtual bool IndexOf(  
   T value,  
   unsigned int* index  
);  
```  
  
#### Parameters  
 `value`  
 The item to find.  
  
 `index`  
 The zero-based index of the item if parameter `value` is found; otherwise, 0.  
  
 The `index` parameter is 0 if either the item is the first element of the Vector or the item was not found. If the return value is `true`, the item was found and it is the first element; otherwise, the item was not found.  
  
## Return Value  
 `true` if the specified item is found; otherwise, `false`.  
  
## Remarks  
 IndexOf uses std::find_if to find the item. Custom element types should therefore overload the == and != operator in order to enable the equality comparisons that find_if requires.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)