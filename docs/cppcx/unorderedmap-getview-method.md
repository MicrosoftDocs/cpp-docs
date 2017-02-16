---
title: "UnorderedMap::GetView Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::GetView"
ms.assetid: 41a12802-3f42-461c-a6fc-a35fc34517f2
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMap::GetView Method
Returns a read-only view of the current UnorderedMap; that is, an [Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md) that implements the [Windows::Foundation::Collections::IMapView::IMapView](http://msdn.microsoft.com/library/windows/apps/br226037.aspx) interface.  
  
## Syntax  
  
```scr  
  
Windows::Foundation::Collections::IMapView<K, V>^   
   GetView();  
```  
  
## Return Value  
 An `UnorderedMapView` object.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Collections](../cppcx/collections-c-cx.md)   
 [Platform::Collections::UnorderedMap Class](../cppcx/platform-collections-unorderedmap-class.md)   
 [Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md)