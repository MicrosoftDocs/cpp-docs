---
title: "Map::Map Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::Map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::Map Constructor"
ms.assetid: 4cd314eb-e3e3-4fa7-8c58-96e48d167246
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::Map Constructor
Initializes a new instance of the Map class.  
  
## Syntax  
  
```  
explicit Map(  
   const C& comp = C()  
);  
explicit Map(  
   const StdMap& m  
);  
explicit Map(  
   StdMap&& m  
);  
template <  
   typename InIt  
>  
Map(  
   InItfirst,  
   InItlast,  
   const C& comp = C()  
);  
```  
  
#### Parameters  
 `InIt`  
 The typename of the current Map.  
  
 `comp`  
 A type that provides a function object that can compare two element values as sort keys to determine their relative order in the Map.  
  
 `m`  
 A reference or [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a `map Class` that is used to initialize the current Map.  
  
 `first`  
 The input iterator of the first element in a range of elements used to initialize the current Map.  
  
 `last`  
 The input iterator of the first element after a range of elements used to initialize the current Map.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)