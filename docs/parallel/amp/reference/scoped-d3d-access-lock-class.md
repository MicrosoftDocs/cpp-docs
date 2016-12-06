---
title: "scoped_d3d_access_lock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 0ad333e6-9839-4736-a722-16d95d70c4b1
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# scoped_d3d_access_lock Class
RAII wrapper for a D3D access lock on an accelerator_view object.  
  
### Syntax  
  
```  
class scoped_d3d_access_lock;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[scoped_d3d_access_lock::scoped_d3d_access_lock Constructor](#ctor)|Overloaded. Constructs a `scoped_d3d_access_lock` object. The lock is released when this object goes out of scope.|  
|[scoped_d3d_access_lock::~scoped_d3d_access_lock Destructor](#dtor)|Releases the D3D access lock on the associated `accelerator_view` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[scoped_d3d_access_lock::operator= Operator](#operator_eq)|Takes ownership of a lock from another `scoped_d3d_access_lock`.|  
  
## Inheritance Hierarchy  
 `scoped_d3d_access_lock`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency::direct3d  

##  <a name="ctor"></a> scoped_d3d_access_lock::scoped_d3d_access_lock Constructor
 Constructs a `scoped_d3d_access_lock` object. The lock is released when this object goes out of scope.  
 
```  
explicit scoped_d3d_access_lock(// [1] constructor  
    accelerator_view& _Av);

 
explicit scoped_d3d_access_lock(// [2] constructor  
    accelerator_view& _Av,  
    adopt_d3d_access_lock_t _T);

 
scoped_d3d_access_lock(// [3] move constructor  
    scoped_d3d_access_lock&& _Other);
```  
  
### Parameters  
 `_Av`  
 The `accelerator_view` for the lock to adopt.  
  
 `_T`  
 The `adopt_d3d_access_lock_t` object.  
  
 `_Other`  
 The `scoped_d3d_access_lock` object from which to move an existing lock.  
  
## Construction  
 [1] Constructor  
 Acquires a D3D access lock on the given [accelerator_view](reference/accelerator-view-class.md) object. Construction blocks until the lock is acquired.  
  
 [2] Constructor  
 Adopt a D3D access lock from the given [accelerator_view](reference/accelerator-view-class.md) object.  
  
 [3] Move Constructor  
 Takes an existing D3D access lock from another `scoped_d3d_access_lock` object. Construction does not block.  

  
##  <a name="dtor"></a>  scoped_d3d_access_lock::~scoped_d3d_access_lock Destructor  

 Releases the D3D access lock on the associated `accelerator_view` object.  
  
```  
~scoped_d3d_access_lock();
```  
## <a name="operator_eq"></a>  scoped_d3d_access_lock::operator= Operator
Takes ownership of a D3D access lock from another `scoped_d3d_access_lock` object, releasing the previous lock.  
 
```  
scoped_d3d_access_lock& operator= (scoped_d3d_access_lock&& _Other);
```  
  
### Parameters  
 `_Other`  
 The accelerator_view from which to move the D3D access lock.  
  
### Return Value  
 A reference to this `scoped_accelerator_view_lock`.  

## See Also  
 [Concurrency::direct3d Namespace](concurrency-direct3d-namespace.md)
