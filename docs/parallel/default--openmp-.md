---
title: "default (OpenMP)"
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
  - "default"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "default OpenMP clause"
  - "defaults, OpenMP clause"
ms.assetid: 96055106-a8f0-40b3-8319-e412b6e07bf8
caps.latest.revision: 8
ms.author: "mithom"
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
# default (OpenMP)
Specifies the behavior of unscoped variables in a parallel region.  
  
## Syntax  
  
```  
default(shared | none)  
```  
  
## Remarks  
 `shared`, which is in effect if the `default` clause is not specified, means that any variable in a parallel region will be treated as if it were specified with the [shared](../parallel/shared--openmp-.md) clause. `none` means that any variables used in a parallel region that are not scoped with the [private](../parallel/private--openmp-.md), [shared](../parallel/shared--openmp-.md), [reduction](../parallel/reduction.md), [firstprivate](../parallel/firstprivate.md), or [lastprivate](../parallel/lastprivate.md) clause will cause a compiler error.  
  
 `default` applies to the following directives:  
  
-   [parallel](../parallel/parallel.md)  
  
-   [for](../parallel/for--openmp-.md)  
  
-   [sections](../parallel/sections--openmp-.md)  
  
 For more information, see [2.7.2.5 default](../parallel/2.7.2.5-default.md).  
  
## Example  
 See [private](../parallel/private--openmp-.md) for an example of using `default`.  
  
## See Also  
 [Clauses](../parallel/openmp-clauses.md)