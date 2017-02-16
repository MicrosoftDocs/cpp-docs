---
title: "VectorView::IndexOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::IndexOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::IndexOf Method"
ms.assetid: 848117ec-ad4a-4a0b-9c1e-9076e5188869
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::IndexOf Method
Searches for the specified item in the current VectorView, and if found, returns the index of the item.  
  
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
  
 The `index` parameter is 0 if either the item is the first element of the VectorView or the item was not found. If the return value is `true`, the item was found and it is the first element; otherwise, the item was not found.  
  
## Return Value  
 `true` if the specified item is found; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [VectorView Class](http://msdn.microsoft.com/en-us/79697692-ae58-40e0-958f-cf1be6347994)