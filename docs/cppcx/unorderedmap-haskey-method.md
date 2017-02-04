---
title: "UnorderedMap::HasKey Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::HasKey"
ms.assetid: 7c397cdc-82f6-470a-8a3c-f5ba2cc58ed6
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMap::HasKey Method
Determines whether the current UnorderedMap contains the specified key.  
  
## Syntax  
  
```scr  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate the UnorderedMap element. The type of `key` is typename *K*.  
  
## Return Value  
 `true` if the key is found; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::UnorderedMap Class](../cppcx/platform-collections-unorderedmap-class.md)   
 [Collections](../cppcx/collections-c-cx.md)   
 [Windows::Foundation::Collections::IKeyValuePair\<K,V>](http://msdn.microsoft.com/library/windows/apps/br226031.aspx)