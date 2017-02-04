---
title: "UnorderedMap::Lookup Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::Lookup"
ms.assetid: 6f9bb393-3791-423d-bfee-925e0531e1a5
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMap::Lookup Method
Retrieves the value of type V that is associated with the specified key of type K.  
  
## Syntax  
  
```scr  
V Lookup(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate an element in the UnorderedMap. The type of `key` is typename *K*.  
  
## Return Value  
 The value that is paired with the `key`. The type of the return value is typename *V*.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Collections](../cppcx/collections-c-cx.md)   
 [Platform::Collections::UnorderedMap Class](../cppcx/platform-collections-unorderedmap-class.md)