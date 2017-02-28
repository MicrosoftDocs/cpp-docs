---
title: "VectorIterator::VectorIterator Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::VectorIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::VectorIterator Constructor"
ms.assetid: 93286731-9499-4bfb-a24b-b302479c38cc
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::VectorIterator Constructor
Initializes a new instance of the VectorIterator class.  
  
## Syntax  
  
```  
  
VectorIterator();  
  
explicit VectorIterator(  
   Windows::Foundation::Collections::IVector<T>^ v  
);  
```  
  
#### Parameters  
 `v`  
 An IVector\<T> object.  
  
## Remarks  
 The first syntax example is the default constructor. The second syntax example is an explicit constructor that is used to construct a VectorIterator from an IVector\<T> object.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)