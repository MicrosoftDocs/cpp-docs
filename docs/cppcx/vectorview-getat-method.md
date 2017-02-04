---
title: "VectorView::GetAt Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::GetAt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::GetAt Method"
ms.assetid: 01c5feda-2a97-4429-ae15-4aced96ce332
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::GetAt Method
Retrieves the element of the current VectorView that is indicated by the specified index.  
  
## Syntax  
  
```  
  
T GetAt(  
   UInt32 index  
);  
```  
  
#### Parameters  
 `index`  
 A zero-based, unsigned integer that specifies a particular element in the VectorView object.  
  
## Return Value  
 The element specified by the `index` parameter. The element type is specified by the VectorView template parameter, *T*.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [VectorView Class](http://msdn.microsoft.com/en-us/79697692-ae58-40e0-958f-cf1be6347994)