---
title: "MapView::Split Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView::Split"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView::Split Method"
ms.assetid: b863e223-2282-4d1a-b995-77a690120542
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# MapView::Split Method
Divides the current MapView object into two MapView objects. This method is non-operational.  
  
## Syntax  
  
```  
void Split(  
   Windows::Foundation::Collections::IMapView<  
                         K,  
                         V>^ * firstPartition,  
   Windows::Foundation::Collections::IMapView<  
                         K,  
                         V>^ * secondPartition  
);  
```  
  
#### Parameters  
 `firstPartition`  
 The first part of the original MapView object.  
  
 `secondPartition`  
 The second part of the original MapView object.  
  
## Remarks  
 This method is not operational; it does nothing.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md)