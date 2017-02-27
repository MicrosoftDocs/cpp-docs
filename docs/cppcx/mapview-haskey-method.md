---
title: "MapView::HasKey Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::HasKey"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::HasKey Method"
ms.assetid: c1a24f63-e6fd-4cfd-90ce-b89352b98324
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::HasKey Method
Determines whether the current MapView contains the specified key.  
  
## Syntax  
  
```  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate the MapView element. The type of `key` is typename *K*.  
  
## Return Value  
 `true` if the key is found; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md)