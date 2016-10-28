---
title: "unorm Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "amp_short_vectors/Concurrency::graphics::unorm"
  - "amp/Concurrency::graphics::unorm"
dev_langs: 
  - "C++"
ms.assetid: bc30bd20-6452-4d5f-9158-3b11c4c16ed2
caps.latest.revision: 6
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# unorm Class
Represent a unorm number. Each element is a floating point number in the range of [0.0f, 1.0f].  
  
## Syntax  
  
```  
class unorm;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unorm::unorm Constructor](#unorm__unorm_constructor)|Overloaded. Default constructor. Initialize to 0.0f.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|unorm::operator-- Operator||  
|unorm::operator float Operator|Conversion operator. Convert the unorm number to a floating point value.|  
|unorm::operator*= Operator||  
|unorm::operator/= Operator||  
|unorm::operator++ Operator||  
|unorm::operator+= Operator||  
|unorm::operator= Operator||  
|unorm::operator-= Operator||  
  
## Inheritance Hierarchy  
 `unorm`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="unorm__unorm_constructor"></a>  unorm::unorm Constructor  
 Default constructor. Initialize to 0.0f.  
  
```  
unorm(  
    void  
) restrict(amp,cpu);  
  
explicit unorm(  
    float _V ) restrict(amp,cpu);  
  
explicit unorm(  
    unsigned int _V ) restrict(amp,cpu);  
  
explicit unorm(  
    int _V ) restrict(amp,cpu);  
  
explicit unorm(  
    double _V ) restrict(amp,cpu);  
  
unorm(  
    const unorm& _Other ) restrict(amp,cpu);  
  
inline explicit unorm(  
    const norm& _Other ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_V`  
 The value used to initialize.  
  
 `_Other`  
 The norm object used to initialize.  
  
## See Also  
 [Concurrency::graphics Namespace](../parallel/concurrency--graphics-namespace.md)