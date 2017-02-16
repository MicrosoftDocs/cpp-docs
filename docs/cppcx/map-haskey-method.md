---
title: "Map::HasKey Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::HasKey"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::HasKey Method"
ms.assetid: ba7864af-056a-4b7b-843d-08c45b7f7394
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::HasKey Method
Determines whether the current Map contains the specified key.  
  
## Syntax  
  
```  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate the Map element. The type of `key` is typename *K*.  
  
## Return Value  
 `true` if the key is found; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)