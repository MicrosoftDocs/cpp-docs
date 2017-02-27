---
title: "MapView::Lookup Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::Lookup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::Lookup Method"
ms.assetid: 93090ac3-3f1d-4b7e-b80e-164b8c65cd29
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::Lookup Method
Retrieves the value of type V that is associated with the specified key of type K.  
  
## Syntax  
  
```  
V Lookup(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate an element in the MapView. The type of `key` is typename *K*.  
  
## Return Value  
 The value that is paired with the `key`. The type of the return value is typename *V*.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md)