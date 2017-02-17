---
title: "MapView::MapView Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::MapView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::MapView Constructor"
ms.assetid: 67a3250c-b527-47ac-a103-0fd186046d71
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::MapView Constructor
Initializes a new instance of the MapView class.  
  
## Syntax  
  
```  
explicit MapView(  
    const C& comp = C()  
    );  
  
explicit MapView(  
    const ::std::map<K, V, C>& m  
    );  
  
explicit MapView(  
    std::map<K, V, C>&& m  
    );  
  
template <typename InIt> MapView(  
    InIt first,  
    InIt last,  
    const C& comp = C()  
    );  
  
MapView(::std::initializer_list<  
    std::pair<const K, V>> il,  
    const C& comp = C()  
    );  
```  
  
#### Parameters  
 `InIt`  
 The typename of the current MapView.  
  
 `comp`  
 A function object that can compare two element values as sort keys to determine their relative order in the MapView.  
  
 `m`  
 A reference or [Lvalues and Rvalues](.../cpp/lvalues-and-rvalues-visual-cpp.md) to a [map Class](../Topic/map%20Class.md) that is used to initialize the current MapView.  
  
 `first`  
 The input iterator of the first element in a range of elements used to initialize the current MapView.  
  
 `last`  
 The input iterator of the first element after a range of elements used to initialize the current MapView.  
  
 il  
 A [std::initializer_list<std::pair\<K,V>>](../standard-library/initializer-list-class.md) whose elements will be inserted into the MapView.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md)