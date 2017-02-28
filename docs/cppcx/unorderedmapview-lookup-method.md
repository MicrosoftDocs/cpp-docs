---
title: "UnorderedMapView::Lookup Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::Lookup"
ms.assetid: 22f61824-ba8c-4b8c-9077-7577c41a6742
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMapView::Lookup Method
Retrieves the value of type V that is associated with the specified key of type K.  
  
## Syntax  
  
```cpp  
V Lookup(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate an element in the UnorderedMapView. The type of `key` is typename *K*.  
  
## Return Value  
 The value that is paired with the `key`. The type of the return value is typename *V*.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md)