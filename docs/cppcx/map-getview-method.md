---
title: "Map::GetView Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::GetView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::GetView Method"
ms.assetid: d432bb98-d354-4caa-8c2b-794406ac0b0b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Map::GetView Method
Returns a read-only view of the current Map; that is, a [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md), which implements the [Windows::Foundation::Collections::IMapView\<K,V>](http://msdn.microsoft.com/library/windows/apps/br226037.aspx) interface.  
  
## Syntax  
  
```  
  
Windows::Foundation::Collections::IMapView<K, V>^   
   GetView();  
```  
  
## Return Value  
 A `MapView` object.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)   
 [Platform::Collections::UnorderedMapClass](../cppcx/platform-collections-unorderedmap-class.md)   
 [Collections (C++/CX)](../cppcx/collections-c-cx.md)