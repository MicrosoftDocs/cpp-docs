---
title: "default (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
# default (OpenMP)
Specifies the behavior of unscoped variables in a parallel region.  
  
## Syntax  
  
```  
default(shared | none)  
```  
  
## Remarks  
 `shared`, which is in effect if the `default` clause is not specified, means that any variable in a parallel region will be treated as if it were specified with the [shared](../../../parallel/openmp/reference/shared-openmp.md) clause. `none` means that any variables used in a parallel region that are not scoped with the [private](../../../parallel/openmp/reference/private-openmp.md), [shared](../../../parallel/openmp/reference/shared-openmp.md), [reduction](../../../parallel/openmp/reference/reduction.md), [firstprivate](../../../parallel/openmp/reference/firstprivate.md), or [lastprivate](../../../parallel/openmp/reference/lastprivate.md) clause will cause a compiler error.  
  
 `default` applies to the following directives:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 For more information, see [2.7.2.5 default](../../../parallel/openmp/2-7-2-5-default.md).  
  
## Example  
 See [private](../../../parallel/openmp/reference/private-openmp.md) for an example of using `default`.  
  
## See Also  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)