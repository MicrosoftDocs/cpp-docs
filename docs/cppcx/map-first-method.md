---
title: "Map::First Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::First"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::First Method"
ms.assetid: bb1a4458-ecc3-43b0-b808-1693f853ad82
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::First Method
Returns an iterator that specifies the first element in the map, or `nullptr` if the map is empty.  
  
## Syntax  
  
```  
  
virtual Windows::Foundation::Collections::IIterator<  
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();  
```  
  
## Return Value  
 An iterator that specifies the first element in the map.  
  
## Remarks  
 A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **auto** type deduction keyword. For example, `auto x = myMap->First();`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)   
 [Collections (C++/CX)](../cppcx/collections-c-cx.md)