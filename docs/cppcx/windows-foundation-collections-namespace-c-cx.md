---
title: "Windows::Foundation::Collections Namespace (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Windows::Foundation::Collections"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Windows::Foundation::Collections Namespace (C++/CX)"
ms.assetid: 04bd3543-e30f-4fd2-95ee-272a3fcd0158
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# Windows::Foundation::Collections Namespace (C++/CX)
C++/CX supplements the Windows::Foundation::Collections namespace with functions that simplify using the Vector, VectorView, Map, and MapView collection classes.  
  
## Syntax  
  
```  
  
namespace Windows {  
    namespace Foundation {  
        namespace Collections;  
    }  
}  
```  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[back_inserter Function](../cppcx/back-inserter-function.md)|Returns an iterator that can be used to insert a value at the end of a collection.|  
|[begin Function](../cppcx/begin-function.md)|Returns an iterator that points to the beginning of a collection.|  
|[end Function](../cppcx/end-function.md)|Returns an iterator that points beyond the end of a collection.|  
|[to_vector Function](../cppcx/to-vector-function.md)|Returns a collection as a std::vector.|  
  
### Requirements  
 **Header:** collection.h  
  
 **Namespace:** Windows::Foundation::Collections  
  
