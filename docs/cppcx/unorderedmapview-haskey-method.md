---
title: "UnorderedMapView::HasKey Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::HasKey"
ms.assetid: 4704da18-8606-4df7-be51-d125b2e4aee0
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMapView::HasKey Method
Determines whether the current UnorderedMap contains the specified key.  
  
## Syntax  
  
```cpp  
  
bool HasKey(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate the element. The type of `key` is typename *K*.  
  
## Return Value  
 `true` if the key is found; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::UnorderedMap Class](../cppcx/platform-collections-unorderedmap-class.md)   
 [Collections](../cppcx/collections-c-cx.md)   
 [Windows::Foundation::Collections::IKeyValuePair\<K,V>](http://msdn.microsoft.com/library/windows/apps/br226031.aspx)