---
title: "norm Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["norm", "AMP_SHORT_VECTORS/norm", "AMP_SHORT_VECTORS/Concurrency::graphics::norm Constructor"]
dev_langs: ["C++"]
ms.assetid: 73002f3d-c25e-4119-bcd3-4c46c9b6abf1
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# norm Class
Represent a norm number. Each element is a floating point number in the range of [-1.0f, 1.0f].  
  
## Syntax  
  
```  
class norm;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[norm Constructor](#ctor)|Overloaded. Default constructor. Initialize to 0.0f.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|norm::operator-||  
|norm::operator--||  
|norm::operator float|Conversion operator. Convert the norm number to a floating point value.|  
|norm::operator*=||  
|norm::operator/=||  
|norm::operator++||  
|norm::operator+=||  
|norm::operator=||  
|norm::operator-=||  
  
## Inheritance Hierarchy  
 `norm`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="ctor"></a> norm 

 Default constructor. Initialize to 0.0f.  
  
```  
norm(
    void) restrict(amp,
    cpu);

 
explicit norm(
    float _V) restrict(amp,
    cpu);

 
explicit norm(
    unsigned int _V) restrict(amp,
    cpu);

 
explicit norm(
    int _V) restrict(amp,
    cpu);

 
explicit norm(
    double _V) restrict(amp,
    cpu);

 
norm(
    const norm& _Other) restrict(amp,
    cpu);

 
norm(
    const unorm& _Other) restrict(amp,
    cpu);
```  
  
### Parameters  
 `_V`  
 The value used to initialize.  
  
 `_Other`  
 The object used to initialize.  
  
## See Also  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
