---
title: "UnorderedMap::Insert Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::Insert"
ms.assetid: 89d55301-3cad-4877-825b-35096a1dd740
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMap::Insert Method
Adds the specified key-value pair to the current UnorderedMap object.  
  
## Syntax  
  
```cpp  
  
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
 `true` if the key of an existing element in the current Map matches `key` and the value portion of that element is set to `value`. `false` if no existing element in the current Map matches `key` and the `key` and `value` parameters are made into a key-value pair and then added to the current UnorderedMap.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections