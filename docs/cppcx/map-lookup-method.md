---
title: "Map::Lookup Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::Lookup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::Lookup Method"
ms.assetid: c56773ae-2df0-4d21-a6ab-9603529547b0
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::Lookup Method
Retrieves the value of type V that is associated with the specified key of type K, if the key exists.  
  
## Syntax  
  
```  
V Lookup(  
   K key  
);  
```  
  
#### Parameters  
 `key`  
 The key used to locate an element in the Map. The type of `key` is typename *K*.  
  
## Return Value  
 The value that is paired with the `key`. The type of the return value is typename *V*.  
  
## Remarks  
 If the key does not exist, then a [Platform::OutOfBoundsException](../cppcx/platform-outofboundsexception-class.md) is thrown.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)   
 [Collections (C++/CX)](../cppcx/collections-c-cx.md)