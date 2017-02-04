---
title: "VectorView::GetMany Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::GetMany"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::GetMany Method"
ms.assetid: 67d9348f-66fe-417e-9e25-5de0a3cd306c
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::GetMany Method
Retrieves a sequence of items from the current VectorView, starting at the specified index.  
  
## Syntax  
  
```  
  
virtual unsigned int GetMany(  
   unsigned int startIndex,   
   ::Platform::WriteOnlyArray<T>^ dest  
);  
```  
  
#### Parameters  
 `startIndex`  
 The zero-based index of the start of the items to retrieve.  
  
 `dest`  
 When this operation completes, an array of items that begin at the element specified by `startIndex` and end at the last element in the VectorView.  
  
## Return Value  
 The number of items retrieved.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [VectorView Class](http://msdn.microsoft.com/en-us/79697692-ae58-40e0-958f-cf1be6347994)