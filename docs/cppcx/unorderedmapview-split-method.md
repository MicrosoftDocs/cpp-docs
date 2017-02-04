---
title: "UnorderedMapView::Split Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::Split"
ms.assetid: b759d254-40c9-40f1-9838-106ffb2c5626
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMapView::Split Method
Divides the current UnorderedMapView object into two UnorderedMapView objects. This method is non-operational.  
  
## Syntax  
  
```cpp  
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
 The first part of the original UnorderedMapView object.  
  
 `secondPartition`  
 The second part of the original UnorderedMapView object.  
  
## Remarks  
 This method is not operational; it does nothing.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md)