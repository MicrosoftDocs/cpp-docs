---
title: "Map::Insert Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::Insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::Insert"
ms.assetid: 3acb2221-c12f-407a-a570-2e52df3569f6
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::Insert Method
Adds the specified key-value pair to the current Map object.  
  
## Syntax  
  
```  
  
virtual bool Insert(  
   K key,   
   V value  
);  
```  
  
#### Parameters  
 `key`  
 The key portion of the key-value pair. The type of `key` is typename *K*.  
  
 `value`  
 The value portion of the key-value pair. The type of `value` is typename *V*.  
  
## Return Value  
 `true` if the key of an existing element in the current Map matches `key` and the value portion of that element is set to `value`. `false` if no existing element in the current Map matches `key` and the `key` and `value` parameters are made into a key-value pair and then added to the current Map.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)